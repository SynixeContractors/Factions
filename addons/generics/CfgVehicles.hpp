class CfgVehicles {
    class GCLASS(Base_CIV);

    class CLASS(Base): GCLASS(Base_CIV) {
        displayName = "Generics Base";
        @Templated();
    };
};
