class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t4_opfor);
        displayName = " Base";
        identityTypes[] = {
            "LanguageFRE_F",
            "Head_Tanoan",
            "Head_African",
        };
        genericNames = "lxWS_WSaharaMen";
        @Templated();
    };
};
