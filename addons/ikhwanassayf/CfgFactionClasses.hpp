class CfgFactionClasses {
    @ForSides(OPFOR,INDEP)
    class CLASS(t4_$LOWER) {
        SCOPE_DLC;
        displayName = "[T4] Ikhwan as-Sayf";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
