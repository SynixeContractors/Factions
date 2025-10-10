class CfgWeapons {

    //// Velko ////

        class arifle_Velko_lxWS;
        class SYN_CNAF_Velko_F : arifle_Velko_lxWS {
            scope = 1;
        };

            class SYN_CNAF_Velko_Holo : SYN_CNAF_Velko_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "Aegis_optic_1p87";
                };
            };
        };

            class SYN_CNAF_Velko_HAMR : SYN_CNAF_Velko_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Hamr";
                };
            };
        };

        class arifle_VelkoR5_GL_lxWS;
        class SYN_CNAF_Velko_GL : arifle_VelkoR5_GL_lxWS {
            scope = 1;
        };

            class SYN_CNAF_Velko_GL_HAMR : SYN_CNAF_Velko_GL {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Hamr";
                };
        };
    };  

        class arifle_VelkoR5_lxWS;
        class SYN_CNAF_Velko_S : arifle_VelkoR5_lxWS {
            scope = 1;
        };

            class SYN_CNAF_Velko_S_Holo : SYN_CNAF_Velko_S {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "Aegis_optic_1p87";
                };
        };
    }; 

    //// S77 ////

        class LMG_S77_AAF_lxWS;
        class SYN_CNAF_S77_F : LMG_S77_AAF_lxWS {
            scope = 1;
        };

            class SYN_CNAF_S77_HAMR : SYN_CNAF_S77_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Hamr";
                };
        };
    };  

    //// M14 ////

        class srifle_DMR_06_hunter_F;
        class SYN_CNAF_M14_F : srifle_DMR_06_hunter_F {
            scope = 1;
        };

            class SYN_CNAF_M14_DMS : SYN_CNAF_M14_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_DMS";
                };

                class LinkedItemsBipod {
			    slot = "UnderBarrelSlot";
			    item = "bipod_02_F_blk";
			};
        };
    };  

    //// MMG ////

        class MMG_02_black_F;
        class SYN_CNAF_MMG_F : MMG_02_black_F {
            scope = 1;
        };

            class SYN_CNAF_MMG_HAMR : SYN_CNAF_MMG_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Hamr";
                };

                class LinkedItemsBipod {
			    slot = "UnderBarrelSlot";
			    item = "bipod_01_F_blk";
			};
        };
        };
    };  

    //// PDW ////

        class hgun_PDW2000_F;
        class SYN_CNAF_SMG_F : hgun_PDW2000_F {
            scope = 1;
        };

            class SYN_CNAF_SMG_Holo : SYN_CNAF_SMG_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Holosight_smg_blk_F";
                    };
            };
        };  