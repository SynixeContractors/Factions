class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t4_OPFOR);
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
