class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t2_opfor);
        displayName = "RNLDF Base";
        identityTypes[] = {
            "LanguagePOL_F",
            "Head_Euro",
            "Head_Enoch",
            "Head_NATO"
            };
        genericNames = "EnochMen";
        @Templated();
    };
};
