package fr.edpurolo.freelearning.page.irrigator;

import fr.edpurolo.freelearning.security.AuthenticationInfos;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.ui.Model;

@Service
@RequiredArgsConstructor
public class LayoutIrrigator {

    public void irrigateBaseLayout(Model model, String fragmentAdress) {
        model.addAttribute("routerOutlet", fragmentAdress);
    }
}

