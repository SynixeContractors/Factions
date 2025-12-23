class GCLASS(Base_CIV);
class CLASS(Base): GCLASS(Base_CIV) {
    faction = QCLASS(civilian);
    displayName = "IDAP Base Unit";
    @Templated();
    @Assigned(Civilian);
};

class CLASS(AidWorker): CLASS(Base) {
    SCOPE_DLC;
    displayName = "Aid Worker";
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Man_AidWorker_04_F.jpg";

    @Uniforms({
        "variants": {
            "U_C_IDAP_Man_cargo_F": 1,
            "U_C_IDAP_Man_Jeans_F": 1,
            "U_C_IDAP_Man_Tee_F": 1,
            "U_C_IDAP_Man_TeeShorts_F": 1,
            "U_C_IDAP_Man_casual_F": 1,
            "U_C_IDAP_Man_shorts_F": 1,
        },
    });

    @Headgear({
        "": 0.55,
        "H_Cap_Black_IDAP_F": 0.15,
        "H_Cap_Orange_IDAP_F": 0.15,
        "H_Cap_White_IDAP_F": 0.15,
        "H_Cap_red": 0.05,
        "H_Cap_tan": 0.05,
    });
};

class CLASS(EOD): CLASS(Base) {
    SCOPE_DLC;
    displayName = "EOD Specialist";
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Man_EOD_01_F.jpg";
    canDeactivateMines = 1;

    @Uniforms({
        "variants": {
            "U_C_IDAP_Man_casual_F": 1,
        },
    });

    @Vests({
        "variants": {
            "V_EOD_IDAP_blue_F": 1,
        },
    });

    @Facewear({
        "G_EyeProtectors_F": 1,
    });

    @Headgear({
        "H_PASGT_basic_white_F": 2,
        "H_PASGT_basic_blue_F": 1,
    });

    @Backpacks({
        "variants": {
            "B_LegStrapBag_coyote_F": 2,
            "B_LegStrapBag_black_F": 1,
        },
        "packs": [
            "eod"
        ],
    });

    @Secondary({
        "weapons": {
            "ACE_VMH3": {},
        },
    });
};

class CLASS(Paramedic): CLASS(Base) {
    SCOPE_DLC;
    displayName = "Paramedic";
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Man_Paramedic_01_F.jpg";
    attendant = 1;

    @Uniforms({
        "variants": {
            "U_C_Paramedic_01_F": 1,
        },
    });

    @Facewear({
        "G_Respirator_blue_F": 3,
        "G_Respirator_white_F": 1,
        "G_Respirator_yellow_F": 1,
    });

    @Backpacks({
        "variants": {
            "B_Messenger_IDAP_F": 1,
        },
        "packs": [
            "t4_medic"
        ],
    });
};

class CLASS(Pilot): CLASS(Base) {
    SCOPE_DLC;
    displayName = "Pilot";
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Pilot_01_F.jpg";

    @Uniforms({
        "variants": {
            "U_C_IDAP_Man_cargo_F": 1,
            "U_C_IDAP_Man_Tee_F": 0.5,
        },
    });

    @Headgear({
        "H_HeadSet_orange_F": 1,
        "H_HeadSet_white_F": 0.5,
    });
};
