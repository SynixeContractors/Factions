class CLASS2(Citizen_Firefighter,NATION): CLASS2(Base,NATION) {
    SCOPE_DLC;
    displayName = "Firefighter";
    editorSubcategory = QGCLASS(fire);
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

@Vehicles({
    "faction": "QPCLASS(NATION)",
    "camo": "FireDept",
    "crew": "Citizen_Firefighter",
    "suffix": "NATION",
    "properties": {"editorSubcategory": "QGCLASS(fire)"},
    "vehicles": [
        {"class": "Ram", "name": "Ram_Fire"},
        {"class": "HEMTT_FireTruck", "camo": "Red", "crew": "Citizen_Firefighter_SCBA"},
    ],
});
