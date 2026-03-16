#define DRONE(var1,var2,var3,var4) \
class CLASS2(var1,var3): GCLASS(var1) { \
    side = var4; \
    faction = QCLASS(var3); \
    editorSubcategory = QCLASS(var2); \
}


class CfgVehicles {
    class GCLASS(AL6);
    class GCLASS(AL6_Medical);
    class GCLASS(AP5);
    class GCLASS(AP5_Bomber);
    class GCLASS(AR2);
    class GCLASS(RC40_HE);
    class GCLASS(RC40_Scout);

    class GCLASS(CH3A);
    class GCLASS(MQ47);
    class GCLASS(MQ9);
    class GCLASS(Shahpar);

    class GCLASS(MQ12);

    class GCLASS(Radar01);
    class GCLASS(Radar02);
    class GCLASS(SAM01);
    class GCLASS(SAM02);
    class GCLASS(Ship_BoxARH);
    class GCLASS(Ship_BoxIR);
    class GCLASS(Ship_CIWS);

    class GCLASS(Ship_Gun);
    class GCLASS(Ship_VLS);
    class GCLASS(AMOS);

    class GCLASS(UGV);
    class GCLASS(UGV_RCWS);


    @ForSides(OPFOR,BLUFOR,INDEP,CIV)
        DRONE(AL6,drone,$LOWER,$SIDE);
        DRONE(AL6_Medical,drone,$LOWER,$SIDE);
        DRONE(AP5,drone,$LOWER,$SIDE);
        DRONE(AP5_Bomber,drone,$LOWER,$SIDE);
        DRONE(AR2,drone,$LOWER,$SIDE);
        DRONE(RC40_HE,drone,$LOWER,$SIDE);
        DRONE(RC40_Scout,drone,$LOWER,$SIDE);

        DRONE(CH3A,plane,$LOWER,$SIDE);
        DRONE(MQ47,plane,$LOWER,$SIDE);
        DRONE(MQ9,plane,$LOWER,$SIDE);
        DRONE(Shahpar,plane,$LOWER,$SIDE);

        DRONE(MQ12,helicopter,$LOWER,$SIDE);

        DRONE(Radar01,antiair,$LOWER,$SIDE);
        DRONE(Radar02,antiair,$LOWER,$SIDE);
        DRONE(SAM01,antiair,$LOWER,$SIDE);
        DRONE(SAM02,antiair,$LOWER,$SIDE);
        DRONE(Ship_BoxARH,antiair,$LOWER,$SIDE);
        DRONE(Ship_BoxIR,antiair,$LOWER,$SIDE);
        DRONE(Ship_CIWS,antiair,$LOWER,$SIDE);

        DRONE(Ship_Gun,artillery,$LOWER,$SIDE);
        DRONE(Ship_VLS,artillery,$LOWER,$SIDE);
        DRONE(AMOS,artillery,$LOWER,$SIDE);

        DRONE(UGV,ground,$LOWER,$SIDE);
        DRONE(UGV_RCWS,ground,$LOWER,$SIDE);
    @EndForSides
};
