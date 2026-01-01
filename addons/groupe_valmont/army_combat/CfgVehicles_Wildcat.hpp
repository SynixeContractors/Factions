class CLASS2(SIDE,Wildcat_Pylons): GCLASS(Wildcat_Pylons) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Black",1};
    hiddenSelectionsTextures[] = {"\lxRF\air_rf\Heli_Light_03\data\Heli_Light_03_base_black_CO.paa","a3\weapons_f\ammoboxes\data\ammobox_co.paa","a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"};
    crew = QCLASS2(SIDE,HeliPilot);
    typicalCargo[] = {QCLASS2(SIDE,HeliPilot)};
};

class CLASS2(SIDE,Wildcat): GCLASS(Wildcat) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Black",1};
    hiddenSelectionsTextures[] = {"\lxRF\air_rf\Heli_Light_03\data\Heli_Light_03_base_black_CO.paa","a3\weapons_f\ammoboxes\data\ammobox_co.paa","a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"};
    crew = QCLASS2(SIDE,HeliPilot);
    typicalCargo[] = {QCLASS2(SIDE,HeliPilot)};
};
