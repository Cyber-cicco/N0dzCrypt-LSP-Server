package fr.edpurolo.freelearning.security;

import fr.edpurolo.freelearning.entity.enums.RoleType;
import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.util.ArrayList;
import java.util.List;

@Data
@Builder
@AllArgsConstructor
@NoArgsConstructor
public class AuthenticationInfos {
    private List<String> roles = new ArrayList<>();
    private String email;
    private String token;
    private Long id;

    public boolean isBaseUser(){
        return roles.contains(RoleType.ROLE_USER.getName());
    }

    public boolean isAdministrateur(){
        return roles.contains(RoleType.ROLE_ADMIN.getName());
    }
}

