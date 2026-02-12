#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {
            @ForSides(OPFOR,BLUFOR,INDEP,CIV)
                @For(Identities)
                    QCLASS($1_$UPPER_Polo_Rifleman_Pistol),
                    QCLASS($1_$UPPER_Polo_Rifleman_SMG),
                    QCLASS($1_$UPPER_Polo_Rifleman_556),
                    QCLASS($1_$UPPER_Polo_Rifleman_545),
                    QCLASS($1_$UPPER_Polo_Rifleman_762),
                    QCLASS($1_$UPPER_Polo_Rifleman_65),
                    QCLASS($1_$UPPER_Polo_Rifleman_58),
                    QCLASS($1_$UPPER_Armor_Rifleman_Pistol),
                    QCLASS($1_$UPPER_Armor_Rifleman_SMG),
                    QCLASS($1_$UPPER_Armor_Rifleman_556),
                    QCLASS($1_$UPPER_Armor_Rifleman_545),
                    QCLASS($1_$UPPER_Armor_Rifleman_762),
                    QCLASS($1_$UPPER_Armor_Rifleman_65),
                    QCLASS($1_$UPPER_Armor_Rifleman_58),
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
    @ForSides(BLUFOR,INDEP,OPFOR,CIV)
        class CLASS($LOWER) {};
    @EndForSides
};

#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
