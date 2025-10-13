class CfgGroups {
    class EAST {
        class CLASS(t2_opfor) {
            name = "[T2] Joson Socialist Republic";
            @Groups(T2,OPFOR,Army_Combat);
            class CLASS(T2_Army_Special) {
                name = "Army (Custom)";
                class CLASS(FireteamSniper) {
                    name = "Sniper Team";
                    side = 0;
                    faction = "t2_opfor";
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS(army_combat_Sniper),0);
                    GROUP_UNIT(CLASS(army_combat_Marksman),0);
                };
            };
        };
    };
};
