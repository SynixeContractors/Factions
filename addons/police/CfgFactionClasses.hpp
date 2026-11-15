class CfgFactionClasses {
    @ForSides(BLUFOR,INDEP,OPFOR,CIV)
    class CLASS($LOWER) {
        SCOPE_DLC;
        displayName = "[C] Police";
        priority = 1;
        side = $SIDE;
    };
    class CLASS2($LOWER,Gendarmerie) {
        SCOPE_DLC;
        displayName = "[T4] Gendarmerie";
        priority = 1;
        side = $SIDE;
    };
    @EndForSides
};
