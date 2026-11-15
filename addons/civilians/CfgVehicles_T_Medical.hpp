class CLASS2(Citizen_Paramedic,NATION): CLASS2(Base,NATION) {
    SCOPE_DLC;
    displayName = "Paramedic";
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Man_Paramedic_01_F.jpg";
    attendant = 1;
    icon = "iconManMedic";
    role = "Combat Life Saver";

    @Uniforms({
        "variants": {
            "U_C_Paramedic_01_F": 1,
        },
    });
    @Facewear({
        "G_Respirator_white_F": 1,
        "G_Respirator_blue_F": 1,
        "G_Respirator_yellow_F": 1,
        "": 1,
    });
    @Backpacks({
        "variants": {
            "B_Messenger_Gray_F" : 1,
        },
        "packs": [
            "t4_medic",
        ],
    });
};

class CLASS2(Van_Ambulance,NATION): GCLASS(Van_Ambulance) {
    SCOPE_DLC;
    faction = QCLASS(NATION);
    crew = QUOTE(CLASS2(Citizen_Paramedic,NATION));
    typicalCargo[] = {QUOTE(CLASS2(Citizen_Paramedic,NATION))};
};
