class GCLASS(Typhoon_Bench);
class CLASS(Typhoon_Bench): GCLASS(Typhoon_Bench) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_transport_ghex_F.jpg";    
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Typhoon_Covered);
class CLASS(Typhoon_Covered): GCLASS(Typhoon_Covered) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_covered_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Typhoon_Fuel);
class CLASS(Typhoon_Fuel): GCLASS(Typhoon_Fuel) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_CO.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_fuel_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Typhoon_Ammo);
class CLASS(Typhoon_Ammo): GCLASS(Typhoon_Ammo) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Truck_03_ammo_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Typhoon_Repair);
class CLASS(Typhoon_Repair): GCLASS(Typhoon_Repair) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa"};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_repair_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Typhoon_Medical);
class CLASS(Typhoon_Medical): GCLASS(Typhoon_Medical) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Truck_03_medical_ghex_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Typhoon_Cargo);
class CLASS(Typhoon_Cargo): GCLASS(Typhoon_Cargo) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\lxrf\editorpreviews_rf\Data\CfgVehicles\O_T_Truck_03_cargo_RF.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
