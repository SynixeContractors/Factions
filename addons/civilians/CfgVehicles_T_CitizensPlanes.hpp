class CLASS2(CessnaTTx,NATION): GCLASS(CessnaTTx) {
    SCOPE_DLC;
    faction = QCLASS(NATION);
    textureList[] = {"Civilian",1};
    crew = QUOTE(CLASS2(Citizen_PilotPlane,NATION));
    typicalCargo[] = {QUOTE(CLASS2(Citizen_PilotPlane,NATION))};
};

class CLASS2(CessnaTTxRacing,NATION): GCLASS(CessnaTTxRacing) {
    SCOPE_DLC;
    faction = QCLASS(NATION);
    textureList[] = {"Racing",1};
    crew = QUOTE(CLASS2(Citizen_PilotPlane,NATION));
    typicalCargo[] = {QUOTE(CLASS2(Citizen_PilotPlane,NATION))};
};
