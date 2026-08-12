#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {
            @ForSides(OPFOR,BLUFOR,INDEP)
                @For(Identities)
                    QCLASS($1_$UPPER_Arid_Looter),
                    QCLASS($1_$UPPER_Arid_LooterPistol),
                    QCLASS($1_$UPPER_Arid_Hunter),
                    QCLASS($1_$UPPER_Boreal_Looter),
                    QCLASS($1_$UPPER_Boreal_LooterPistol),
                    QCLASS($1_$UPPER_Boreal_Hunter),
                    QCLASS($1_$UPPER_Cold_Looter),
                    QCLASS($1_$UPPER_Cold_LooterPistol),
                    QCLASS($1_$UPPER_Cold_Hunter),
                    QCLASS($1_$UPPER_Desert_Looter),
                    QCLASS($1_$UPPER_Desert_LooterPistol),
                    QCLASS($1_$UPPER_Desert_Hunter),
                    QCLASS($1_$UPPER_Tropic_Looter),
                    QCLASS($1_$UPPER_Tropic_LooterPistol),
                    QCLASS($1_$UPPER_Tropic_Hunter),
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
    @ForSides(BLUFOR,INDEP,OPFOR)
        class CLASS($LOWER) {};
    @EndForSides
};

#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
