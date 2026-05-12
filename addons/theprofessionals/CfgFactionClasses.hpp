class CfgFactionClasses {
    @ForSides(INDEP,OPFOR)
    class CLASS($LOWER) {
        SCOPE_DLC;
        displayName = "The Professionals";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
