class CfgVehicles {
    @ForSides(OPFOR,BLUFOR,INDEP,CIV)
        @Vehicles({
            "faction": "$LOWER",
            "side": $SIDE,
            "suffix": "$LOWER",
            "properties": {"editorSubcategory": "QCLASS(drone)"},
            "vehicles": [
                "AL6",
                "AL6_Medical",
                "AP5",
                "AP5_Bomber",
                "AR2",
                "RC40_HE",
                "RC40_Scout",
            ],
        });

        @Vehicles({
            "faction": "$LOWER",
            "side": $SIDE,
            "suffix": "$LOWER",
            "properties": {"editorSubcategory": "QCLASS(plane)"},
            "vehicles": [
                "CH3A",
                "MQ47",
                "MQ9",
                "Shahpar",
            ],
        });

        @Vehicles({
            "faction": "$LOWER",
            "side": $SIDE,
            "suffix": "$LOWER",
            "properties": {"editorSubcategory": "QCLASS(helicopter)"},
            "vehicles": [
                "MQ12",
            ],
        });

        @Vehicles({
            "faction": "$LOWER",
            "side": $SIDE,
            "suffix": "$LOWER",
            "properties": {"editorSubcategory": "QCLASS(antiair)"},
            "vehicles": [
                "Radar01",
                "Radar02",
                "SAM01",
                "SAM02",
                "Ship_BoxARH",
                "Ship_BoxIR",
                "Ship_CIWS",
            ],
        });

        @Vehicles({
            "faction": "$LOWER",
            "side": $SIDE,
            "suffix": "$LOWER",
            "properties": {"editorSubcategory": "QCLASS(artillery)"},
            "vehicles": [
                "Ship_Gun",
                "Ship_VLS",
                "AMOS",
            ],
        });

        @Vehicles({
            "faction": "$LOWER",
            "side": $SIDE,
            "suffix": "$LOWER",
            "properties": {"editorSubcategory": "QCLASS(ground)"},
            "vehicles": [
                "UGV",
                "UGV_RCWS",
            ],
        });
    @EndForSides
};
