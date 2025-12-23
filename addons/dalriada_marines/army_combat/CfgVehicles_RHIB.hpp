class GCLASS(RHIB);
class CLASS(RHIB): GCLASS(RHIB) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"Black",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Boat_Transport_02_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
