class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(CIV): GCLASS(Base_CIV) {
        faction = QGCLASS(daltgreen);
        @Templated();
    };

    @For(Identities)
    @Vehicles({
        "faction": "QGCLASS(Daltgreen)",
        "camo": "Daltgreen",
        "crew": "Worker",
        "suffix": "$1",
        "properties": {"editorSubcategory": "QGCLASS(generics_cars_$1)"},
        "vehicles": [
            "Van_Cargo",
            "Van_Transport",
            "Ram",
            "LUT_Transport",
            "LUT_TransportCovered",
            "LUT_Repair",
            "LUT_Medical",
            "LUT_Fuel",
            "LUT_Cargo",
            "LUT_Flatbed",
        ],
    });
    class CLASS(Base_$1): CLASS(CIV) {
        @Identity($1);
        editorSubcategory = QGCLASS(generics_$1);
    };
    class CLASS(Worker_$1): CLASS(Base_$1) {
        SCOPE_DLC;
        displayName = "Office Worker";
        @Uniforms({
            "variants": {
                "casual_polo_blue_black_uniform": 1,
                "casual_polo_brown_black_uniform": 1,
                "casual_polo_navy_black_uniform": 1,
                "casual_polo_white_black_uniform": 1,
                "tacs_Uniform_Plaid_JP_GY_BP_BB": 1,
                "casual_polo_red_black_uniform": 1,
            }
        });
        @Headgear({
            "": 0.95,
            "synixe_mgp_h_cap_gry": 0.05,
        });
    };
    class CLASS(Labourer_$1): CLASS(Base_$1) {
        SCOPE_DLC;
        displayName = "Labourer";
        @Uniforms({
            "variants": {
                "U_C_ConstructionCoverall_Black_F": 1,
                "U_C_ConstructionCoverall_Red_F": 1,
                "U_C_WorkerCoveralls": 1,
                "U_C_WorkerCoveralls_black": 1,
                "U_C_WorkerCoveralls_grey": 1,
                "U_C_WorkerCoveralls_orange": 1,
            }
        });
        @Headgear({
            "H_Bandanna_sand": 1,
            "H_Bandanna_sgg": 1,
            "H_Bandanna_surfer_grn": 1,
            "H_Bandanna_tna_F": 1,
            "H_Cap_blk": 1,
            "H_Cap_grn": 1,
            "H_Cap_oli": 1,
            "H_Cap_red": 1,
            "H_Construction_basic_orange_F": 1,
            "H_Construction_basic_red_F": 1,
            "H_Construction_basic_white_F": 1,
            "H_Construction_earprot_red_F": 1,
            "H_Construction_earprot_white_F": 1,
            "H_Construction_earprot_yellow_F": 1,
            "synixe_mgp_h_cap_gry_backwards": 1,
            "H_Cap_blu": 1,
            "U_C_WorkerCoveralls_orange": 1,
            "": 0.6,
        });
    };
    @EndFor
};
