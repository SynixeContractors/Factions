class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_blufor)
    #define TEMPLATE_SIDE 1
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Green
    #include "../../../templates/statics/Mk6.hpp"
    #include "../../../templates/apc/BM2_AA.hpp"
    #include "../../../templates/apc/BM2_Unarmed.hpp"
    #include "../../../templates/apc/BM2K.hpp"
    #include "../../../templates/apc/BM2T.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO OLIVE
    #include "../../../templates/helicopters/Puma_Military.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Olive_01_green
    #include "../../../templates/tanks/Leopard.hpp" 
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Olive 
    #include "../../../templates/cars/Fennek.hpp"
    #include "../../../templates/cars/HEMTT.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO NATO_P
    #include "../../../templates/cars/Ram_Armed.hpp"
    #include "../../../templates/cars/Ram_Civilian.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO France
    #include "../../../templates/drones/MQ9.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CamoGrey
    #include "../../../templates/planes/JAS39.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Brienne Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "../wear/uniform.hpp"
        #include "../wear/vest_army.hpp"
        #include "../wear/helmet.hpp"
        #include "../wear/facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/launcher_lite.hpp"
        #include "../weapons/rifle.hpp"
    };
    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);
        #include "../weapons/rifle.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(TeamLeader): CLASS(Base) {
        @Role(TeamLeader);
        #include "../weapons/gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);
        #include "../weapons/lmg.hpp"
        #include "../weapons/pistol.hpp"
        #include "../wear/backpack.hpp"
    };
    class CLASS(Machinegunner): CLASS(Base) {
        @Role(Machinegunner);
        #include "../weapons/mg.hpp"
        #include "../weapons/pistol.hpp"
        #include "../wear/backpack_mg.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);
        #include "../weapons/rifle.hpp"
        #include "../wear/backpack_mg.hpp"
    };
    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);
        #include "../weapons/carbine.hpp"
        #include "../wear/backpack_medic.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);
        #include "../weapons/rifle.hpp"
        #include "../weapons/mat.hpp"
        #include "../wear/backpack.hpp"
    };
    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);
        #include "../weapons/carbine.hpp"
        #include "../weapons/aa.hpp"
        #include "../wear/backpack.hpp"
    };
    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);
        #include "../weapons/carbine.hpp"
        #include "../weapons/hat.hpp"
        #include "../wear/backpack.hpp"
    };
    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);
        #include "../weapons/marksman.hpp"
        #include "../weapons/pistol.hpp"
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
    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);

        @Headgear({
            "H_HelmetCrew_I" : 1,
        });

        @Uniforms({
            "variants" : {
                "Opf_U_O_S_Uniform_01_sweater_F" : 1,
            },
            "packs" : [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants" : {
                "V_TacVest_oli" : 1,
            },
            "packs" : [
                "t4_standard",
            ],
        });
        #include "../weapons/pdw.hpp"
    };
    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);
        #include "../wear/pilot.hpp"
    };
};
