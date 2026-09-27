class CfgGroups {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class $GROUP {
        class CLASS(DOUBLES(t4,$LOWER)) {
            name = "[T4] Freedom Independence Army";
            @Groups(T4,Army_Combat_$UPPER);
            @Groups(T4,Militia_$UPPER);
        };
    };
    @EndForSides
};
