class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t3_opfor);
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
