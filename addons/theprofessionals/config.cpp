#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {
            @ForSides(OPFOR,INDEP)
                @For(Identities)
                    QCLASS($1_$UPPER_Armor_Rifleman_SMG),
                    QCLASS($1_$UPPER_Armor_Rifleman),
                    QCLASS($1_$UPPER_Armor_Breacher),
                    QCLASS($1_$UPPER_Armor_Autorifleman),
                    QCLASS($1_$UPPER_Vest_Rifleman_SMG),
                    QCLASS($1_$UPPER_Vest_Rifleman),
                    QCLASS($1_$UPPER_Vest_Breacher),
                    QCLASS($1_$UPPER_Vest_Autorifleman),
                    QCLASS($1_$UPPER_Suit_Rifleman_Pistol),
                    QCLASS($1_$UPPER_Suit_Rifleman_SMG),
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
    @ForSides(INDEP,OPFOR)
        class CLASS($LOWER) {};
    @EndForSides
};

#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
