class CfgWeapons {

    //// F2000 ////

        class arifle_Mk20_black_F;
        class SYN_KLNAF_F2000_F : arifle_Mk20_black_F {
            scope = 1;
        };

            class SYN_KLNAF_F2000_VRCO : SYN_KLNAF_F2000_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_VRCO_RF";
                };
            };
        };

            class SYN_KLNAF_F2000_Holo : SYN_KLNAF_F2000_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Holosight_blk_F";
                };
            };
        };

        class arifle_Mk20_GL_black_F;
        class SYN_KLNAF_F2000_GL : arifle_Mk20_GL_black_F {
            scope = 1;
        };

            class SYN_KLNAF_F2000_GL_Holo : SYN_KLNAF_F2000_GL {
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
        class SYN_KLNAF_Minimi_F : LMG_03_F {
            scope = 1;
        };

            class SYN_KLNAF_Minimi_Holo : SYN_KLNAF_Minimi_F {
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
        class SYN_KLNAF_HK417_F : arifle_SPAR_03_blk_F {
            scope = 1;
        };

            class SYN_KLNAF_HK417_DMS : SYN_KLNAF_HK417_F {
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
        class SYN_KLNAF_FNMAG_F : Aegis_MMG_FNMAG_240_F {
            scope = 1;
        };

            class SYN_KLNAF_FNMAG_Elcan : SYN_KLNAF_FNMAG_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Arco_AK_blk_F";
                };
        };
    };  

    //// Vector ////

        class SMG_01_F;
        class SYN_KLNAF_SMG_F : SMG_01_F {
            scope = 1;
        };

            class SYN_KLNAF_SMG_Holo : SYN_KLNAF_SMG_F {
            scope = 1;
            class LinkedItems {
                class LinkedItemsOptic {
                    slot = "CowsSlot";
                    item = "optic_Holosight_smg_blk_F";
                    };
            };
        };  



};
