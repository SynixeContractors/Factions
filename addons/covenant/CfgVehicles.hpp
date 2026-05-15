class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        factionTest = QUOTE(PREFIX);
        displayName = "Base Unit";
        @Templated();
    };

    @For(Identities)
    class CLASS2(Base,$1): CLASS(Base) {
        displayName = "$1 Base Unit";
        @Identity($1);
    };
    @EndFor
};
