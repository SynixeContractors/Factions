class GCLASS(Orca);
class CLASS(Orca): GCLASS(Orca) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_Heli_Light_02_unarmed_ard_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_raven_CO.paa"};
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot)};
};
