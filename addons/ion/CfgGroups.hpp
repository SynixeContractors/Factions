class CfgGroups {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class $GROUP {
        class CLASS(DOUBLES(t3,$LOWER)) {
            name = "[T3] ION Services";
            @Groups(T3,Army_Combat_$UPPER);
            @Groups(T3,Army_Garrison_$UPPER);
        };
    };
    @EndForSides
};
