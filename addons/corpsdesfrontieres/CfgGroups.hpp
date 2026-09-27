class CfgGroups {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class $GROUP {
        class CLASS(DOUBLES(t4,$LOWER)) {
            name = "[T4] Corps des Frontieres";
            @Groups(T4,Militia_$UPPER);
        };
    };
    @EndForSides
};
