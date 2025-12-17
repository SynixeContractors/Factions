class GCLASS(Otokar);
class CLASS(Otokar): GCLASS(Otokar) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_T_APC_Wheeled_02_unarmed_lxWS.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Otokar_HMG);
class CLASS(Otokar_HMG): GCLASS(Otokar_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_T_APC_Wheeled_02_hmg_lxWS.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Otokar_RCWS);
class CLASS(Otokar_RCWS): GCLASS(Otokar_RCWS) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_APC_Wheeled_02_rcws_v2_ghex_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};
