class CLASS2(Citizen_Firefighter,NATION): CLASS2(Base,NATION) {
    SCOPE_DLC;
    displayName = "Firefighter";
    editorSubcategory = QGCLASS(fire_department);
    @Uniforms({
        "variants": {
            "U_C_FirefighterFatigues_RF": 1,
            "U_C_FirefighterFatigues_RolledUp_RF": 1,
        },
    });
    @Headgear({
        "H_Helmet_HardHat_Yellow_RF": 1,
        "H_Helmet_HardHat_Red_RF": 1,
        "H_Helmet_HardHat_Orange_RF": 1,
    });
};
class CLASS2(Citizen_Firefighter_SCBA,NATION): CLASS2(Citizen_Firefighter,NATION) {
    SCOPE_DLC;
    displayName = "Firefighter (SCBA)";
    @Uniforms({
        "variants": {
            "U_C_FirefighterFatigues_RF": 1,
        },
    });
    @Facewear({
        "JCA_G_AirPurifyingRespirator_03_black_clear_F": 1,
    });
    @Backpacks({
        "variants": {
            "B_SCBA_01_F": 1,
        },
    });
};

class CLASS2(Ram,NATION): GCLASS(Ram) {
    SCOPE_DLC;
    faction = QCLASS(NATION);
    editorSubcategory = QGCLASS(fire_department);
    crew = QUOTE(CLASS2(Citizen_Firefighter,NATION));
    typicalCargo[] = {QUOTE(CLASS2(Citizen_Firefighter,NATION))};
    textureList[] = {"FireDept",1};
};
class CLASS2(HEMTT_FireTruck,NATION): GCLASS(HEMTT_FireTruck) {
    SCOPE_DLC;
    faction = QCLASS(NATION);
    editorSubcategory = QGCLASS(fire_department);
    crew = QUOTE(CLASS2(Citizen_Firefighter_SCBA,NATION));
    typicalCargo[] = {QUOTE(CLASS2(Citizen_Firefighter_SCBA,NATION))};
    textureList[] = {"Red",1};
};
