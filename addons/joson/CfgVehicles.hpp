class CfgVehicles {
    class GCLASS(Base_OPFOR);
    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t3_opfor);
        displayName = "Base Unit";
        identityTypes[] = {"LanguageCHI_F", "Head_Asian"};
        genericNames = "NATOMen"; //FIXME: change to Asian/korean Names
        @Templated();
    };
};
