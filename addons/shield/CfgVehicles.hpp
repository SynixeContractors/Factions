class CfgVehicles {
    class B_AssaultPack_mcamo;
    class CLASS(B_AssaultPack): B_AssaultPack_mcamo {
        model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\backpack_compact_blk_co.paa),QPATHTOF(data\platecarrier_extras.paa)};
        displayName = "Assault Pack [S.H.I.E.L.D.]";
    };

    class B_Kitbag_cbr;
    class CLASS(B_Kitbag): B_Kitbag_cbr {
        hiddenSelectionsTextures[] = {QPATHTOF(data\backpack_fast_blk_logo_co.paa)};
        displayName = "Kitbag [S.H.I.E.L.D.]";
    };
};
