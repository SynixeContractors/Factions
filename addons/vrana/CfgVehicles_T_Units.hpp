class CLASS2(NATION,OfficeWorker): CLASS2(Base,NATION) {
    SCOPE_DLC;
    displayName = "Office Worker";

    @Uniforms({
        "variants": {
            "casual_polo_red_black_uniform": 3,
            "casual_polo_red_gray_uniform": 3,
            "casual_polo_red_khaki_uniform": 2,
            "casual_polo_red_denim_uniform": 1,
        },
    });

    @Facewear({
        "": 2,
        "G_Glasses_white_RF": 0.5,
        "G_Glasses_black_RF": 0.5,
        "G_Glasses_brown_RF": 0.5,
        "G_WirelessEarpiece_F": 0.1,
    });
};

class CLASS2(NATION,Pilot): CLASS2(NATION,OfficeWorker) {
    SCOPE_DLC;
    displayName = "Pilot (Helicopter)";

    @Headgear({
        "H_Cap_headphones_blk": 1,
        "H_Cap_marshal_blue_RF": 1,
        "H_Cap_headphones_gry": 1,
        "H_Cap_marshal": 1,
        "H_HeadSet_black_F": 1,
        "H_HeadSet_olive_F": 1,
        "H_HeadSet_orange_F": 1,
        "H_HeadSet_red_F": 1,
        "H_HeadSet_sand_F": 1,
        "H_HeadSet_white_F": 1,
        "H_HeadSet_yellow_F": 1,
    });
};

class CLASS2(NATION,SiteSupervisor): CLASS2(NATION,OfficeWorker) {
    SCOPE_DLC;
    displayName = "Construction (Supervisor)";

    @Headgear({
        "H_Construction_earprot_vrana_F": 0.45,
        "H_Construction_headset_vrana_F": 0.45,
        "H_Construction_basic_vrana_F": 0.1,
    });

    @Facewear({
        "": 1,
        "G_EyeProtectors_F": 2,
        "G_EyeProtectors_Earpiece_F": 1
    });
};

class CLASS2(NATION,SiteConstruction): CLASS2(Base,NATION) {
    SCOPE_DLC;
    displayName = "Construction";

    @Uniforms({
        "variants": {
            "U_C_ConstructionCoverall_Vrana_F": 1,
        },
    });

    @Facewear({
        "": 1,
        "G_EyeProtectors_F": 2,
    });

    @Headgear({
        "H_Construction_earprot_vrana_F": 0.8,
        "H_Construction_basic_vrana_F": 0.2,
    });
};

class CLASS2(NATION,OfficeWorkerBackpack): CLASS2(NATION,OfficeWorker) {
    SCOPE_DLC;
    displayName = "Office Worker (Backpack)";
    @Backpacks({
        "variants": {
            "B_CivilianBackpack_01_Everyday_Vrana_F": 1,
        }
    });
};
class CLASS2(NATION,ConstructionBackpack): CLASS2(NATION,SiteConstruction) {
    SCOPE_DLC;
    displayName = "Construction (Backpack)";
    @Backpacks({
        "variants": {
            "B_CivilianBackpack_01_Everyday_Vrana_F": 1,
        }
    });
};
class CLASS2(NATION,SiteSupervisorBackpack): CLASS2(NATION,SiteSupervisor) {
    SCOPE_DLC;
    displayName = "Construction (Supervisor, Backpack)";
    @Backpacks({
        "variants": {
            "B_CivilianBackpack_01_Everyday_Vrana_F": 1,
        }
    });
};

class CLASS2(NATION,OfficeWorkerDuffelBag): CLASS2(NATION,OfficeWorker) {
    SCOPE_DLC;
    displayName = "Office Worker (Duffel Bag)";
    @Backpacks({
        "variants": {
            "B_DuffleBag_VRANA_RF": 1,
        }
    });
};
class CLASS2(NATION,ConstructionDuffelBag): CLASS2(NATION,SiteConstruction) {
    SCOPE_DLC;
    displayName = "Construction (Duffel Bag)";
    @Backpacks({
        "variants": {
            "B_DuffleBag_VRANA_RF": 1,
        }
    });
};
class CLASS2(NATION,SiteSupervisorDuffelBag): CLASS2(NATION,SiteSupervisor) {
    SCOPE_DLC;
    displayName = "Construction (Supervisor, Duffel Bag)";
    @Backpacks({
        "variants": {
            "B_DuffleBag_VRANA_RF": 1,
        }
    });
};
