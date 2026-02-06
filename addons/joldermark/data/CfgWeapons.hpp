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

	// MMAC

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
};
