class CfgVehicles {
    class GCLASS(Van_Cargo);
    class GCLASS(Van_Transport);
    class GCLASS(Ram);
    class GCLASS(LUT_Transport);
    class GCLASS(LUT_TransportCovered);
    class GCLASS(LUT_Repair);
    class GCLASS(LUT_Medical);
    class GCLASS(LUT_Fuel);
    class GCLASS(LUT_Cargo);
    class GCLASS(LUT_Flatbed);

    class GCLASS(Base_CIV);
    class CLASS(CIV): GCLASS(Base_CIV) {
        faction = QGCLASS(daltgreen);
        @Templated();
    };

    @For(Identities)

    GENERIC_VEHICLE(Van_Cargo,Daltgreen,Worker,Daltgreen,$1);
    GENERIC_VEHICLE(Van_Transport,Daltgreen,Worker,Daltgreen,$1);
    GENERIC_VEHICLE(Ram,Daltgreen,Worker,Daltgreen,$1);
    GENERIC_VEHICLE(LUT_Transport,Daltgreen,Worker,Daltgreen,$1);
    GENERIC_VEHICLE(LUT_TransportCovered,Daltgreen,Worker,Daltgreen,$1);
    GENERIC_VEHICLE(LUT_Repair,Daltgreen,Worker,Daltgreen,$1);
    GENERIC_VEHICLE(LUT_Medical,Daltgreen,Worker,Daltgreen,$1);
    GENERIC_VEHICLE(LUT_Fuel,Daltgreen,Worker,Daltgreen,$1);
    GENERIC_VEHICLE(LUT_Cargo,Daltgreen,Worker,Daltgreen,$1);
    GENERIC_VEHICLE(LUT_Flatbed,Daltgreen,Worker,Daltgreen,$1);
    class CLASS(Base_$1): CLASS(CIV) {
        @Identity($1);
        editorSubcategory = QGCLASS(generics_$1);
    };
    class CLASS(Worker_$1): CLASS(Base_$1) {
        SCOPE_DLC;
        displayName = "Worker";
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
    @EndFor
};
