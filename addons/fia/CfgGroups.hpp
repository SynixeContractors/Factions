class CfgGroups {
    class EAST {
        class CLASS(t4_opfor) {
            name = "[T4] Freedom Independence Army";
            @Groups(T4,OPFOR,Army_Combat_OPFOR);
        };
    };
    class INDEP {
        class CLASS(t4_indep) {
            name = "[T4] Freedom Independence Army";
            @Groups(T4,INDEP,Army_Combat_INDEP);
        };
    };
    class WEST {
        class CLASS(t4_blufor) {
            name = "[T4] Freedom Independence Army";
            @Groups(T4,BLUFOR,Army_Combat_INDEP);
        };
    };
};
