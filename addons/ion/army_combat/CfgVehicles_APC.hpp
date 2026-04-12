class CLASS2(SIDE,Otokar): GCLASS(Otokar) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Black",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_T_APC_Wheeled_02_unarmed_lxWS.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman)};
};

class CLASS2(SIDE,Otokar_HMG): GCLASS(Otokar_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Black",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_ION_APC_Wheeled_02_hmg_lxWS.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman)};
};

class CLASS2(SIDE,Badger): GCLASS(Badger) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"ION_BLACK",1};
    hiddenSelectionsTextures[] = {
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_ion_base_CO.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\apc_wheeled_ion_adds_co.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\apc_wheeled_ion_tows_co.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\cage_black_CO.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_ion_lxws_CO.paa"
        };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_T_APC_Wheeled_02_unarmed_lxWS.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman)};
};

class CLASS2(SIDE,Badger_ATGM): GCLASS(Badger_ATGM) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"ION_BLACK",1};
    hiddenSelectionsTextures[] = {
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_ion_base_CO.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\apc_wheeled_ion_adds_co.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\apc_wheeled_ion_tows_co.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\cage_black_CO.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_ion_lxws_CO.paa"
        };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_ION_APC_Wheeled_01_command_lxWS.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman)};
};

class CLASS2(SIDE,Badger_Command): GCLASS(Badger_Command) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"ION_BLACK",1};
    hiddenSelectionsTextures[] = {"lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_ion_base_CO.paa","lxws\vehicles_f_lxws\data\APC_Wheeled_01\apc_wheeled_ion_adds_co.paa","lxws\vehicles_f_lxws\data\APC_Wheeled_01\apc_wheeled_ion_tows_co.paa","a3\armor_f\Data\camonet_AAF_stripe_desert_CO.paa","lxws\vehicles_f_lxws\data\APC_Wheeled_01\cage_black_CO.paa","lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_ion_lxws_CO.paa"};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_ION_APC_Wheeled_01_command_lxWS.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman)};
};

class CLASS2(SIDE,Badger_Unarmed): GCLASS(Badger_Unarmed) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"ION_BLACK",1};
    hiddenSelectionsTextures[] = {
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_ion_base_CO.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\apc_wheeled_ion_adds_co.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\apc_wheeled_ion_tows_co.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\cage_black_CO.paa",
            "lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_ion_lxws_CO.paa"
        };
    //editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_ION_APC_Wheeled_01_command_lxWS.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman)};
};
