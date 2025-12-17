class GCLASS(Otokar_HMG);
class GCLASS(Otokar);
class GCLASS(Otokar_RCWS);
class CLASS(Otokar_HMG): GCLASS(Otokar_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"};
    //FIXME: needs green camo editor picture
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Rifleman)};
};

class CLASS(Otokar): GCLASS(Otokar) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"};
    //FIXME: needs green camo editor picture
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
};
class CLASS(Otokar_RCWS): GCLASS(Otokar_RCWS) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"};
    //FIXME: needs green camo editor picture
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_T_APC_Wheeled_02_hmg_lxWS.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
};
