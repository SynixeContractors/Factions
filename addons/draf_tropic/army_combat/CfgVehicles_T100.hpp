class GCLASS(T100);
class CLASS(T100): GCLASS(T100) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"GreenHex",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_MBT_02_cannon_ghex_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};
