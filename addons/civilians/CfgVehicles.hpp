class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        faction = QCLASS(civilian);
        displayName = "Civilian Base Unit";
        @Templated();
        @Assigned(Civilian);
    };

    // Cars
    class GCLASS(FuelTruck);
    class GCLASS(Hatchback);
    class GCLASS(HatchbackSport);
    class GCLASS(Jeep);
    class GCLASS(Offroad);
    class GCLASS(SUV);
    class GCLASS(Tractor);

    // Boats
    class GCLASS(CabinSkiff);
    class GCLASS(Dingy);
    class GCLASS(JetSki);
    class GCLASS(Motorboat);
    class GCLASS(RHIB);

    @For(["Virelia", "Calvane", "Drovak", "Livonia"])
        class CLASS(Base_$1): CLASS(Base) {
            faction = QCLASS($1);
            displayName = "$1 Civilian Base Unit";
            @Identity($1);
        };
        #define NATION $1
        #include "CfgVehicles_T_CitizensUnits.hpp"
        #include "CfgVehicles_T_CitizensVehicles.hpp"
        #undef NATION
    @EndFor
};
