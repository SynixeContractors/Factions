class CfgFactionClasses {
    @ForSides(BLUFOR,INDEP,OPFOR)
    class CLASS($LOWER) {
        SCOPE_DLC;
        displayName = "[T4] The Covenant";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
