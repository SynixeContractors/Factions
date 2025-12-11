class GCLASS(RHIB);
class CLASS(RHIB): GCLASS(RHIB) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Black",1};
    hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Boat_Transport_02_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};