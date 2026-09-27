class CfgGroups {
    class INDEP {
        class CLASS(t2_indep) {
            name = "[T2] Groupe Valmont";
            @Groups(T2,Army_Combat_INDEP);
            @Groups(T2,Army_Garrison_INDEP);
            @Groups(T2,Special_Forces_INDEP);
        };
    };
    class EAST {
        class CLASS(t2_opfor) {
            name = "[T2] Groupe Valmont";
            @Groups(T2,Army_Combat_OPFOR);
            @Groups(T2,Army_Garrison_OPFOR);
            @Groups(T2,Special_Forces_OPFOR);
        };
    };
};
