class CfgFactionClasses {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class CLASS(t4_$LOWER) {
        SCOPE_DLC;
        displayName = "[T4] Freedom Independence Army";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
