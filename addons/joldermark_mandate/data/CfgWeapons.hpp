class CfgWeapons {

/// Modular carriers

	class V_CarrierRigKBT_01_base_F;
	class CarrierRigKBT_01_IACB_CO: V_CarrierRigKBT_01_base_F {
		scope=2;
		displayName="Modular Carrier Vest (IACB)";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\icon_V_CarrierRigKBT_01_Black_F_CA.paa";
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\CarrierRigKBT_01_IACB_CO.paa"
		};
	};

	class CarrierRigKBT_01_SYNIXE_CO: V_CarrierRigKBT_01_base_F {
		scope=2;
		displayName="Modular Carrier Vest (Synixe)";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\icon_V_CarrierRigKBT_01_Black_F_CA.paa";
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\CarrierRigKBT_01_SYNIXE_CO.paa"
		};
	};

	class V_CarrierRigKBT_01_light_base_F;
	class CarrierRigKBT_01_SYNIXE_lite: V_CarrierRigKBT_01_light_base_F {
		scope=2;
		displayName="Modular Carrier Lite (Synixe)";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\icon_V_CarrierRigKBT_01_Black_F_CA.paa";
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\CarrierRigKBT_01_SYNIXE_CO.paa"
		};
	};

	class Aegis_V_CarrierRigKBT_01_cqb_base_F;
	class CarrierRigKBT_01_SYNIXE_cqb: Aegis_V_CarrierRigKBT_01_cqb_base_F {
		scope=2;
		displayName="Modular Carrier CQB Rig (Synixe)";
		picture="\A3_Aegis\characters_f_aegis\Vests\data\UI\Icon_CarrierRigKBT_01_cqb_black_F_CA.paa";
		model="\A3_Aegis\characters_f_aegis\Vests\V_CarrierKBT_01_cqb_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\CarrierRigKBT_01_SYNIXE_CO.paa"
		};
	};

	class Aegis_V_CarrierRigKBT_01_recon_base_F;
	class CarrierRigKBT_01_SYNIXE_recon: Aegis_V_CarrierRigKBT_01_recon_base_F {
		scope=2;
		displayName="Modular Carrier Recon Rig (Synixe)";
		picture="\A3_Aegis\characters_f_aegis\Vests\data\UI\Icon_CarrierRigKBT_01_recon_black_F_CA.paa";
		model="\A3_Aegis\characters_f_aegis\Vests\V_CarrierKBT_01_recon_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\CarrierRigKBT_01_SYNIXE_CO.paa"
		};
	};

