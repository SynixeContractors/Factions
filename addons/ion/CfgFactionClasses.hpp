class CfgFactionClasses {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class CLASS(t3_$LOWER) {
        SCOPE_DLC;
        displayName = "[T3] ION Services";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
