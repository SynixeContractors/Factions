class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Special Forces";
        editorSubcategory = QGCLASS(special_forces);

        #include "..\wear\uniform.hpp"
        @Vests({
            "variants": {
              "synixe_mgp_vest_jpc_assaulter_gry": 0.8,
              "synixe_mgp_vest_jpc_assaulter_gry_belt": 0.1,
              "synixe_mgp_vest_jpc_grenadier_gry": 0.1,
            },
            "packs": [
                "t2_standard",
                "military_standard"
            ],
        });
        #include "..\wear\helmet.hpp"
        #include "..\wear\facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "..\..\krasnovia\weapons\rifle_sof.hpp"
        #include "..\..\krasnovia\weapons\launcher.hpp"
        #include "..\..\krasnovia\weapons\attachments_sof.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "..\..\krasnovia\weapons\rifle_sof.hpp"
        #include "..\..\krasnovia\weapons\attachments_sof.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "..\wear\backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
        #include "..\..\krasnovia\weapons\pistol.hpp"
    };
    class CLASS(SquadLeader): CLASS(RiflemanCarabine) {
        @Role(SquadLeader);
        #include "..\..\krasnovia\weapons\pistol.hpp"
        @Primary({
            "weapons": {
                "JCA_arifle_M4A4_GL_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 8,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
        });
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "200Rnd_556x45_Box_Red_F": 6,
                    },
                },
            },
        });
        #include "..\..\krasnovia\weapons\pistol.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        #include "..\wear\backpack_medic.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanMAT);
        #include "..\..\krasnovia\weapons\mat.hpp"
    };
    class CLASS(Engineer): CLASS(RiflemanBackpack) {
        @Role(Engineer);
        #include "..\wear\engineer.hpp"
    };
    class CLASS(RadioOperator): CLASS(RiflemanCarabine) {
        @Role(RadioOperator);
        #include "..\wear\backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(RiflemanBackpack) {
        @Role(Demolitions);
        #include "..\wear\demo.hpp"
    };
    class CLASS(HeliPilot): CLASS(RiflemanCarabine) {
        @Role(HeliPilot);
        #include "..\..\krasnovia\wear\pilot.hpp"
    };
    class CLASS(Marksman): CLASS(RiflemanCarabine) {
        @Role(Marksman);
        #include "..\..\krasnovia\weapons\pistol.hpp"
        @Primary({
            "weapons": {
                "JCA_arifle_SR10_VFG_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "JCA_20Rnd_762x51_PMAG": 6,
                    },
                },
            },
            "optics": {
                "optic_DMS": 1,
            },
        });
    };
    class CLASS(Spotter): CLASS(Marksman) {
        @Role(Spotter);
        //TODO: needs a winter ghiliesuit
    };
    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);
        #include "..\..\krasnovia\weapons\sniper.hpp"
    };
};
