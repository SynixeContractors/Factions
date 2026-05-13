#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class GCLASS(Otokar);
    class GCLASS(Otokar_HMG);
    class GCLASS(Badger);
    class GCLASS(Badger_ATGM);
    class GCLASS(Badger_Unarmed);
    class GCLASS(Badger_Command);
    class GCLASS(Dinghy);
    class GCLASS(Ram_MMG);
    class GCLASS(Ram_MRL);
    class GCLASS(Ram_AA);
    class GCLASS(Ram_AT);
    class GCLASS(Ram);
    class GCLASS(Ram_Comms);
    class GCLASS(Ram_M134);
    class GCLASS(Ram_RCWS);
    class GCLASS(LUT_Transport);
    class GCLASS(LUT_TransportCovered);
    class GCLASS(LUT_Flatbed);
    class GCLASS(UGV);
    class GCLASS(UGV_RCWS);
    class GCLASS(QuadBike);
    class GCLASS(M2_Low);
    class GCLASS(M2_High);
    class GCLASS(Mk6Mortar);
    class GCLASS(Orca);
    class GCLASS(OrcaArmed);
    class GCLASS(OrcaR);
    class GCLASS(OrcaAR);

    #define SIDE OPFOR
    #define SIDE_NUMBER 0
    #define SIDE_FACTION t3_opfor
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION

    #define SIDE INDEP
    #define SIDE_NUMBER 2
    #define SIDE_FACTION t3_indep
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION

    #define SIDE BLUFOR
    #define SIDE_NUMBER 1
    #define SIDE_FACTION t3_blufor
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION
};
