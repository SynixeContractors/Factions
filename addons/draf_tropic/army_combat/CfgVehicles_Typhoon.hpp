class GCLASS(TyphoonBench);
class CLASS(TyphoonBench): GCLASS(TyphoonBench) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"GreenHex",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_transport_ghex_F.jpg";    
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(TyphoonCovered);
class CLASS(TyphoonCovered): GCLASS(TyphoonCovered) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"GreenHex",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_covered_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(TyphoonFuel);
class CLASS(TyphoonFuel): GCLASS(TyphoonFuel) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"GreenHex",1};
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_fuel_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(TyphoonAmmo);
class CLASS(TyphoonAmmo): GCLASS(TyphoonAmmo) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"GreenHex",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Truck_03_ammo_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(TyphoonRepair);
class CLASS(TyphoonRepair): GCLASS(TyphoonRepair) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"GreenHex",1};
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_repair_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(TyphoonMedical);
class CLASS(TyphoonMedical): GCLASS(TyphoonMedical) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"GreenHex",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_medical_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(TyphoonFlatbed);
class CLASS(TyphoonFlatbed): GCLASS(TyphoonFlatbed) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"GreenHex",1};
    editorPreview = "\lxrf\editorpreviews_rf\Data\CfgVehicles\O_T_Truck_03_cargo_RF.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
