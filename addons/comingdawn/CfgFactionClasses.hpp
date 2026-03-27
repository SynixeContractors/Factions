class CfgFactionClasses {
    @ForSides(OPFOR,INDEP)
    class CLASS(t4_$LOWER) {
        SCOPE_DLC;
        displayName = "[T4] Sons of the Coming Dawn";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
