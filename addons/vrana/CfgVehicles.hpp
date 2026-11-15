class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        faction = QGCLASS(vrana);
        displayName = "Vrana Base Unit";
        @Templated();
        @Assigned(Civilian);
    };

    class GCLASS(Van_Cargo);
    class GCLASS(Van_Transport);
    class GCLASS(Van_Service);

    class GCLASS(MD500E);
    class GCLASS(Mohawk);
    class GCLASS(Mohawk_Executive);


    @For(Identities)
        class CLASS2(Base,$1): CLASS(Base) {
            displayName = "$1 Vrana Base Unit";
            editorSubcategory = QGCLASS(generics_$1);
            @Identity($1);
        };
        #define NATION $1
        #include "CfgVehicles_T_Units.hpp"
        #include "CfgVehicles_T_Vehicles.hpp"
        #undef NATION
    @EndFor
};
