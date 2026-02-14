#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {
            @ForSides(OPFOR,BLUFOR,INDEP,CIV)
                @For(Identities)
                    QCLASS($1_$UPPER_Policeman),
                    QCLASS($1_$UPPER_HeliPilot),
                    QCLASS($1_$UPPER_PolicemanPistol),
                    QCLASS($1_$UPPER_PolicemanSMG),
                    QCLASS($1_$UPPER_PolicemanRifle),
                    QCLASS($1_$UPPER_PolicemanBreacher),
                    QCLASS($1_$UPPER_SWAT),
                    QCLASS($1_$UPPER_SWATBreacher),
                    QCLASS($1_$UPPER_SWATSMG),
                    QCLASS($1_$UPPER_SWATRifle),
                    QCLASS($1_$UPPER_SWATDemo),
                    QCLASS($1_$UPPER_SWATSniper),
                    QCLASS($1_$UPPER_Gendarme),
                    QCLASS($1_$UPPER_GendarmeSMG),
                    QCLASS($1_$UPPER_GendarmeRifle),
                    QCLASS($1_$UPPER_GendarmeBreacher),
                    QCLASS($1_$UPPER_GendarmeSniper),
                    QCLASS($1_$UPPER_Offroad),
                    QCLASS($1_$UPPER_Offroad_Covered),
                    QCLASS($1_$UPPER_Offroad_Comms),
                    QCLASS($1_$UPPER_Van_Transport),
                    QCLASS($1_$UPPER_Ram),
                    QCLASS($1_$UPPER_Ram_Covered),
                    QCLASS($1_$UPPER_Ram_Bars_Covered),
                    QCLASS($1_$UPPER_Ram_Bars),
                    QCLASS($1_$UPPER_Ram_Comms),
                    QCLASS($1_$UPPER_Otokar),
                    QCLASS($1_$UPPER_Otokar_HMG),
                    QCLASS($1_$UPPER_Otokar_RCWS),
                    QCLASS($1_$UPPER_Offroad_Police),
                    QCLASS($1_$UPPER_Offroad_Covered_Police),
                    QCLASS($1_$UPPER_Offroad_Comms_Police),
                @EndFor
            @EndForSides
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_base_vehicles",
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

class synixe_factions_generics {
    @ForSides(BLUFOR,INDEP,OPFOR,CIV)
        class CLASS($LOWER) {};
    @EndForSides
};

#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
