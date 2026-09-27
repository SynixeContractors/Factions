class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Brienne Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);

        #include "../wear/uniform.hpp"
        #include "../wear/vest_recon.hpp"
        #include "../wear/helmet_recon.hpp"
        #include "../wear/facewear_recon.hpp"
        #include "../weapons/suppressor.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle.hpp"
        #include "../weapons/launcher_lite.hpp"
    };
    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);
        #include "../weapons/rifle.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);
        #include "../weapons/gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);
        #include "../weapons/lmg.hpp"
        #include "../weapons/pistol.hpp"
        #include "../wear/backpack.hpp"
    };
    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);
        #include "../weapons/carbine.hpp"
        #include "../wear/backpack_medic.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);
        #include "../weapons/carbine.hpp"
        #include "../weapons/mat.hpp"
        #include "../wear/backpack.hpp"
    };
    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);
        #include "../weapons/carbine.hpp"
        #include "../wear/engineer.hpp"
    };
    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);
        #include "../weapons/rifle.hpp"
        #include "../wear/backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);
        #include "../weapons/carbine.hpp"
        #include "../wear/demo.hpp"
    };
    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);
        #include "../weapons/marksman.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Spotter): CLASS(Marksman) {
        @Role(Spotter);
        #include "../wear/ghillie.hpp"
    };
    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);
        #include "../weapons/sniper.hpp"
    };

};
