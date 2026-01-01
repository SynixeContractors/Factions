class GCLASS(Otokar_HMG);
class GCLASS(Otokar);
class GCLASS(Otokar_RCWS);
class CLASS(Otokar_HMG): GCLASS(Otokar_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    //FIXME: needs green camo editor picture
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Rifleman)};
};

class CLASS(Otokar): GCLASS(Otokar) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    //FIXME: needs green camo editor picture
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
};
class CLASS(Otokar_RCWS): GCLASS(Otokar_RCWS) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    //FIXME: needs green camo editor picture
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_T_APC_Wheeled_02_hmg_lxWS.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
};
