package fr.edpurolo.freelearning.page;

import fr.edpurolo.freelearning.entity.UserRole;
import fr.edpurolo.freelearning.entity.BaseUser;
import fr.edpurolo.freelearning.page.irrigator.LayoutIrrigator;
import fr.edpurolo.freelearning.repository.BaseUserRepository;
import fr.edpurolo.freelearning.security.AuthenticationInfos;
import fr.edpurolo.freelearning.security.service.JwtService;
import fr.edpurolo.freelearning.util.hx.HX;
import jakarta.servlet.http.HttpServletResponse;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpHeaders;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

import java.io.IOException;
import java.util.Optional;
import java.util.stream.Collectors;

@Controller
@RequiredArgsConstructor
public class LoginController {

    private final BaseUserRepository BaseUserRepository;
    private final JwtService jwtService;
    private final PasswordEncoder passwordEncoder;
    private final LayoutIrrigator layoutIrrigator;

    @GetMapping("/login")
    public String getloginPage(){
        return Routes.ADR_LOGIN;
    }
    @GetMapping("/login/partial")
    public void redirectToLogin(HttpServletResponse response) throws IOException {
        response.setHeader(HX.REDIRECT, "/login");
    }

    @Getter
    @Setter
    @AllArgsConstructor
    private static class LoginDto{private String email; private String password;}

    @PostMapping("/login")
    public String login(@ModelAttribute LoginDto loginDto, Model model, HttpServletResponse response){
        Optional<BaseUser> auth = BaseUserRepository.findByEmail(loginDto.email)
                .filter(baseUser -> passwordEncoder.matches(loginDto.password, baseUser.getPassword())) ;
        if(auth.isPresent()){
            response.setHeader(HttpHeaders.SET_COOKIE, jwtService.buildJWTCookie(auth.get()));
            layoutIrrigator.irrigateBaseLayout(model, Routes.ADR_HOME);
            response.setHeader(HX.REDIRECT, "profile");
            return Routes.ADR_BASE_LAYOUT;
        }
        model.addAttribute("error", "Votre adresse e-mail ou mot de passe est invalide");
        return Routes.ADR_FORM_ERROR;
    }
}

