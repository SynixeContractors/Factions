class CfgVehicles {
    // Base Classes
    class SoldierWB;
    class SoldierEB;
    class SoldierGB;
    class Land;

    // Vanilla Units Sensitivity
    class Man: Land {
        MACRO_SENSITIVITY;
    };

    // Base BLUFOR Soldier
    class CLASS(Base_BLUFOR): SoldierWB {
        dlc = QUOTE(PREFIX);
        author = CSTRING(Author);
        displayName = "Synixe BLUFOR Base Soldier";
        faction = "";
        scope = 1;
        scopeCurator = 1;
        side = 1;
        MACRO_SENSITIVITY;
        sensitivityEar = 0.125;
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
        genericNames = "NATOMen";
        icon = "iconMan";
        role = "Rifleman";
        canDeactivateMines = 0;
        engineer = 0;
        attendant = 0;
        uavHacker = 0;
        uniformClass = "";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
        items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
    };

    // Base OPFOR Soldier
    class CLASS(Base_OPFOR): SoldierEB {
        dlc = QUOTE(PREFIX);
        author = CSTRING(Author);
        displayName = "Synixe OPFOR Base Soldier";
        faction = "";
        scope = 1;
        scopeCurator = 1;
        side = 0;
        MACRO_SENSITIVITY;
        sensitivityEar = 0.125;
        model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
        identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
        genericNames = "TakistaniMen";
        icon = "iconMan";
        role = "Rifleman";
        canDeactivateMines = 0;
        engineer = 0;
        attendant = 0;
        uavHacker = 0;
        uniformClass = "";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
        items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
    };

    // Base INDEP Soldier
    class CLASS(Base_INDEP): SoldierGB {
        dlc = QUOTE(PREFIX);
        author = CSTRING(Author);
        displayName = "Synixe INDEP Base Soldier";
        faction = "";
        scope = 1;
        scopeCurator = 1;
        side = 2;
        MACRO_SENSITIVITY;
        sensitivityEar = 0.125;
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        identityTypes[] = {"LanguageGRE_F", "Head_Greek", "NoGlasses"};
        genericNames = "GreekMen";
        icon = "iconMan";
        role = "Rifleman";
        canDeactivateMines = 0;
        engineer = 0;
        attendant = 0;
        uavHacker = 0;
        uniformClass = "";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
        items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
    };
};
