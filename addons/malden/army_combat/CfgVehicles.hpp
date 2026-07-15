class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_indep)
    #define TEMPLATE_SIDE 2
    #include "../../../templates/statics/M2.hpp"
    
    #define TEMPLATE_CAMO Hex
    #include "../../../templates/cars/Karatel.hpp"
    #include "../../../templates/planes/Yak130.hpp"
    
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Green
    #include "../../../templates/cars/Ram_Civilian.hpp"
    #include "../../../templates/cars/Ram_Advanced.hpp"
    #include "../../../templates/cars/Ram_Armed.hpp"    
    #include "../../../templates/cars/Ram_Rocket.hpp"
    #include "../../../templates/helicopters/Orca_Military.hpp"

    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO AAF_Olive  
    #include "../../../templates/helicopters/Puma_Military.hpp"

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
        #include "../weapons/Pistol.hpp"
        #include "../wear/Vest_grenadier.hpp"
    };
    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../weapons/Pistol.hpp"
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
    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../wear/Vest_rifleman.hpp"
        #include "../wear/Backpack_engineer.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../weapons/Mat.hpp"
        #include "../wear/Vest_rifleman.hpp"
        #include "../wear/Backpack.hpp"
    };
    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../wear/Vest_rifleman.hpp"
        #include "../wear/Backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../wear/Vest_rifleman.hpp"
        #include "../wear/Backpack_demo.hpp"
    };
    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../weapons/Aa.hpp"
        #include "../wear/Vest_rifleman.hpp"
        #include "../wear/Backpack.hpp"
    };
    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../weapons/Hat.hpp"
        #include "../wear/Vest_rifleman.hpp"
        #include "../wear/Backpack.hpp"
    };
    class CLASS(Machinegunner): CLASS(Base) {
        @Role(Machinegunner);
        #include "../weapons/Mg.hpp"
        #include "../wear/Vest_autorifleman.hpp"
        #include "../wear/Backpack_machinegunner.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);
        #include "../weapons/Rifleman.hpp"
        #include "../weapons/Attachments_army.hpp"
        #include "../wear/Vest_rifleman.hpp"
        #include "../wear/Backpack_machinegunner.hpp" 
    };
    class CLASS(HeliPilot): CLASS(Base) {
        @Role(HeliPilot);
        @Headgear({
           "tacs_Helmet_PilotHeli_Tan": 1,
        });
        @Uniforms({
            "variants":{
                "tacs_Uniform_HeliPilotCoverall_Sand": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
        #include "../weapons/Pdw.hpp"
    };                                                                                                
};    
