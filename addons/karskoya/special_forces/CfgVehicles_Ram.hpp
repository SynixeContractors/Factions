class GCLASS(Ram_M134);
class CLASS(Ram_M134): GCLASS(Ram_M134) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"NATO_P",1};
    // editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_E_Pickup_Minigun_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Ram_RCWS);
class CLASS(Ram_RCWS): GCLASS(Ram_RCWS) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"NATO_P",1};
    animationList[] = {"hide_bullbar",0,"hide_snorkel",1,"hide_trunk_door",0,"hide_sidesteps",0,"hide_frame",0,"hide_frame_full",0,"hide_frame_full_panel",0,"hide_armor_window_armor_top",0};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
