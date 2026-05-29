class CfgGroups {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class $GROUP {
        class CLASS(DOUBLES(t4,$LOWER)) {
            name = "[T4] The Covenant";
            @For(Identities)
                @Groups(T4,Army_Combat_$1_$UPPER);
            @EndFor
        };
    };
    @EndForSides
};
