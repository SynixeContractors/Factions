class GCLASS(OtokarUnarmed);
class CLASS(OtokarUnarmed): GCLASS(OtokarUnarmed) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"MarineHex",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_T_APC_Wheeled_02_unarmed_lxWS.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
};

class GCLASS(OtokarHMG);
class CLASS(OtokarHMG): GCLASS(OtokarHMG) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"MarineHex",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_T_APC_Wheeled_02_hmg_lxWS.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};
