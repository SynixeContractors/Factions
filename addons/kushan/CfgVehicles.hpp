class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t2_opfor);
        displayName = "Kushan Base";
        identityTypes[] = {
            "LanguageFRE_F", 
            "Head_TK", 
            "Head_African"
        };
        genericNames = "TakistaniMen";
        @Templated();
    };
};
