package fr.edpurolo.freelearning.page.irrigator;

import fr.edpurolo.freelearning.entity.BaseUser;
import fr.edpurolo.freelearning.repository.BaseUserRepository;
import fr.edpurolo.freelearning.security.AuthenticationInfos;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.ui.Model;

@Service
@RequiredArgsConstructor
public class RecrutementIrrigator {

    private final BaseUserRepository baseUserRepository;
    public void irrigateBaseRecrutement(AuthenticationInfos userInfos, Model model) {
        BaseUser baseUser = baseUserRepository.findById(userInfos.getId()).orElseThrow();
        model.addAttribute("user", baseUser);
    }
}

