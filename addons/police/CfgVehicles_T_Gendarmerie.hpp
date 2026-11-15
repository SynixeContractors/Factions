class CLASS2(SIDE,Gendarme): CLASS2(SIDE,Policeman) {
    @Role(Pistol);
    editorSubcategory = QCLASS2(NATION,Gendarmerie);
    faction = FACTION_GEND;
    @Headgear({
        "H_PASGT_basic_blue_F": 1,
    });
    @Vests({
        "variants": {
            "V_TacVest_gen_F": 2,
            "V_TacVest_gen_holster_RF": 3,
            "Atlas_V_OCarrierRig_Lite_alt_blk_F": 1,
        },
        "packs": [
            "t3_standard",
        ],
    });
};
class CLASS2(SIDE,GendarmeSMG): CLASS2(SIDE,Gendarme) {
    @Role(SMG);
    #include "weapons\smg.hpp"
};
class CLASS2(SIDE,GendarmeCrewman): CLASS2(SIDE,Gendarme) {
    @Role(Crewman);
    #include "weapons\smg.hpp"
    @Headgear({
        "lxWS_H_HelmetCrew_Blue": 1,
    });
};

class CLASS2(SIDE,GendarmeRifle): CLASS2(SIDE,Gendarme) {
    @Role(Rifleman);
    #include "weapons\rifle.hpp"
};
class CLASS2(SIDE,GendarmeBreacher): CLASS2(SIDE,Gendarme) {
    @Role(Breacher);
    #include "weapons\shotgun.hpp"
};
class CLASS2(SIDE,GendarmeSniper): CLASS2(SIDE,Gendarme) {
    @Role(Sniper);
    @Primary({
        "weapons": {
            "srifle_h6_blk_rf": {
                "probability": 1,
                "magazinesVest": {
                    "10Rnd_556x45_AP_Stanag_green_RF": 8,
                },
            },
        },
        "optics": {
            "optic_DMS": 1,
        },
    });
};

#define TEMPLATE_CAMO Gendarmerie

class CLASS2(SIDE,Offroad): GCLASS(Offroad_Lights) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Covered): GCLASS(Offroad_Covered_Lights) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Comms): GCLASS(Offroad_Comms) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Van_Transport): GCLASS(Van_Transport_Lights) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Van_Cargo): GCLASS(Van_Cargo_Lights) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram): CLASS(Ram) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Covered): GCLASS(Ram_Covered_Lights) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Bars_Covered): GCLASS(Ram_Bars_Covered) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Bars): GCLASS(Ram_Bars) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Comms): GCLASS(Ram_Comms) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Otokar): GCLASS(Otokar) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,GendarmeCrewman);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Otokar_HMG): GCLASS(Otokar_HMG) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,GendarmeCrewman);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Otokar_RCWS): GCLASS(Otokar_RCWS) {
    SCOPE_DLC;
    faction = FACTION_GEND;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,GendarmeCrewman);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};

#undef TEMPLATE_CAMO
