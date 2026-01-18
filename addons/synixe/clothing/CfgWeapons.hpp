class CfgWeapons {
    class Uniform_Base;

    class UniformItem;
    class PCLASS(Uniform_Base): Uniform_Base {
        dlc = QUOTE(PREFIX);
        scope = 0;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Contractor Shirt
    class PCLASS(Uniform_Contractor_Shirt): PCLASS(Uniform_Base) {
        scope = 2;
        author = "Brett Harrison";
        displayName = "Polo [Synixe] (Black, Pants)";
        picture = QPATHTOF(clothing\ui\contractor_shirt_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Contractor_Shirt);
        };
    };

    // Synixe Tartan
    class PCLASS(Uniform_Combat_LS_Synixe_BP_BB): PCLASS(Uniform_Base) {
        scope = 2;
        author = "Brett Harrison";
        displayName = "Combat Uniform (Synixe)";
        picture = QPATHTOF(clothing\ui\uniform_combat_ls_synixe_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_LS_Synixe_BP_BB);
        };
    };
    class PCLASS(Uniform_Combat_RS_Synixe_BP_BB): PCLASS(Uniform_Base) {
        scope = 2;
        author = "Brett Harrison";
        displayName = "Combat Uniform (Synixe, Rolled-Up)";
        picture = QPATHTOF(clothing\ui\uniform_combat_rs_synixe_bp_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Unit_Combat_RS_Synixe_BP_BB);
        };
    };
};
