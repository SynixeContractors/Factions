class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(CIV): GCLASS(Base_CIV) {
        faction = QGCLASS(aan);
        @Templated();
    };

    @For(Identities)
    @Vehicles({
        "faction": "QGCLASS(aan)",
        "camo": "AAN",
        "crew": "Reporter_$1",
        "properties": {"editorSubcategory": "QGCLASS(generics_cars_$1)"},
        "vehicles": [
            {"class": "Van_Cargo", "name": "Van_Cargo_$1"},
            {"class": "Van_Transport", "name": "Van_Transport_$1"},
        ],
    });

    class CLASS(Reporter_$1): CLASS(CIV) {
        SCOPE_DLC;
        @Identity($1);
        editorSubcategory = QGCLASS(generics_$1);
        displayName = "Reporter";
        @Uniforms({
            "variants": {
                "U_C_Journalist": 1,
            }
        });
        @Headgear({
            "": 0.6,
            "H_Cap_press": 0.3,
            "H_Cap_press_headset": 0.1,
        });
    };
    class CLASS(WarReporter_$1): CLASS(Reporter_$1) {
        displayName = "War Reporter";
        @Vests({
            "variants": {
                "V_Press_F": 1,
            }
        });
        @Headgear({
            "H_PASGT_basic_blue_press_F": 0.9,
            "H_Cap_press": 0.1,
        });
    };
    @EndFor
};
