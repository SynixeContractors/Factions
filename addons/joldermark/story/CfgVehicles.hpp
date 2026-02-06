class CfgVehicles {

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Joldermark story base";
        editorSubcategory = QGCLASS(story);
        
        @Assigned(Military);

    };

    class CLASS(Anton): CLASS(Base) {
        @Role(Anton);

        identityTypes[] = {
            "Anton_vd_Werve"
        };
        genericNames = "";

        class EventHandlers {
            init = "_unit = _this select 0; 
            _unit spawn { params ['_u']; sleep 0.1; 
            _u setIdentity 'Anton_vd_Werve' };";
        };


        @Uniforms({
            "variants": {
                "U_C_PilotJacket_open_lbrown_RF": 1
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_holster_cbr_F": 1,
            },
        });

        @Headgear({
            "synixe_mgp_h_cap_m81": 0.6,
            "synixe_mgp_h_cap_m81_backwards": 0.4,
        });

        @Facewear({
            "G_Glasses_black_RF": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_DEagle_classic_RF": {
                    "magazinesVest": {
                        "7Rnd_50AE_Mag_RF": 3,
                    },
                },
            },
        });
    };

        class CLASS(Raymond): CLASS(Base) {
        @Role(Raymond);

        identityTypes[] = {
            "Ng_Chi_Ming"
        };
        genericNames = "";

        class EventHandlers {
            init = "_unit = _this select 0; 
            _unit spawn { params ['_u']; sleep 0.1; 
            _u setIdentity 'Ng_Chi_Ming' };";
        };


        @Uniforms({
            "variants": {
                "tacs_Suit_VIP": 1
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "synixe_armoury_Hidden_Ballistic_Vest_03": 1,
            },
        });

        @Facewear({
            "G_Squares": 1,
        });

        @Secondary({
            "weapons": {
                "Aegis_hgun_Pistol_R57_silver_F": {
                    "magazinesVest": {
                        "Aegis_20rnd_570x28_RP57_Mag": 3,
                    },
                },
            },
        });
    };
    
    class CLASS(Bart): CLASS(Base) {
        @Role(Bart);

        identityTypes[] = {
            "Bart_Smeets"
        };
        genericNames = "";

        class EventHandlers {
            init = "_unit = _this select 0; 
            _unit spawn { params ['_u']; sleep 0.1; 
            _u setIdentity 'Bart_Smeets' };";
        };

        @Headgear({
            "Aegis_H_Milcap_nohs_taiga_F": 1
        });

        @Uniforms({
            "variants": {
                "U_O_R_OfficerUniform_taiga_F": 1
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_Rangemaster_belt_taiga_F": 1,
            },
        });

        @Facewear({
            "G_Squares": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });
    };

    class CLASS(Peter): CLASS(Base) {
        @Role(Peter);

        identityTypes[] = {
            "Peter_Balkenende"
        };
        genericNames = "";

        class EventHandlers {
            init = "_unit = _this select 0; 
            _unit spawn { params ['_u']; sleep 0.1; 
            _u setIdentity 'Peter_Balkenende' };";
        };

        @Headgear({
            "H_MilCap_taiga": 1
        });


        @Uniforms({
            "variants": {
                "U_O_R_OfficerUniform_taiga_F": 1
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_Rangemaster_belt_taiga_F": 1,
            },
        });

        @Facewear({
            "G_Squares": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });
    };

    class CLASS(Ludwig): CLASS(Base) {
        @Role(Ludwig);

        identityTypes[] = {
            "Ludwig_Meijer"
        };
        genericNames = "";

        class EventHandlers {
            init = "_unit = _this select 0; 
            _unit spawn { params ['_u']; sleep 0.1; 
            _u setIdentity 'Ludwig_Meijer' };";
        };

        @Headgear({
            "Aegis_H_Milcap_nohs_taiga_F": 1
        });

        @Uniforms({
            "variants": {
                "U_O_R_OfficerUniform_taiga_F": 1
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_Rangemaster_belt_taiga_F": 1,
            },
        });

        @Facewear({
            "G_Squares": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });
    };

    class CLASS(Sjoerd): CLASS(Base) {
        @Role(Sjoerd);

        identityTypes[] = {
            "Sjoerd_Koster"
        };
        genericNames = "";

        class EventHandlers {
            init = "_unit = _this select 0; 
            _unit spawn { params ['_u']; sleep 0.1; 
            _u setIdentity 'Sjoerd_Koster' };";
        };

        @Headgear({
            "H_MilCap_taiga": 1
        });


        @Uniforms({
            "variants": {
                "U_O_R_OfficerUniform_taiga_F": 1
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_Rangemaster_belt_taiga_F": 1,
            },
        });

        @Facewear({
            "G_Squares": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });
    };

    class CLASS(Jorn): CLASS(Base) {
        @Role(Jorn);

        identityTypes[] = {
            "Jorn_Wessels"
        };
        genericNames = "";

        class EventHandlers {
            init = "_unit = _this select 0; 
            _unit spawn { params ['_u']; sleep 0.1; 
            _u setIdentity 'Jorn_Wessels' };";
        };

        @Headgear({
            "H_MilCap_taiga": 1
        });


        @Uniforms({
            "variants": {
                "U_O_R_OfficerUniform_taiga_F": 1
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_Rangemaster_belt_taiga_F": 1,
            },
        });

        @Facewear({
            "G_Squares": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });
    };


};
