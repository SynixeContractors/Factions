class CLASS(Base_OPFOR);
class CLASS(SYN_RNLDF_Base): CLASS(Base_OPFOR) {

    author = "Tobias Jennings";  
    scope = 0;
	scopeCurator = 0;
    displayname = "RNLDF Base";
    genericNames = "EnochMen";
    identityTypes[] = {"LanguagePOL_F","Head_NATO","Head_Enoch","Head_Euro", "G_EAF_default"};
	side = 0;
	faction = "SYN_RNLDF";

	linkedItems[] = {"DEFAULT_ITEMS"};
    respawnLinkedItems[] = {"DEFAULT_ITEMS"};

    items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
    respawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};

	};

// Light // 

    class CLASS(SYN_O_RNLDF_A_Officer): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader (Light)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManOfficer";

        weapons[] = {"SYN_RNLDF_AUG_Holo", "Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_Holo", "Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_AUG_Mag_F"), R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange")};
        respawnMagazines[] = {R5("30Rnd_556x45_AUG_Mag_F"), R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange")};
        linkedItems[] = {"V_PlateCarrier2_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier2_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_01_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_A_Teamleader): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader (Light)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManLeader";

        weapons[] = {"SYN_RNLDF_AUG_GL_HAMR","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_GL_HAMR","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_AUG_Mag_F"),R3("1Rnd_HE_Grenade_shell"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_556x45_AUG_Mag_F"),R3("1Rnd_HE_Grenade_shell"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

    class CLASS(SYN_O_RNLDF_A_Rifleman): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_AUG_Mag_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("30Rnd_556x45_AUG_Mag_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_PlateCarrier1_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

    class CLASS(SYN_O_RNLDF_A_Medic): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver (Light)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManMedic";
        role = "CombatLifeSaver";

        weapons[] = {"SYN_RNLDF_AUG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_Holo","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_AUG_Mag_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("30Rnd_556x45_AUG_Mag_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_PlateCarrier2_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier2_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_01_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_Medic);

    };

        class CLASS(SYN_O_RNLDF_A_Engineer): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (Light)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManEngineer";
        role = "Engineer";

        weapons[] = {"SYN_RNLDF_AUG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_Holo","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_AUG_Mag_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("30Rnd_556x45_AUG_Mag_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_PlateCarrier2_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier2_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_01_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_Engineer);

    };

        class CLASS(SYN_O_RNLDF_A_Autorifleman): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman (Light)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"SYN_RNLDF_Negev_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_Negev_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_A_Marksman): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman (Light)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";
        role = "Marksman";

        weapons[] = {"SYN_RNLDF_SR25_AMS", "Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_SR25_AMS","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R5("20Rnd_762x51_Mag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("20Rnd_762x51_Mag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };


// Garrison //

        class CLASS(SYN_O_RNLDF_A_Logi_Officer): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Logistics Officer (Hi-Vis)";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconManOfficer";

        weapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange")};
        linkedItems[] = {"V_Safety_blue_F", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Safety_blue_F", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_A_Logistics): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Supply Chain Specialist (Hi-Vis)";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Safety_yellow_F", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Safety_yellow_F", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_A_Logistics_2): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Maintainer (Hi-Vis)";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Safety_orange_F", "H_Headset_Tactical_grn", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Safety_orange_F", "H_Headset_Tactical_grn", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_ToolKit);

    };

        class CLASS(SYN_O_RNLDF_A_MP): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Military Police";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_AUG_Mag_F"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("30Rnd_556x45_AUG_Mag_F"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_PlateCarrier2_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier2_oli", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_A_Soldier): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_A_Soldier_2): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_A_Rifleman_2): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R3("30Rnd_556x45_AUG_Mag_F"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("30Rnd_556x45_AUG_Mag_F"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_A_Rifleman_3): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R3("30Rnd_556x45_AUG_Mag_F"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("30Rnd_556x45_AUG_Mag_F"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_gen_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_A_Parade): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Parade Dress";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"H_ParadeDressCap_01_AAF_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"H_ParadeDressCap_01_AAF_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_ParadeUniform_01_AAF_F";

    };

        class CLASS(SYN_O_RNLDF_A_Parade_2): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Parade Dress (Decorated)";
        editorSubcategory = "SYN_RNLDF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"H_ParadeDressCap_01_AAF_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"H_ParadeDressCap_01_AAF_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_ParadeUniform_01_AAF_decorated_F";

    };

// Combat load //
    class CLASS(SYN_O_RNLDF_B_Officer): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManOfficer";

        weapons[] = {"SYN_RNLDF_AUG_Holo","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_Holo","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier2_oli", "Aegis_Goggles_Cover_grn_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier2_oli", "Aegis_Goggles_Cover_grn_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_01_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_B_Teamleader): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManLeader";

        weapons[] = {"SYN_RNLDF_AUG_GL_HAMR","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_GL_HAMR","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R7("1Rnd_HE_Grenade_shell"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R7("1Rnd_HE_Grenade_shell"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_B_Rifleman): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "Aegis_H_Helmet_Virtus_Scrim_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "Aegis_H_Helmet_Virtus_Scrim_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_B_Medic): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManMedic";
        role = "CombatLifeSaver";

        weapons[] = {"SYN_RNLDF_AUG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_Holo","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "Aegis_Goggles_Cover_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "Aegis_Goggles_Cover_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_01_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_Medic);

    };

        class CLASS(SYN_O_RNLDF_B_Engineer): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManEngineer";
        role = "Engineer";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_01_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_Engineer);

    };

        class CLASS(SYN_O_RNLDF_B_Autorifleman): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"SYN_RNLDF_Negev_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_Negev_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_Autorifleman);

    };

        class CLASS(SYN_O_RNLDF_B_Marksman): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";
        role = "Marksman";

        weapons[] = {"SYN_RNLDF_SR25_AMS", "Aegis_hgun_P320_black_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_SR25_AMS","Aegis_hgun_P320_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R9("20Rnd_762x51_Mag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R9("20Rnd_762x51_Mag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_PlateCarrier2_oli", "Aegis_H_Helmet_Virtus_Scrim_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier2_oli", "Aegis_H_Helmet_Virtus_Scrim_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_B_Machinegunner): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"SYN_RNLDF_HK121_MRCO", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_HK121_MRCO","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R4("ACE_150Rnd_762x54_Box_tracer_red"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Goggles_grn_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Goggles_grn_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_Machinegunner);

    };

        class CLASS(SYN_O_RNLDF_B_Asst_Machinegunner): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Machinegunner";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";


        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_Goggles_Cover_F", "Aegis_H_Helmet_Virtus_Scrim_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_Goggles_Cover_F", "Aegis_H_Helmet_Virtus_Scrim_wdl_F", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_Machinegunner);

    };

        class CLASS(SYN_O_RNLDF_B_Rifleman_MAT): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (MAT)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "launch_MRAWS_green_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR","Aegis_hgun_P320_black_F", "launch_MRAWS_green_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), "MRAWS_HEAT55_F", R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), "MRAWS_HEAT55_F", R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier1_oli", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier1_oli", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_MAT);

    };

        class CLASS(SYN_O_RNLDF_B_Rifleman_HAT): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (HAT)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "launch_I_Titan_short_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR","Aegis_hgun_P320_black_F", "launch_I_Titan_short_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), "Vorona_HEAT", R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), "Vorona_HEAT", R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_HAT);

    };

        class CLASS(SYN_O_RNLDF_B_Rifleman_AA): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AA)";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "launch_I_Titan_eaf_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR","Aegis_hgun_P320_black_F", "launch_I_Titan_eaf_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), "ace_missile_manpad_stinger_man", R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), "ace_missile_manpad_stinger_man", R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", "Goggles_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_H_Helmet_Virtus_Cover_wdl_F", "synixe_mgp_f_tactical", "Goggles_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";
        backpack = QCLASS(SYN_RNLDF_Pack_AA);

    };

        class CLASS(SYN_O_RNLDF_B_Radioman): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_AUG_HAMR", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_AUG_HAMR","Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_AUG_Mag_F"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_PlateCarrier2_oli", "Aegis_H_Helmet_Virtus_Scrim_wdl_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier2_oli", "Aegis_H_Helmet_Virtus_Scrim_wdl_F", "synixe_mgp_f_tactical", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_CombatUniformNCU_02_mcam_wdl_F";
        backpack = "B_RadioBag_01_wdl_F";

    };

        class CLASS(SYN_O_RNLDF_B_Crewman): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_HelmetCrew_I", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_HelmetCrew_I", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_C_HeliPilotCoveralls_Green_RF";

    };

        class CLASS(SYN_O_RNLDF_B_Heli_Pilot): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"),R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"),R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_C_HeliPilotCoveralls_Green_RF";

    };

        class CLASS(SYN_O_RNLDF_B_Heli_Crew): CLASS(SYN_RNLDF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crewman";
        editorSubcategory = "SYN_RNLDF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_RNLDF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_RNLDF_SMG_Holo", "Aegis_hgun_P320_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"),R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenadeOrange")};
        linkedItems[] = {"V_PlateCarrier2_oli", "H_CrewHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_PlateCarrier2_oli", "H_CrewHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_C_HeliPilotCoveralls_Green_RF";

    };