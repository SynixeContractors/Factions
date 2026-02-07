class CfgVehicles {
    class GCLASS(Van_Cargo);
    class GCLASS(Van_Transport);

    class GCLASS(Base_CIV);
    class CLASS(CIV): GCLASS(Base_CIV) {
        faction = QGCLASS(aan);
        @Templated();
    };

    @For(Identities)
    class CLASS(Van_Cargo_$1): GCLASS(Van_Cargo) {
        SCOPE_DLC;
        faction = QGCLASS(aan);
        textureList[] = {"AAN",1};
        crew = QCLASS(Reporter_$1);
        typicalCargo[] = {QCLASS(Reporter_$1)};
        editorSubcategory = QGCLASS(generics_$1_cars);
    };
    class CLASS(Van_Transport_$1): GCLASS(Van_Transport) {
        SCOPE_DLC;
        faction = QGCLASS(aan);
        textureList[] = {"AAN",1};
        crew = QCLASS(Reporter_$1);
        typicalCargo[] = {QCLASS(Reporter_$1)};
        editorSubcategory = QGCLASS(generics_$1_cars);
    };

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
