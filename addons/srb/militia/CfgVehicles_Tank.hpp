class CLASS2(SIDE,T100): GCLASS(T100) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
                        "SFIA",1,
                        "Ardistan",1
                    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_APC_Wheeled_04_export_F.jpg";
    crew = QCLASS2(SIDE,Crewman);
    typicalCargo[] = {QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman), QCLASS2(SIDE,Crewman)};
};
