class CLASS(Base_OPFOR);
class CLASS(SYN_KLNAF_Base): CLASS(Base_OPFOR) {

    author = "Tobias Jennings";  
    scope = 0;
	scopeCurator = 0;
    displayname = "KLNAF Base";
    genericNames = "EnochMen";
    identityTypes[] = {"LanguagePOL_F","Head_NATO","Head_Enoch","Head_Euro", "G_EAF_default"};
	side = 0;
	faction = "SYN_KLNAF";

	linkedItems[] = {"DEFAULT_ITEMS"};
    respawnLinkedItems[] = {"DEFAULT_ITEMS"};

    items[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};
    respawnItems[] = {R4("ACE_elasticBandage"), R4("ACE_packingBandage"), R2("ACE_quikclot")};

	};

// Light // 

    class CLASS(SYN_O_KLNAF_A_Officer): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader (Light)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManOfficer";

        weapons[] = {"SYN_KLNAF_F2000_Holo", "hgun_G17_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_Holo", "hgun_G17_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_Stanag"), R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange")};
        respawnMagazines[] = {R5("30Rnd_556x45_Stanag"), R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange")};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";

    };

        class CLASS(SYN_O_KLNAF_A_Teamleader): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader (Light)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManLeader";

        weapons[] = {"SYN_KLNAF_F2000_GL_Holo","hgun_G17_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_GL_Holo","hgun_G17_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_Stanag"),R3("1Rnd_HE_Grenade_shell"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_556x45_Stanag"),R3("1Rnd_HE_Grenade_shell"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

    class CLASS(SYN_O_KLNAF_A_Rifleman): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_Stanag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("30Rnd_556x45_Stanag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

    class CLASS(SYN_O_KLNAF_A_Medic): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver (Light)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManMedic";
        role = "CombatLifeSaver";

        weapons[] = {"SYN_KLNAF_F2000_Holo", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_Holo","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_Stanag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("30Rnd_556x45_Stanag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";
        backpack = QCLASS(SYN_KLNAF_Pack_Medic);

    };

        class CLASS(SYN_O_KLNAF_A_Engineer): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (Light)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManEngineer";
        role = "Engineer";

        weapons[] = {"SYN_KLNAF_F2000_Holo", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_Holo","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_Stanag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("30Rnd_556x45_Stanag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";
        backpack = QCLASS(SYN_KLNAF_Pack_Engineer);

    };

        class CLASS(SYN_O_KLNAF_A_Autorifleman): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman (Light)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"SYN_KLNAF_Minimi_Holo", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_Minimi_Holo","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R4("200Rnd_556x45_Box_Tracer_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R4("200Rnd_556x45_Box_Tracer_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_A_Marksman): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman (Light)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";
        role = "Marksman";

        weapons[] = {"SYN_KLNAF_HK417_DMS", "hgun_G17_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_HK417_DMS","hgun_G17_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R5("20Rnd_762x51_Mag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("20Rnd_762x51_Mag"),R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_Beret_EAF_01_green", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };


// Garrison //

        class CLASS(SYN_O_KLNAF_A_Logi_Officer): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Logistics Officer (Hi-Vis)";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconManOfficer";

        weapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange")};
        linkedItems[] = {"V_Safety_blue_F", "Atlas_H_FieldCap_hs_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Safety_blue_F", "Atlas_H_FieldCap_hs_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_A_Logistics): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Supply Chain Specialist (Hi-Vis)";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Safety_yellow_F", "Atlas_H_FieldCap_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Safety_yellow_F", "Atlas_H_FieldCap_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_A_Logistics_2): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Maintainer (Hi-Vis)";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Safety_orange_F", "H_Headset_Tactical_grn", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Safety_orange_F", "H_Headset_Tactical_grn", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";
        backpack = QCLASS(SYN_KLNAF_Pack_ToolKit);

    };

        class CLASS(SYN_O_KLNAF_A_MP): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Military Police";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_556x45_Stanag"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R5("30Rnd_556x45_Stanag"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "Atlas_H_FieldCap_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "Atlas_H_FieldCap_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_A_Soldier): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "Atlas_H_FieldCap_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "Atlas_H_FieldCap_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_A_Soldier_2): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_EAF_01_green", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_EAF_01_green", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_A_Rifleman_2): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R3("30Rnd_556x45_Stanag"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("30Rnd_556x45_Stanag"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "Atlas_H_FieldCap_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "Atlas_H_FieldCap_ldf", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_A_Rifleman_3): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R3("30Rnd_556x45_Stanag"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R3("30Rnd_556x45_Stanag"), R3("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_Rangemaster_belt", "H_Beret_EAF_01_green", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Beret_EAF_01_green", "synixe_mgp_f_tactical", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_A_Parade): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Parade Dress";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"H_ParadeDressCap_01_LDF_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"H_ParadeDressCap_01_LDF_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_E_ParadeUniform_01_LDF_F";

    };

        class CLASS(SYN_O_KLNAF_A_Parade_2): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Parade Dress (Decorated)";
        editorSubcategory = "SYN_KLNAF_Garrison";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"H_ParadeDressCap_01_LDF_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"H_ParadeDressCap_01_LDF_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_E_ParadeUniform_01_LDF_decorated_F";

    };

// Combat load //
    class CLASS(SYN_O_KLNAF_B_Officer): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManOfficer";

        weapons[] = {"SYN_KLNAF_F2000_Holo","hgun_G17_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_Holo","hgun_G17_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "Aegis_Goggles_Cover_grn_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "Aegis_Goggles_Cover_grn_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";

    };

        class CLASS(SYN_O_KLNAF_B_Teamleader): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManLeader";

        weapons[] = {"SYN_KLNAF_F2000_GL_Holo","hgun_G17_black_F", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_GL_Holo","hgun_G17_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R7("1Rnd_HE_Grenade_shell"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R7("1Rnd_HE_Grenade_shell"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_B_Rifleman): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_B_Medic): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManMedic";
        role = "CombatLifeSaver";

        weapons[] = {"SYN_KLNAF_F2000_Holo", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_Holo","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "Aegis_Goggles_Cover_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "Aegis_Goggles_Cover_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";
        backpack = QCLASS(SYN_KLNAF_Pack_Medic);

    };

        class CLASS(SYN_O_KLNAF_B_Engineer): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManEngineer";
        role = "Engineer";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";
        backpack = QCLASS(SYN_KLNAF_Pack_Engineer);

    };

        class CLASS(SYN_O_KLNAF_B_Autorifleman): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"SYN_KLNAF_Minimi_Holo", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_Minimi_Holo","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R4("200Rnd_556x45_Box_Tracer_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R4("200Rnd_556x45_Box_Tracer_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";
        backpack = QCLASS(SYN_KLNAF_Pack_Autorifleman);

    };

        class CLASS(SYN_O_KLNAF_B_Marksman): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";
        role = "Marksman";

        weapons[] = {"SYN_KLNAF_HK417_DMS", "hgun_G17_black_F","Binocular", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_HK417_DMS","hgun_G17_black_F", "Binocular", "Throw", "Put"};
        magazines[] = {R9("20Rnd_762x51_Mag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell")};
        respawnMagazines[] = {R9("20Rnd_762x51_Mag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell")};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

    };

        class CLASS(SYN_O_KLNAF_B_Machinegunner): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconManMG";
        role = "MachineGunner";

        weapons[] = {"SYN_KLNAF_FNMAG_Elcan", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_FNMAG_Elcan","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R4("Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R4("Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F"),R3("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Goggles_grn_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Goggles_grn_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";
        backpack = QCLASS(SYN_KLNAF_Pack_Machinegunner);

    };

        class CLASS(SYN_O_KLNAF_B_Asst_Machinegunner): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Machinegunner";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";


        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_Goggles_Cover_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Aegis_Goggles_Cover_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";
        backpack = QCLASS(SYN_KLNAF_Pack_Machinegunner);

    };

        class CLASS(SYN_O_KLNAF_B_Rifleman_MAT): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (MAT)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Atlas_Launch_Pzf3_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO","hgun_G17_black_F", "Atlas_Launch_Pzf3_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), "Atlas_DM12_HEAT_F", R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), "Atlas_DM12_HEAT_F", R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", "Aegis_Goggles_Cover_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", "Aegis_Goggles_Cover_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";
        backpack = QCLASS(SYN_KLNAF_Pack_MAT);

    };

        class CLASS(SYN_O_KLNAF_B_Rifleman_HAT): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (HAT)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "launch_O_Vorona_green_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO","hgun_G17_black_F", "launch_O_Vorona_green_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), "Vorona_HEAT", R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), "Vorona_HEAT", R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";
        backpack = QCLASS(SYN_KLNAF_Pack_HAT);

    };

        class CLASS(SYN_O_KLNAF_B_Rifleman_AA): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AA)";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "launch_I_Titan_eaf_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO","hgun_G17_black_F", "launch_I_Titan_eaf_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), "ace_missile_manpad_stinger_man", R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), "ace_missile_manpad_stinger_man", R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", "Goggles_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", "Goggles_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";
        backpack = QCLASS(SYN_KLNAF_Pack_AA);

    };

        class CLASS(SYN_O_KLNAF_B_Radioman): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_F2000_VRCO", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_F2000_VRCO","hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R9("30Rnd_556x45_Stanag"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "Atlas_H_PASGT_Cover_I_EAF_F", "G_Headset_lxWS", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";
        backpack = "B_RadioBag_01_eaf_F";

    };

        class CLASS(SYN_O_KLNAF_B_Crewman): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_SMG_Holo", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_SMG_Holo", "hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_HelmetCrew_I", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_HelmetCrew_I", "Aegis_Goggles_Cover_grn_F", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_E_Uniform_01_coveralls_F";

    };

        class CLASS(SYN_O_KLNAF_B_Heli_Pilot): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_SMG_Holo", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_SMG_Holo", "hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"),R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"),R2("SmokeShellOrange"), R2("HandGrenade")};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_E_Helipilot_noGloves";

    };

        class CLASS(SYN_O_KLNAF_B_Heli_Crew): CLASS(SYN_KLNAF_Base) {

        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crewman";
        editorSubcategory = "SYN_KLNAF_army";
        editorPreview = "";
        icon = "iconMan";

        weapons[] = {"SYN_KLNAF_SMG_Holo", "hgun_G17_black_F", "Throw", "Put"};
        respawnWeapons[] = {"SYN_KLNAF_SMG_Holo", "hgun_G17_black_F", "Throw", "Put"};
        magazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"),R2("SmokeShellOrange"), R2("HandGrenade")};
        respawnMagazines[] = {R5("30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"),R4("17Rnd_9x21_Mag"), R2("SmokeShell"), R2("HandGrenadeOrange")};
        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_CrewHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F", "H_CrewHelmetHeli_O", "NVGoggles_OPFOR", DEFAULT_ITEMS_RADIO};
        uniformClass = "U_I_E_Uniform_01_coveralls_F";

    };