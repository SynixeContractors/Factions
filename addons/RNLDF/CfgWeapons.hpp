class CfgWeapons {

    //// AUG ////

        class arifle_AUG_black_F;
        class SYN_RNLDF_AUG_F : arifle_AUG_black_F {
            scope = 1;
        };

            class SYN_RNLDF_AUG_Holo : SYN_RNLDF_AUG_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Holosight_blk_F";
                };
            };
        };

            class SYN_RNLDF_AUG_HAMR : SYN_RNLDF_AUG_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Hamr";
                };
            };
        };

        class arifle_AUG_GL_black_F;
        class SYN_RNLDF_AUG_GL : arifle_AUG_GL_black_F {
            scope = 1;
        };

            class SYN_RNLDF_AUG_GL_HAMR : SYN_RNLDF_AUG_GL {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Hamr";
                };
        };
    };  

    //// Negev ////

        class LMG_Zafir_black_F;
        class SYN_RNLDF_Negev_F : LMG_Zafir_black_F {
            scope = 1;
        };

            class SYN_RNLDF_Negev_HAMR : SYN_RNLDF_Negev_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Hamr";
                };
        };
    };  

    //// SR25 ////

        class Aegis_arifle_SR25_MR_blk_F;
        class SYN_RNLDF_SR25_F : Aegis_arifle_SR25_MR_blk_F {
            scope = 1;
        };

            class SYN_RNLDF_SR25_AMS : SYN_RNLDF_SR25_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_AMS";
                };

                class LinkedItemsBipod {
			    slot = "UnderBarrelSlot";
			    item = "bipod_01_F_blk";
			};
        };
    };  

    //// HK121 ////

        class MMG_01_black_F;
        class SYN_RNLDF_HK121_F : MMG_01_black_F {
            scope = 1;
        };

            class SYN_RNLDF_HK121_MRCO : SYN_RNLDF_HK121_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_MRCO";
                };

                class LinkedItemsBipod {
			    slot = "UnderBarrelSlot";
			    item = "bipod_01_F_blk";
			};
        };
        };
    };  

    //// Vector ////

        class SMG_05_F;
        class SYN_RNLDF_SMG_F : SMG_05_F {
            scope = 1;
        };

            class SYN_RNLDF_SMG_Holo : SYN_RNLDF_SMG_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Holosight_smg_blk_F";
                    };
            };
        };  