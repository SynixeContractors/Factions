class CfgFactionClasses {
    @ForSides(OPFOR,INDEP,BLUFOR)
    class CLASS(t4_$LOWER) {
        SCOPE_DLC;
        displayName = "[T4] Disenfranchised Young Men";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
