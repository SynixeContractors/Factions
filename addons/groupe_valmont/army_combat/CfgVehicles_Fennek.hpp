class CLASS2(SIDE,Fennek): GCLASS(Fennek) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Olive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_tna_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman), QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Fennek_HMG): GCLASS(Fennek_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Olive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_hmg_tna_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman), QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Fennek_GMG): GCLASS(Fennek_GMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Olive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_gmg_tna_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman), QCLASS2(SIDE,Rifleman)};
};
