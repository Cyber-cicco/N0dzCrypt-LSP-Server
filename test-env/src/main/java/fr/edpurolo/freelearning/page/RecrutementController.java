package fr.edpurolo.freelearning.page;


import fr.edpurolo.freelearning.page.irrigator.LayoutIrrigator;
import fr.edpurolo.freelearning.page.irrigator.RecrutementIrrigator;
import fr.edpurolo.freelearning.security.service.AuthenticationService;
import fr.edpurolo.freelearning.security.AuthenticationInfos;

import jakarta.servlet.http.HttpServletResponse;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;
import lombok.RequiredArgsConstructor;

@Controller
@RequiredArgsConstructor
@RequestMapping("recrutement")
public class RecrutementController {

    private final LayoutIrrigator layoutIrrigator;
    private final AuthenticationService authenticationService;
    private final RecrutementIrrigator recrutementIrrigator;

    @GetMapping
    public String getRecrutement(Model model, HttpServletResponse response) {
        AuthenticationInfos userInfos = authenticationService.getAuthInfos();
        recrutementIrrigator.irrigateBaseRecrutement(userInfos, model);
        layoutIrrigator.irrigateBaseLayout(model, Routes.ADR_RECRUTEMENT);
        return Routes.ADR_BASE_LAYOUT;
    }
    @GetMapping("/partial")
    public String getRecrutementPartial(Model model, HttpServletResponse response) {
        AuthenticationInfos userInfos = authenticationService.getAuthInfos();
        recrutementIrrigator.irrigateBaseRecrutement(userInfos, model);
        return Routes.ADR_RECRUTEMENT;
    }
}
