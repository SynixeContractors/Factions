class GCLASS(T100);
class CLASS(T100): GCLASS(T100) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_MBT_02_cannon_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};
