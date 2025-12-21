class CfgVehicles {
    class GCLASS(Base_INDEP);

    class CLASS(Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t3_indep);
        displayName = "Ngabiri Base";
        identityTypes[] = {
            "LanguageFRE_F",
            "Head_African",
            "Head_TK",
            "lxWS_Head_African"
        };
        genericNames = "lxWS_WSaharaMen";
        @Templated();
    };
};
