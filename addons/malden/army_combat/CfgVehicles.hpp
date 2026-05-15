class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "../wear/Uniform.hpp"
        #include "../wear/Helmet.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../wear/Vest_rifleman.hpp"
    };
        class CLASS(TeamLeader): CLASS(Base) {
        @Role(TeamLeader);
        #include "../weapons/Gl.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../wear/Vest_grenadier.hpp"
    };
        class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../wear/Vest_teamleader.hpp"
    };    
        class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);
        #include "../weapons/Marksman.hpp"
        #include "../wear/Vest_marksman.hpp"
    };        
        class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);
        #include "../weapons/Lmg.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../wear/Vest_autorifleman.hpp"
        #include "../wear/Backpack.hpp"

    };
        class CLASS(Medic): CLASS(Base) {
        @Role(Medic);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../wear/Vest_medic.hpp"
        #include "../wear/Backpack_medic.hpp"
    };        
};    
