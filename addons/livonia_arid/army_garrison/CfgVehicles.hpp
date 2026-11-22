class CfgVehicles {
    @Vehicles({
        "faction": "t2_opfor",
        "side": "OPFOR",
        "vehicles": [
            "XM_GMG_High",
            "XM_GMG_Low",
            "XM_HMG_High",
            "XM_HMG_Low",
            "M2_High",
            "M2_Low",
        ],
    });
    // this probably should go into an army faction
    @Vehicles({
        "faction": "t2_opfor",
        "side": "OPFOR",
        "camo": "EAF_Arid",
        "vehicles": [
            "Badger",
            "Badger_Command",
            "Badger_Mortar",
            "Badger_ATGM",
            "Badger_Unarmed",
            "Warrior",
            "Leopard2",
            "LUT_AA",
            "LUT_Ammo",
            "LUT_Cargo",
            "LUT_Flatbed",
            "LUT_Fuel",
            "LUT_MRL",
            "LUT_Medical",
            "LUT_Repair",
            "LUT_Transport",
            "LUT_TransportCovered",
            "Offroad",
            "Offroad_Covered",
            "Offroad_Comms",
            "Offroad_Services",
            "Offroad_HMG",
            "Offroad_AT",
            "Ram",
            "Ram_Covered",
            "Ram_Comms",
            "Ram_Fuel",
            "Ram_HMG",
            "Ram_MMG",
            "Ram_AA",
            "Ram_RCWS",
            "Ram_M134",
            "Ram_MRL",
            "Ram_AT",
            "Wildcat",
            "Wildcat_Pylons",
            "Mi35",
            "PumaM",
            "PumaT",
            "Cougar",
            "Cougar_Armed",
            "Cougar_Pylon",
            "UGV",
            "UGV_RCWS",
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Livonia Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "U_I_E_Uniform_01_arid_F": 0.5,
                "U_I_E_Uniform_01_arid_shortsleeve_F": 0.5,
                "U_I_L_Uniform_01_camo_F": 0.1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_EAF_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_EAF_F": 1,
                "V_CarrierRigKBT_01_light_EAF_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_Beret_EAF_01_green": 0.6,
            "Aegis_H_MilCap_nohs_eaf_arid": 0.2,
            "H_MilCap_eaf_arid": 0.1,
            "H_Cap_eaf_arid_F": 0.1,
            "H_Cap_eaf_arid_hs_F": 0.1,
            "Atlas_H_FieldCap_hs_ldf": 0.1,
        });

        #include "..\..\livonia_woodland\weapons\Rifleman.hpp"

        #include "..\..\livonia_woodland\weapons\Pistol.hpp"
    };
    class CLASS(Officer): CLASS(Base) {
        @Role(Officer);
        @Uniforms({
            "variants": {
                "U_I_E_Uniform_01_arid_officer_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
        @Headgear({
            "H_Beret_EAF_01_green": 1,
        });
        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_holster_sand_F": 1,
            },
        });
        #include "..\..\livonia_woodland\weapons\Pistol.hpp"
    };
    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        #include "..\..\livonia_woodland\weapons\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        #include "..\..\livonia_woodland\weapons\Autorifleman.hpp"

        #include "..\..\livonia_woodland\weapons\Pistol.hpp"

    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Uniforms({
            "variants": {
                "U_I_E_Uniform_01_coveralls_F": 1,
            },
        });

        @Headgear({
            "H_Headset_Tactical": 1,
            "H_Headset_Tactical_grn": 1,
            "H_Headset_Tactical_khk": 1,
            "Atlas_H_FieldCap_hs_ldf": 1,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        #include "..\..\livonia_woodland\weapons\PistolChance.hpp"

        @Backpacks({
            "variants": {
                "B_Messenger_Olive_F": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);

        @Headgear({
            "H_Headset_Tactical": 1,
            "H_Headset_Tactical_grn": 1,
            "H_Headset_Tactical_khk": 1,
            "H_Construction_earprot_white_F": 1,
            "H_Construction_earprot_yellow_F": 1,
            "Atlas_H_FieldCap_hs_ldf": 1,
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 1,
                "V_Safety_yellow_F": 1,
            },
        });

        #include "..\..\livonia_woodland\weapons\Rifleman.hpp"
        #include "..\..\livonia_woodland\weapons\PistolChance.hpp"
    };
    class CLASS(Crewman): CLASS(Rifleman) {
      //FIXME: get actual crewman or move to combat and create it there
      @Role(Crewman)
    };
    class CLASS(HeliPilot): CLASS(Rifleman) {
      //FIXME: get actual crewman or move to combat and create it there
      @Role(HeliPilot)
    };

};
