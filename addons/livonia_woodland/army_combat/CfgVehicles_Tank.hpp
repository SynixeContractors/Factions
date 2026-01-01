class GCLASS(Leopard2);
class CLASS(Leopard2): GCLASS(Leopard2) {
    displayName = "Leopard 2LV";
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_MBT_03_cannon_F.jpg";
    textureList[] = {"EAF_01", 1, "EAF_01_desert", 1, "EAF_Arid", 1, "EAF_Arid_jungle", 1};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};
