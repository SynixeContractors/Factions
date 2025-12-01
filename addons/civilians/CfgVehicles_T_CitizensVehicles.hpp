class CLASS(Motorboat)_##NATION: GCLASS(Motorboat) {
    SCOPE_DLC;
    faction = QCLASS(NATION);
    textureList[] = {"Civilian",1};
    crew = QUOTE(CLASS(Citizen)_##NATION);
    typicalCargo[] = {QUOTE(CLASS(Citizen)_##NATION)};
};
