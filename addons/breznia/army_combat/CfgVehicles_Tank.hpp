class GCLASS(Leopard2);
class CLASS(Leopard2): GCLASS(Leopard2) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive_01_green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MBT_03_cannon_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(T100);
class CLASS(T100): GCLASS(T100) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MBT_03_cannon_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};
