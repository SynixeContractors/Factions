class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_opfor)
    #define TEMPLATE_SIDE 0
    #include "..\..\..\templates\statics\M2.hpp"
    #include "..\..\..\templates\statics\XM3XX.hpp"

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
                "t2_rifleman_medical",
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
                "t2_medic",
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
                "toolkit",
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
};
