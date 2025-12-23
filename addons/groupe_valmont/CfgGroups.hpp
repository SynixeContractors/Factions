class CfgGroups {
    class INDEP {
        class CLASS(t2_indep) {
            name = "[T2] Groupe Valmont";
            @Groups(T2,INDEP,Army_Combat_INDEP);
            @Groups(T2,INDEP,Army_Garrison_INDEP);
            @Groups(T2,INDEP,Special_Forces_INDEP);
        };
    };
    class EAST {
        class CLASS(t2_opfor) {
            name = "[T2] Groupe Valmont";
            @Groups(T2,OPFOR,Army_Combat_OPFOR);
            @Groups(T2,OPFOR,Army_Garrison_OPFOR);
            @Groups(T2,OPFOR,Special_Forces_OPFOR);
        };
    };
};
