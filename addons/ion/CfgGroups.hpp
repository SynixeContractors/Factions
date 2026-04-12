class CfgGroups {
    class INDEP {
        class CLASS(t3_indep) {
            name = "[T3] ION Services";
            @Groups(T3,INDEP,Army_Combat_INDEP);
            @Groups(T3,INDEP,Army_Garrison_INDEP);
        };
    };
    class EAST {
        class CLASS(t3_opfor) {
            name = "[T3] ION Services";
            @Groups(T3,OPFOR,Army_Combat_OPFOR);
            @Groups(T3,OPFOR,Army_Garrison_OPFOR);
        };
    };
    class WEST {
        class CLASS(t3_blufor) {
            name = "[T3] ION Services";
            @Groups(T3,BLUFOR,Army_Combat_BLUFOR);
            @Groups(T3,BLUFOR,Army_Garrison_BLUFOR);
        };
    };
};
