class CLASS2(CessnaTTx,NATION): GCLASS(CessnaTTx) {
    SCOPE_DLC;
    faction = QCLASS(NATION);
    crew = QUOTE(CLASS2(Citizen_PilotPlane,NATION));
    typicalCargo[] = {QUOTE(CLASS2(Citizen_PilotPlane,NATION))};
};

class CLASS2(CessnaTTx_Racing,NATION): GCLASS(CessnaTTx_Racing) {
    SCOPE_DLC;
    faction = QCLASS(NATION);
    crew = QUOTE(CLASS2(Citizen_PilotPlane,NATION));
    typicalCargo[] = {QUOTE(CLASS2(Citizen_PilotPlane,NATION))};
};
