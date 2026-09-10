class CfgFactionClasses {
    @ForSides(BLUFOR,INDEP,OPFOR,CIV)
    class CLASS($LOWER) {
        SCOPE_DLC;
        displayName = "[T4] Police";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
