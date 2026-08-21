class CLASS2(SIDE,BTR): GCLASS(BTR) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
                        "Sand",1,
                        "SFIA",1,
                        "Guerilla_01",1,
                        "Guerilla_02",1,
                        "Guerilla_03",1,
                        "Guerilla_04",1,
                        "ardistan",1,
                        "Para_01",1
                    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_APC_Wheeled_04_export_F.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman)};
};

class CLASS2(SIDE,BTR_IFV): GCLASS(BTR_IFV) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
                        "Sand",1,
                        "SFIA",1,
                        "Guerilla_02",1,
                        "Guerilla_04",1,
                        "Guerilla_05",1,
                        "ardistan",1
                    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Wheeled_04_cannon_F.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman)};
};

class CLASS2(SIDE,BM2_IFV1): GCLASS(BM2_IFV1) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
                        "Sand",1,
                        "SFIA",1,
                    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_APC_Tracked_02_cannon_F.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman)};
};

class CLASS2(SIDE,BM2_IFV2): GCLASS(BM2_IFV2) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
                        "Sand",1,
                        "SFIA",1,
                    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_APC_Tracked_02_30mm_lxWS.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman)};
};