/// MMAC

	class synixe_mgp_vest_mmac_light_base;
	class synixe_mgp_vest_mmac_light_synixe: synixe_mgp_vest_mmac_light_base {
		scope=2;
		displayName="MMAC Light (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_light_gry.paa";
		model="\milgp_vests\models\v_mmac_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};
	
	class synixe_mgp_vest_mmac_assaulter_base;
	class synixe_mgp_vest_mmac_assaulter_synixe: synixe_mgp_vest_mmac_assaulter_base {
		scope=2;
		displayName="MMAC Assaulter (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_assaulter_blk.paa";
		model="\milgp_vests\models\v_mmac_assaulter_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_assaulter_belt_base;
	class synixe_mgp_vest_mmac_assaulter_belt_synixe: synixe_mgp_vest_mmac_assaulter_belt_base {
		scope=2;
		displayName="MMAC Assaulter + Belt (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_assaulter_blk_belt.paa";
		model="\milgp_vests\models\v_mmac_assaulter_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_battle_belt_gry_co.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_grenadier_base;
	class synixe_mgp_vest_mmac_grenadier_synixe: synixe_mgp_vest_mmac_grenadier_base {
		scope=2;
		displayName="MMAC Grenadier (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_grenadier_gry.paa";
		model="\milgp_vests\models\v_mmac_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_grenadier_belt_base;
	class synixe_mgp_vest_mmac_grenadier_belt_synixe: synixe_mgp_vest_mmac_grenadier_belt_base {
		scope=2;
		displayName="MMAC Grenadier + Belt (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_grenadier_gry_belt.paa";
		model="\milgp_vests\models\v_mmac_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_battle_belt_gry_co.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_hgunner_base;
	class synixe_mgp_vest_mmac_hgunner_synixe: synixe_mgp_vest_mmac_hgunner_base {
		scope=2;
		displayName="MMAC Heavy Gunner (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_hgunner_gry.paa";
		model="\milgp_vests\models\v_mmac_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_hgunner_belt_base;
	class synixe_mgp_vest_mmac_hgunner_belt_synixe: synixe_mgp_vest_mmac_hgunner_belt_base {
		scope=2;
		displayName="MMAC Heavy Gunner + Belt (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_hgunner_gry_belt.paa";
		model="\milgp_vests\models\v_mmac_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_battle_belt_gry_co.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_marksman_base;
	class synixe_mgp_vest_mmac_marksman_synixe: synixe_mgp_vest_mmac_marksman_base {
		scope=2;
		displayName="MMAC Marksman (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_marksman_gry.paa";
		model="\milgp_vests\models\v_mmac_marksman_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_marksman_belt_base;
	class synixe_mgp_vest_mmac_marksman_belt_synixe: synixe_mgp_vest_mmac_marksman_belt_base {
		scope=2;
		displayName="MMAC Marksman + Belt (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_marksman_gry_belt.paa";
		model="\milgp_vests\models\v_mmac_marksman_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_battle_belt_gry_co.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_medic_base;
	class synixe_mgp_vest_mmac_medic_synixe: synixe_mgp_vest_mmac_medic_base {
		scope=2;
		displayName="MMAC Medic (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_medic_gry.paa";
		model="\milgp_vests\models\v_mmac_medic_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_medic_belt_base;
	class synixe_mgp_vest_mmac_medic_belt_synixe: synixe_mgp_vest_mmac_medic_belt_base {
		scope=2;
		displayName="MMAC Medic + Belt (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_medic_gry_belt.paa";
		model="\milgp_vests\models\v_mmac_medic_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_battle_belt_gry_co.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_teamleader_base;
	class synixe_mgp_vest_mmac_teamleader_synixe: synixe_mgp_vest_mmac_teamleader_base {
		scope=2;
		displayName="MMAC Team Leader (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_teamleader_gry.paa";
		model="\milgp_vests\models\v_mmac_teamleader_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

	class synixe_mgp_vest_mmac_teamleader_belt_base;
	class synixe_mgp_vest_mmac_teamleader_belt_synixe: synixe_mgp_vest_mmac_teamleader_belt_base {
		scope=2;
		displayName="MMAC Team Leader + Belt (Synixe)";
		picture="\s\synixe_mgp\addons\vests\icons\icon_v_mmac_teamleader_gry_belt.paa";
		model="\milgp_vests\models\v_mmac_teamleader_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\v_mmac_synixe.paa",
			"\milgp_vests\variants\v_battle_belt_gry_co.paa",
			"\milgp_vests\variants\v_gear_01_gry_co.paa",
			"\milgp_vests\textures\v_gear_02_co.paa"
		};
	};

/// Cap

	class synixe_mgp_h_cap_base;
	class synixe_mgp_h_cap_synixe: synixe_mgp_h_cap_base {
		scope=2;
		displayName="Cap (Grey, Synixe)";
		picture="\s\synixe_mgp\addons\headgear\icons\icon_h_cap_gry.paa";
		model="\milgp_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\h_cap_gry_synixe.paa",
			"\milgp_headgear\variants\h_gear_01_blk_co.paa"
		};
	};

	class synixe_mgp_h_cap_backwards_base;
	class synixe_mgp_h_cap_backwards_synixe: synixe_mgp_h_cap_backwards_base {
		scope=2;
		displayName="Cap (Grey, Backwards, Synixe)";
		picture="\s\synixe_mgp\addons\headgear\icons\icon_h_cap_gry.paa";
		model="\milgp_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\h_cap_gry_synixe.paa",
			"\milgp_headgear\variants\h_gear_01_blk_co.paa"
		};
	};

	class synixe_mgp_h_cap_earphones_base;
	class synixe_mgp_h_cap_earphones_synixe: synixe_mgp_h_cap_earphones_base {
		scope=2;
		displayName="Cap (Grey, Headphones, Synixe)";
		picture="\s\synixe_mgp\addons\headgear\icons\icon_h_cap_gry_earphones.paa";
		model="\milgp_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\h_cap_gry_synixe.paa",
			"\milgp_headgear\variants\h_gear_01_blk_co.paa"
		};
	};

	class synixe_mgp_h_cap_synixe_b: synixe_mgp_h_cap_base {
		scope=2;
		displayName="Cap (Black, Synixe)";
		picture="\s\synixe_mgp\addons\headgear\icons\icon_h_cap_gry.paa";
		model="\milgp_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\h_cap_blk_synixe.paa",
			"\milgp_headgear\variants\h_gear_01_blk_co.paa"
		};
	};

	class synixe_mgp_h_cap_backwards_synixe_b: synixe_mgp_h_cap_backwards_base {
		scope=2;
		displayName="Cap (Black, Backwards, Synixe)";
		picture="\s\synixe_mgp\addons\headgear\icons\icon_h_cap_gry.paa";
		model="\milgp_headgear\models\h_cap_backwards_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\h_cap_blk_synixe.paa",
			"\milgp_headgear\variants\h_gear_01_blk_co.paa"
		};
	};

	class synixe_mgp_h_cap_earphones_synixe_b: synixe_mgp_h_cap_earphones_base {
		scope=2;
		displayName="Cap (Black, Headphones, Synixe)";
		picture="\s\synixe_mgp\addons\headgear\icons\icon_h_cap_gry_earphones.paa";
		model="\milgp_headgear\models\h_cap_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"_ESS",
			"_Surefire",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\h_cap_blk_synixe.paa",
			"\milgp_headgear\variants\h_gear_01_blk_co.paa"
		};
	};

/// Police

	class V_DeckCrew_blue_F;
	class synixe_politie_vest: V_DeckCrew_blue_F {
		scope=2;
		displayName="Politie Vest";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\V_DeckCrew_Politie_CO.paa"
		};
	};	

	class H_ParadeDressCap_01_base_F;
	class synixe_politie_cap: H_ParadeDressCap_01_base_F {
		scope=2;
		displayName="Politie Cap";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\PoliceDressCap_co.paa"
		};
	};	

	class V_TacVest_khk;
	class synixe_politie_tacVest: V_TacVest_khk {
		scope=2;
		displayName="Politie Vest";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\V_TacVest_Politie_F_co.paa"
		};
	};	

	class V_TacVest_gen_holster_RF;
	class synixe_politie_tacVest_holster: V_TacVest_gen_holster_RF {
		scope=2;
		displayName="Politie Vest (Holster)";
		model="\lxRF\characters_rf\vests\equip_tacticalvest_holster_rf.p3d";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\V_TacVest_Politie_F_co.paa",
			"\lxrf\characters_rf\vests\data\vests_gen_co.paa"
		};
	};	

/// SFOR

	class V_PlateCarrier1_rgr_noflag_F;
	class synixe_PlateCarrier_sfor: V_PlateCarrier1_rgr_noflag_F {
		scope=2;
		displayName="Carrier Lite (SFOR)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\V_PlateCarrier1_sfor_F_co.paa"
		};
	};	

	class V_PlateCarrier2_rgr_noflag_F;
	class synixe_PlateCarrier2_sfor: V_PlateCarrier2_rgr_noflag_F {
		scope=2;
		displayName="Carrier Rig (SFOR)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\V_PlateCarrier2_sfor_F_co.paa"
		};
	};	

	class WSLV_Platecarrier_GRN_NF;
	class synixe_PlateCarrier3_sfor: WSLV_Platecarrier_GRN_NF {
		scope=2;
		displayName="Plate Carrier Rig (SFOR, No Holster)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\V_PlateCarrier3_sfor_F_co.paa"
		};
	};	

	class V_MU_PlateCarrier2_2_rgr;
	class synixe_PlateCarrier4_sfor: V_MU_PlateCarrier2_2_rgr {
		scope=2;
		displayName="Carrier Rig (SFOR, No Holster)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\V_PlateCarrier4_sfor_F_co.paa"
		};
	};	

	class V_PlateCarrierIA1_grn;
	class synixe_PlateCarrierIA1_sfor: V_PlateCarrierIA1_grn {
		scope=2;
		displayName="GA Carrier Lite (SFOR)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\equip_IA_Vest01_sfor_CO.paa"
		};
	};	

	class H_HelmetLuchnik_headset_grn_F;
	class synixe_HelmetLuchnik_green_sfor_F: H_HelmetLuchnik_headset_grn_F {
		scope=2;
		displayName="Luchnik Helmet (Olive, SFOR)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\H_HelmetEAST_grn_sfor.paa"
		};
	};	

	class synixe_HelmetLuchnik_green2_sfor_F: H_HelmetLuchnik_headset_grn_F {
		scope=2;
		displayName="Luchnik Helmet (Olive, SFOR)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\H_HelmetEAST_grn2_sfor.paa"
		};
	};	

	class H_HelmetLuchnik_headset_brn_F;
	class synixe_HelmetLuchnik_brown_sfor_F: H_HelmetLuchnik_headset_brn_F {
		scope=2;
		displayName="Luchnik Helmet (Brown, SFOR)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\H_HelmetEAST_brn_sfor.paa"
		};
	};	

	class synixe_HelmetLuchnik_brown2_sfor_F: H_HelmetLuchnik_headset_brn_F {
		scope=2;
		displayName="Luchnik Helmet (Brown, SFOR)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\H_HelmetEAST_brn2_sfor.paa"
		};
	};	

	class H_Booniehat_taiga;
	class synixe_Booniehat_sfor: H_Booniehat_taiga {
		scope=2;
		displayName="Boonie Hat (SFOR)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\booniehat_sfor_co.paa"
		};
	};
	
	class H_Booniehat_taiga_hs;
	class synixe_Booniehat_sfor_hs: H_Booniehat_taiga_hs {
		scope=2;
		displayName="Boonie Hat (SFOR, Headset)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\booniehat_sfor_co.paa"
		};
	};

	class H_MilCap_taiga;
	class synixe_MilCap_sfor: H_MilCap_taiga {
		scope=2;
		displayName="Military Cap (SFOR, Headset)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\cappatrol_sfor_co.paa"
		};
	};

	class Aegis_H_MilCap_tachs_taiga_F;
	class synixe_MilCap_tachs_sfor: Aegis_H_MilCap_tachs_taiga_F {
		scope=2;
		displayName="Military Cap (SFOR, Headphones)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\cappatrol_sfor_co.paa"
		};
	};

	class Aegis_H_Milcap_nohs_taiga_F;
	class synixe_MilCap_nohs_sfor: Aegis_H_Milcap_nohs_taiga_F {
		scope=2;
		displayName="Military Cap (SFOR)";
		hiddenSelectionsTextures[]=
		{
			"\s\synixe_factions\addons\joldermark\data\cappatrol_sfor_co.paa"
		};
	};


};
