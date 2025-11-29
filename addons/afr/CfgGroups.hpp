class CfgGroups {
    class INDEP {
        class CLASS(t3_indep) {
            name = "[T3] Armed Forces of Rajarta";
            @Groups(T3,INDEP,Army_Combat);
            @Groups(T3,INDEP,Army_Garrison);
            @Groups(T2,INDEP,Army_Recon);
        };
    };
};
