class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_blufor)
    #define TEMPLATE_SIDE 1
    #define TEMPLATE_CAMO Olive
    #include "../../../templates/cars/Polaris.hpp"
    #undef TEMPLATE_CAMO

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Brienne Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);

        #include "../wear/uniform_sof.hpp"
        #include "../wear/helmet_sof.hpp"
        #include "../wear/facewear_recon.hpp"
        #include "../weapons/suppressor.hpp"

        @Vests({
            "variants" : {
                "synixe_mgp_vest_mmac_assaulter_aor2" : 1,
            },
            "packs" : [
                "t2_standard",
                "military_standard"
            ],
        });

        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle.hpp"
        #include "../weapons/launcher_lite.hpp"
    };
    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);

        @Vests({
            "variants" : {
                "synixe_mgp_vest_mmac_teamleader_aor2_belt" : 1,
            },
            "packs" : [
                "t2_standard",
                "military_standard"
            ],
        });

        #include "../weapons/rifle.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);
        #include "../weapons/gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants" : {
                "synixe_mgp_vest_mmac_hgunner_aor2_belt" : 1,
            },
            "packs" : [
                "t2_standard",
                "military_standard"
            ],
        });

        #include "../weapons/lmg.hpp"
        #include "../weapons/pistol.hpp"
        #include "../wear/backpack.hpp"
    };
    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Vests({
            "variants" : {
                "synixe_mgp_vest_mmac_medic_aor2_belt" : 1,
            },
            "packs" : [
                "t2_standard",
                "military_standard"
            ],
        });

        #include "../weapons/carbine.hpp"
        #include "../weapons/pistol.hpp"
        #include "../wear/backpack_medic.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);
        #include "../weapons/rifle.hpp"
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

        @Vests({
            "variants" : {
                "synixe_mgp_vest_mmac_assaulter_aor2_belt" : 1,
            },
            "packs" : [
                "t2_standard",
                "military_standard"
            ],
        });

        #include "../weapons/marksman.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Spotter): CLASS(Marksman) {
        @Role(Spotter);
    };
    class CLASS(Sniper): CLASS(Marksman) {
        @Role(Sniper);

        @Vests({
            "variants" : {
                "synixe_mgp_vest_mmac_marksman_aor2_belt" : 1,
            },
            "packs" : [
                "t2_standard",
                "military_standard"
            ],
        });

        #include "../weapons/sniper.hpp"
    };
};
