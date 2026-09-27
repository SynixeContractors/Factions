class CfgFactionClasses {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class CLASS(t4_$LOWER) {
        SCOPE_DLC;
        displayName = "[T4] Corps des Frontieres";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
