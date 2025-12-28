class O_T_UAV_04_CAS_F;
class GCLASS(UAV04): O_T_UAV_04_CAS_F {
    //this uav doesnt have dynamic loadouts and ace pylons
    displayName = "CH-3B";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
};
