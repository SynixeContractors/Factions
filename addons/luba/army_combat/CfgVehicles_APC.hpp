#define LUBA_CAR_SAND SCOPE_DLC; \
    faction = QPCLASS(t3_indep); \
    side = 2; \
    textureList[] = {"Guerrilla_04", 1};

class GCLASS(BTR);
class CLASS(BTR): GCLASS(BTR) {
    LUBA_CAR_SAND
    crew = QCLASS(Crewman);
};
class GCLASS(BTR_IFV);
class CLASS(BTR_IFV): GCLASS(BTR_IFV) {
    LUBA_CAR_SAND
    crew = QCLASS(Crewman);
};
