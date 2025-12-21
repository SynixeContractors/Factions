class CfgGroups {
    class EAST {
        class CLASS(t3_opfor) {
            name = FACTION_NAME;
            @Groups(T3,OPFOR,Army_Combat);
            @Groups(T3,OPFOR,Army_Garrison);
            @Groups(T3,OPFOR,Army_Recon);
            @Groups(T3,OPFOR,Special_Forces);
        };
    };
};
