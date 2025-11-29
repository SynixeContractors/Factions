class CfgVehicles {
    class GCLASS(Base_BLUFOR);

    /*
        Example Base Unit

        This defines for the faction:
        - Faction
        - Identity Types (Language and Head)
        - Names
    */
    class CLASS(Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t3_blufor);
        displayName = "Example Base Unit";
        identityTypes[] = {"LanguageFRE_F", "Head_Euro"};
        genericNames = "NATOMen";

        /*
            If A unit is going to be built with the template system
            it MUST be marked as such with the @Templated() helper.
            Units that have a templated unit as a parent do
            not need to be marked as templated themselves.
        */
        @Templated();

        @Assigned(Military);
    };

    /*
        Example Rifleman

        This units inherits from the Base unit above, which has @Templated() on it
        so this unit is also considered templated
    */
    class CLASS(Rifleman): CLASS(Base) {
        /*  
            The role of the unit.
            In this example:
            - displayName: Rifleman
            - role: Rifleman
            - icon: iconMan
        */
        @Role(Rifleman);

        /*
            These are the uniforms that will be randomly assigned to the unit

            Each uniform can have:
            - variants
            - packs
            - magazines
            - items
        */
        @Uniforms({
            "variants": {
                "U_I_CombatUniform": 0.65,
                "Aegis_U_I_Uniform_01_sweater_f": 0.3,
                "U_I_CombatUniform_tshirt": 0.05,
            },
            // Packs are preset of common items, found in addons/main/functions/fnc_packItems.sqf
            "packs": [
                "t3_rifleman_medical",
            ],
        });

        /*
            These are the vests that will be randomly assigned to the unit
        */
        @Vests({
            "variants": {
                "V_PlateCarrierIA1_dgtl": 0.5,
                "V_PlateCarrierIA2_dgtl": 0.5,
            },
            // Any container can have non-weapon magazines, like throwables
            "magazines": {
                "HandGrenade": 1,
                "SmokeShell": 1,
            },
        });

        /*
            These are the headgear that will be randomly assigned to the unit
        */
        @Headgear({
            "H_HelmetIA": 0.6,
            "H_HelmetSpecter_cover_AAF_F": 0.2,
            "H_HelmetIA_sb_digital_RF": 0.1,
            "H_MK7_AAF_F": 0.1,
        });

        /*
            These are the facewear items that will be randomly assigned to the unit

            NOTE: Facewear will not show up in the editor
        */
        @Facewear({
            "": 0.7, // 70% chance to have no facewear
            "G_Bandanna_oli": 0.2,
            "G_Cigarette": 0.1,
        });

        /*
            This is the primary weapon and magazines that will be assigned to the unit

            Each weapon can have:
            - probability
            - magazinesUniform
            - magazinesVest
            - magazinesBackpack

            Optional:
            - optics
            - pointers
            - muzzles
            - bipods
        */
        @Primary({
            "weapons": {
                "arifle_Mk20_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_Tracer_Green": 7,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87": 0.7,
                "optic_Hamr": 0.3
            },
        });

        /*
            This is the secondary weapon and magazines that will be assigned to the unit
        */
        @Secondary({
            "weapons": {
                "": 0.6, // 60% chance to have no secondary
                "hgun_Glock19_khk_RF": {
                    "probability": 0.4,
                    "magazinesVest": {
                        "17Rnd_9x19_Mag_RF": 3,
                    },
                },
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_S77_AAF_lxWS": {
                    "magazinesVest": {
                        "100Rnd_762x51_S77_Yellow_lxWS": 4,
                    }
                }
            }
        });
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Primary({
            "weapons": {
                "SMG_03C_camo": {
                    "magazinesVest": {
                        "50Rnd_570x28_SMG_03": 4,
                    }
                }
            }
        });

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
            },
            "packs": [
                "t3_medic",
            ],
        });
    };
};
