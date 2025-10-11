class CfgVehicles {
    class GCLASS(Base_OPFOR);
    class CLASS(base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t2_opfor);
        displayName = "Base Unit";
        identityTypes[] = {"LanguageFRE_F", "Head_Euro"};
        genericNames = "NATOMen";
        @Templated();
    };
};
