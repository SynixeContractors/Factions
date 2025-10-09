class CfgWeapons {

    //// F2000 ////

        class arifle_Mk20_black_F;
        class SYN_F2000_F : arifle_Mk20_black_F {
            scope = 1;
        };

            class SYN_F2000_VRCO : SYN_F2000_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_VRCO_RF";
                };
            };
        };

            class SYN_F2000_Holo : SYN_F2000_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Holosight_blk_F";
                };
            };
        };

        class arifle_Mk20_GL_black_F;
        class SYN_F2000_GL_F : arifle_Mk20_GL_black_F {
            scope = 1;
        };

            class SYN_F2000_GL_Holo : SYN_F2000_GL_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Holosight_blk_F";
                };
        };
    };  

    //// Minimi ////

        class LMG_03_F;
        class SYN_Minimi_F : LMG_03_F {
            scope = 1;
        };

            class SYN_Minimi_Holo : SYN_Minimi_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Holosight_blk_F";
                };
        };
    };  

    //// HK417 ////

        class arifle_SPAR_03_blk_F;
        class SYN_HK417_F : arifle_SPAR_03_blk_F {
            scope = 1;
        };

            class SYN_HK417_DMS : SYN_HK417_F {
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

    //// FN Mag ////

        class Aegis_MMG_FNMAG_240_F;
        class SYN_FNMAG_F : Aegis_MMG_FNMAG_240_F {
            scope = 1;
        };

            class SYN_FNMAG_Elcan : SYN_FNMAG_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Arco_AK_blk_F";
                };
        };
    };  




};
