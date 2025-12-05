class CfgVehicles {
    class GCLASS(Base_INDEP);

    class CLASS(Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t4_indep);
        displayName = "6JMB Base";
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
