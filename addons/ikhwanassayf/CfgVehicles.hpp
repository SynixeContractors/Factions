class CfgVehicles {
    class GCLASS(Base_OPFOR);
    class CLASS2(OPFOR,Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t4_opfor);
        displayName = "IAS Base";
        identityTypes[] = {
            "LanguagePER_F",
            "Head_TK",
            "G_IRAN_default",
            "Head_African",
            "lxWS_Head_African"
        };
        genericNames = "lxWS_WSaharaMen";
        @Templated();
    };

    class GCLASS(Base_INDEP);
    class CLASS2(INDEP,Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t4_indep);
        displayName = "IAS Base";
        identityTypes[] = {
            "LanguagePER_F",
            "Head_TK",
            "G_IRAN_default",
            "Head_African",
            "lxWS_Head_African"
        };
        genericNames = "lxWS_WSaharaMen";
        @Templated();
    };
};
