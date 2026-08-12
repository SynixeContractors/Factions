class CfgFactionClasses {
    @ForSides(BLUFOR,INDEP,OPFOR)
    class CLASS($LOWER) {
        SCOPE_DLC;
        displayName = "[T4] Looters";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
