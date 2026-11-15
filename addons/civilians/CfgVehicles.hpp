class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        faction = QCLASS(civilian);
        displayName = "Civilian Base Unit";
        @Templated();
        @Assigned(Civilian);
    };

    // Cars
    class GCLASS(Hatchback);
    class GCLASS(Hatchback_Sport);
    class GCLASS(Jay_Box);
    class GCLASS(Jay_Flatbed);
    class GCLASS(Jay_Fuel);
    class GCLASS(Jeep);
    class GCLASS(Offroad);
    class GCLASS(Offroad_Comms);
    class GCLASS(Offroad_Services);
    class GCLASS(Offroad_Covered);
    class GCLASS(SUV);
    class GCLASS(Tractor);
    class GCLASS(Van_Ambulance);
    class GCLASS(Van_Cargo);
    class GCLASS(Van_Service);
    class GCLASS(Van_Transport);
    class GCLASS(Ram);
    class GCLASS(HEMTT_FireTruck);

    // Boats
    class GCLASS(CabinSkiff);
    class GCLASS(Dinghy);
    class GCLASS(JetSki);
    class GCLASS(Motorboat);
    class GCLASS(RHIB);

    // Helicopters
    class GCLASS(MD500);
    class GCLASS(Mohawk);
    class GCLASS(Mohawk_Executive);
    class GCLASS(Orca);
    class GCLASS(Puma);
    class GCLASS(PumaA);

    // Planes
    class GCLASS(CessnaTTx);
    class GCLASS(CessnaTTx_Racing);

    @For(Identities)
        class CLASS(Base_$1): CLASS(Base) {
            faction = QCLASS($1);
            displayName = "$1 Civilian Base Unit";
            @Identity($1);

            @Facewear({
                "": 8,
                "G_Glasses_black_RF": 1,
                "G_Glasses_brown_RF": 1,
                "G_Glasses_white_RF": 1,
                "G_Spectacles": 0.8,
                "G_Glasses_blue_RF": 0.1,
                "G_Glasses_red_RF": 0.1,
            });
        };
        #define NATION $1
        #include "CfgVehicles_T_CitizensUnits.hpp"
        #include "CfgVehicles_T_CitizensBoats.hpp"
        #include "CfgVehicles_T_CitizensCars.hpp"
        #include "CfgVehicles_T_CitizensHelicopters.hpp"
        #include "CfgVehicles_T_CitizensPlanes.hpp"
        #include "CfgVehicles_T_Firefighters.hpp"
        #include "CfgVehicles_T_Medical.hpp"
        #undef NATION
    @EndFor
};
