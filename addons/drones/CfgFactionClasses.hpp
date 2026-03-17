class CfgFactionClasses {
    @ForSides(BLUFOR,INDEP,OPFOR,CIV)
    class CLASS($LOWER) {
        SCOPE_DLC;
        displayName = "Remote Controlled";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
