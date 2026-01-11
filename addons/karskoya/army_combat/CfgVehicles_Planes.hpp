class GCLASS(JAS39);
class CLASS(JAS39): GCLASS(JAS39) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"CamoGrey",1};
    hiddenSelectionsTextures[] = {
            "a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_co.paa",
            "a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_co.paa",
            "a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
        };
    crew = QCLASS(FighterPilot);
    typicalCargo[] = {QCLASS(FighterPilot)};
};

class GCLASS(C130);
class CLASS(C130): GCLASS(C130) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"GenOlive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Transport_01_infantry_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot)};
};

class GCLASS(Shahpar);
class CLASS(Shahpar): GCLASS(Shahpar) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"BAF",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_02_dynamicLoadout_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\UAV_02\Data\UAV_02_CO.paa"};
    crew = QCLASS(Hidden);
    typicalCargo[] = {QCLASS(Hidden)};
};
