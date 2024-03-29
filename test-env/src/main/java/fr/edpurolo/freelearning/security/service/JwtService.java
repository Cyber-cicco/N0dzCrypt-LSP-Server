package fr.edpurolo.freelearning.security.service;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;
import fr.edpurolo.freelearning.entity.UserRole;
import fr.edpurolo.freelearning.entity.BaseUser;
import io.jsonwebtoken.Claims;
import io.jsonwebtoken.Jwts;
import io.jsonwebtoken.SignatureAlgorithm;
import jakarta.annotation.PostConstruct;
import lombok.Getter;
import lombok.Setter;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Configuration;
import org.springframework.http.ResponseCookie;
import org.springframework.stereotype.Service;

import javax.crypto.spec.SecretKeySpec;
import java.security.Key;
import java.util.Base64;
import java.util.Date;
import java.util.List;
import java.util.Map;
import java.util.function.Function;
import java.util.stream.Collectors;

@Configuration
@Getter
@Setter
@Service
public class JwtService {
    @Value("${jwt.expires_in}")
    private long expireIn;

    @Value("${jwt.cookie}")
    private String cookie;

    @Value("${jwt.secret}")
    private String secret;

    private Key secretKey;

    /**
     * Creates JWT Secret Key
     */
    @PostConstruct
    public void buildKey() {
        secretKey = new SecretKeySpec(Base64.getDecoder().decode(getSecret()),
                SignatureAlgorithm.HS256.getJcaName());
    }


    /**
     * Creates JWT with user infos
     * @param user the user
     * @return the JWT
     */
    public String buildJWTCookie(BaseUser user) {
        ObjectMapper objectMapper = new ObjectMapper();
        String jetonJWT = null;
        try {
            jetonJWT = Jwts.builder()
                    .setSubject(user.getEmail())
                            .addClaims(Map.of("role",  objectMapper.writeValueAsString(user.getUserRoles().stream()
                            .map(UserRole::getLibelle)
                            .collect(Collectors.toList()))
                    ))

                    .addClaims(Map.of("id", user.getId()))
                    .setExpiration(new Date(System.currentTimeMillis() + getExpireIn() * 1000))
                    .signWith(
                            getSecretKey()
                    ).compact();
        } catch (JsonProcessingException e) {
            throw new RuntimeException(e);
        }
        ResponseCookie tokenCookie = ResponseCookie.from(getCookie(), jetonJWT)
                .httpOnly(false)
                .maxAge(getExpireIn() * 1000)
                .path("/")
                .sameSite("Lax")
                .build();

        return tokenCookie.toString();
    }

    /**
     * get email from jwt
     * @param token jwt
     * @return the email
     */
    public String extractEmail(String token) {
        return extractClaim(token, Claims::getSubject);
    }

    public String extractEmail(Claims claims) {
        return claims.getSubject();
    }

    public List<String> extractRoles(String token){
        Claims tokenClaims = extractAllClaims(token);
        return extractRoles(tokenClaims);
    }

    public List<String> extractRoles(Claims claims){
        ObjectMapper objectMapper = new ObjectMapper();
        String rolesAsJson = claims.get("role", String.class);
        try {
            return objectMapper.readValue(rolesAsJson, List.class);
        } catch (JsonProcessingException e) {
            throw new RuntimeException(e);
        }
    }

    public Long extractId(String token){
        Claims tokenClaims = extractAllClaims(token);
        return tokenClaims.get("id", Long.class);
    }

    public Long extractId(Claims claims){
        return claims.get("id", Long.class);
    }

    public <T> T extractClaim(String token, Function<Claims, T> claimsResolver){
        final Claims claims = extractAllClaims(token);
        return claimsResolver.apply(claims);
    }

    public Claims extractAllClaims(String token){
        return Jwts
                .parserBuilder()
                .setSigningKey(getSecretKey())
                .build()
                .parseClaimsJws(token)
                .getBody();
    }
}

