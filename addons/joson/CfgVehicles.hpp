class CfgVehicles {
    class GCLASS(Base_OPFOR);
    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t3_opfor);
        displayName = "Base Unit";
        identityTypes[] = {"LanguageFRE_F", "Head_Euro"}; //FIXME: change to Chinese+Asian
        genericNames = "NATOMen"; //FIXME: change to Asian/Chinese Names
        @Templated();
    };
};
