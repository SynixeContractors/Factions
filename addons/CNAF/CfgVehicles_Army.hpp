class CLASS(Base_OPFOR);
class CLASS(SYN_CNAF_Base): CLASS(Base_OPFOR) {

    author = "Tobias Jennings";  
    scope = 0;
	scopeCurator = 0;
    displayname = "CNAF Base";
    genericNames = "EnochMen";
    identityTypes[] = {"LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan"};
	side = 0;
	faction = "SYN_CNAF";

	linkedItems[] = {"DEFAULT_ITEMS"};
    respawnLinkedItems[] = {"DEFAULT_ITEMS"};

    items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
    respawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};

	};

// Light // 

    class CLASS(SYN_O_CNAF_A_Officer): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader (Light)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManOfficer";

        weapons[] = {"SYN_CNAF_Velko_S_Holo", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_S_Holo", "Binocular", "Throw", "Put"};
        magazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell"), R2("SmokeShellOrange")};
        respawnMagazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell"), R2("SmokeShellOrange")};
        linkedItems[] = {"Atlas_V_OCarrierRig_CQB_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_CQB_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Aegis_U_I_Uniform_01_sweater_f";

    };

        class CLASS(SYN_O_CNAF_A_Teamleader): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader (Light)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManLeader";

        weapons[] = {"SYN_CNAF_Velko_GL_HAMR","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_GL_HAMR","Binocular", "Throw", "Put"};
        magazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R3("1Rnd_HE_Grenade_shell"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R3("1Rnd_HE_Grenade_shell"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Aegis_U_I_Uniform_01_sweater_f";

    };

    class CLASS(SYN_O_CNAF_A_Rifleman): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_Velko_Holo", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo","Throw", "Put"};
        magazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        respawnMagazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };

    class CLASS(SYN_O_CNAF_A_Medic): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver (Light)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManMedic";
        role = "CombatLifeSaver";

        weapons[] = {"SYN_CNAF_Velko_S_Holo", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_S_Holo","Throw", "Put"};
        magazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        respawnMagazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        linkedItems[] = {"Atlas_V_OCarrierRig_CQB_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_CQB_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        backpack = QCLASS(SYN_CNAF_Pack_Medic);

    };

        class CLASS(SYN_O_CNAF_A_Engineer): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (Light)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManEngineer";
        role = "Engineer";

        weapons[] = {"SYN_CNAF_Velko_S_Holo", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_S_Holo","Throw", "Put"};
        magazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        respawnMagazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        linkedItems[] = {"Atlas_V_OCarrierRig_CQB_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_CQB_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        backpack = QCLASS(SYN_CNAF_Pack_Engineer);

    };

        class CLASS(SYN_O_CNAF_A_Autorifleman): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman (Light)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"SYN_CNAF_S77_HAMR", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_S77_HAMR","Throw", "Put"};
        magazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"), R2("SmokeShell")};
        respawnMagazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"), R2("SmokeShell")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };

        class CLASS(SYN_O_CNAF_A_Marksman): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman (Light)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";
        role = "Marksman";

        weapons[] = {"SYN_CNAF_M14_DMS", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_M14_DMS","Binocular", "Throw", "Put"};
        magazines[] = {R5("20Rnd_762x51_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("20Rnd_762x51_Mag"), R2("SmokeShell")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };


// Garrison //

        class CLASS(SYN_O_CNAF_A_Logi_Officer): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Logistics Officer (Hi-Vis)";
        editorSubcategory = "SYN_CNAF_Garrison";
        editorPreview = "";
        icon = "iconManOfficer";

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {R2("SmokeShell"), R2("SmokeShellOrange")};
        respawnMagazines[] = {R2("SmokeShell"), R2("SmokeShellOrange")};
        linkedItems[] = {"V_Safety_blue_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Safety_blue_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };

        class CLASS(SYN_O_CNAF_A_Logistics): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Supply Chain Specialist (Hi-Vis)";
        editorSubcategory = "SYN_CNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {R2("SmokeShell")};
        respawnMagazines[] = {R2("SmokeShell")};
        linkedItems[] = {"V_Safety_yellow_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Safety_yellow_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };

        class CLASS(SYN_O_CNAF_A_Logistics_2): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Maintainer (Hi-Vis)";
        editorSubcategory = "SYN_CNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {R2("SmokeShell")};
        respawnMagazines[] ={R2("SmokeShell")};
        linkedItems[] = {"V_Safety_orange_F", "H_Headset_Tactical_grn", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Safety_orange_F", "H_Headset_Tactical_grn", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";
        backpack = QCLASS(SYN_CNAF_Pack_ToolKit);

    };

        class CLASS(SYN_O_CNAF_A_MP): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Military Police";
        editorSubcategory = "SYN_CNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_Velko_S_Holo", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_S_Holo","Throw", "Put"};
        magazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        respawnMagazines[] = {R5("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        linkedItems[] = {"Atlas_V_OCarrierRig_CQB_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_CQB_oli_F", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };

        class CLASS(SYN_O_CNAF_A_Soldier): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier";
        editorSubcategory = "SYN_CNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {R2("SmokeShell")};
        respawnMagazines[] = {R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };

        class CLASS(SYN_O_CNAF_A_Soldier_2): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier";
        editorSubcategory = "SYN_CNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {R2("SmokeShell")};
        respawnMagazines[] = {R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };

        class CLASS(SYN_O_CNAF_A_Rifleman_2): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorSubcategory = "SYN_CNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_Velko_Holo", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo", "Throw", "Put"};
        magazines[] = {R3("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        respawnMagazines[] = {R3("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };

        class CLASS(SYN_O_CNAF_A_Rifleman_3): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorSubcategory = "SYN_CNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_Velko_Holo", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo", "Throw", "Put"};
        magazines[] = {R3("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        respawnMagazines[] = {R3("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_AAF_01_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

        };

// Combat load //
    class CLASS(SYN_O_CNAF_B_Officer): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManOfficer";

        weapons[] = {"SYN_CNAF_Velko_S_Holo","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_S_Holo","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "Aegis_Goggles_Cover_grn_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "Aegis_Goggles_Cover_grn_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";

    };

        class CLASS(SYN_O_CNAF_B_Teamleader): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManLeader";

        weapons[] = {"SYN_CNAF_Velko_GL_HAMR","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_GL_HAMR","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R7("1Rnd_HE_Grenade_shell"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R7("1Rnd_HE_Grenade_shell"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";

    };

        class CLASS(SYN_O_CNAF_B_Rifleman): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_Velko_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "H_HelmetIA_sb_digital_RF", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "H_HelmetIA_sb_digital_RF", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";

    };

        class CLASS(SYN_O_CNAF_B_Medic): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManMedic";
        role = "CombatLifeSaver";

        weapons[] = {"SYN_CNAF_Velko_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "Aegis_Goggles_Cover_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "Aegis_Goggles_Cover_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";
        backpack = QCLASS(SYN_CNAF_Pack_Medic);

    };

        class CLASS(SYN_O_CNAF_B_Engineer): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManEngineer";
        role = "Engineer";

        weapons[] = {"SYN_CNAF_Velko_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "H_HelmetIA_sb_digital_RF", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "H_HelmetIA_sb_digital_RF", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform";
        backpack = QCLASS(SYN_CNAF_Pack_Engineer);

    };

        class CLASS(SYN_O_CNAF_B_Autorifleman): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"SYN_CNAF_S77_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_S77_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        backpack = QCLASS(SYN_CNAF_Pack_Autorifleman);

    };

        class CLASS(SYN_O_CNAF_B_Marksman): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";
        role = "Marksman";

        weapons[] = {"SYN_CNAF_M14_DMS", "Aegis_hgun_P320_black_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_M14_DMS","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R9("20Rnd_762x51_Mag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R9("20Rnd_762x51_Mag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_PlateCarrier1_oli", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";

    };

        class CLASS(SYN_O_CNAF_B_Machinegunner): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"SYN_CNAF_MMG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_MMG_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "Goggles_grn_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "Goggles_grn_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        backpack = QCLASS(SYN_CNAF_Pack_Machinegunner);

    };

        class CLASS(SYN_O_CNAF_B_Asst_Machinegunner): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Machinegunner";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";


        weapons[] = {"SYN_CNAF_Velko_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "Aegis_Goggles_Cover_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "Aegis_Goggles_Cover_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        backpack = QCLASS(SYN_CNAF_Pack_Machinegunner);

    };

        class CLASS(SYN_O_CNAF_B_Rifleman_MAT): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (MAT)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_Velko_Holo", "Aegis_hgun_P320_black_F", "launch_MRAWS_green_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo","Aegis_hgun_P320_black_F", "launch_MRAWS_green_F", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), "MRAWS_HEAT55_F", R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), "MRAWS_HEAT55_F", R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "H_MK7_AAF_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "H_MK7_AAF_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        backpack = QCLASS(SYN_CNAF_Pack_MAT);

    };

        class CLASS(SYN_O_CNAF_B_Rifleman_HAT): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (HAT)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_Velko_Holo", "Aegis_hgun_P320_black_F", "launch_I_Titan_short_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo","Aegis_hgun_P320_black_F", "launch_I_Titan_short_F", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), "Titan_AT", R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), "Titan_AT", R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        backpack = QCLASS(SYN_CNAF_Pack_HAT);

    };

        class CLASS(SYN_O_CNAF_B_Rifleman_AA): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AA)";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_Velko_Holo", "Aegis_hgun_P320_black_F", "launch_I_Titan_eaf_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo","Aegis_hgun_P320_black_F", "launch_I_Titan_eaf_F", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), "ace_missile_manpad_stinger_man", R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), "ace_missile_manpad_stinger_man", R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", "Goggles_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_MK7_AAF_F", "synixe_mgp_f_tactical", "Goggles_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        backpack = QCLASS(SYN_CNAF_Pack_AA);

    };

        class CLASS(SYN_O_CNAF_B_Radioman): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_Velko_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_Velko_Holo","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("35Rnd_556x45_Velko_reload_tracer_yellow_lxWS"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "H_HelmetIA_sb_digital_RF", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "H_HelmetIA_sb_digital_RF", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        backpack = "B_RadioBag_01_wdl_F";

    };

        class CLASS(SYN_O_CNAF_B_Crewman): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_HelmetCrew_I", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_HelmetCrew_I", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_C_HeliPilotCoveralls_Green_RF";

    };

        class CLASS(SYN_O_CNAF_B_Heli_Pilot): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"),R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"),R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Atlas_V_OCarrierRig_Lite_oli_F", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_C_HeliPilotCoveralls_Green_RF";

    };

        class CLASS(SYN_O_CNAF_B_Heli_Crew): CLASS(SYN_CNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crewman";
        editorSubcategory = "SYN_CNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_CNAF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_CNAF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"),R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenadeOrange")};
        linkedItems[] = {"V_PlateCarrier1_oli", "H_CrewHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "H_CrewHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_C_HeliPilotCoveralls_Green_RF";

    };