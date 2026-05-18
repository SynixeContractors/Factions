class CfgFactionClasses {
    @ForSides(INDEP,OPFOR)
    class CLASS($LOWER) {
        SCOPE_DLC;
        displayName = "[T4] The Professionals";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
