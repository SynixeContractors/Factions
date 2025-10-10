#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(SYN_RNLDF_Base),
            QCLASS(SYN_O_RNLDF_A_Officer),
            QCLASS(SYN_O_RNLDF_B_Officer),
            QCLASS(SYN_O_RNLDF_A_Teamleader),
            QCLASS(SYN_O_RNLDF_B_Teamleader),
            QCLASS(SYN_O_RNLDF_B_Radioman),
            QCLASS(SYN_O_RNLDF_A_Rifleman),
            QCLASS(SYN_O_RNLDF_B_Rifleman),
            QCLASS(SYN_O_RNLDF_A_Rifleman_2),
            QCLASS(SYN_O_RNLDF_A_Rifleman_3),
            QCLASS(SYN_O_RNLDF_B_Rifleman_MAT),
            QCLASS(SYN_O_RNLDF_B_Rifleman_HAT),
            QCLASS(SYN_O_RNLDF_B_Rifleman_AA),
            QCLASS(SYN_O_RNLDF_A_Medic),
            QCLASS(SYN_O_RNLDF_B_Medic),
            QCLASS(SYN_O_RNLDF_A_Engineer),
            QCLASS(SYN_O_RNLDF_B_Engineer),
            QCLASS(SYN_O_RNLDF_A_Autorifleman),
            QCLASS(SYN_O_RNLDF_B_Autorifleman),
            QCLASS(SYN_O_RNLDF_A_Marksman),
            QCLASS(SYN_O_RNLDF_B_Marksman),
            QCLASS(SYN_O_RNLDF_A_Logi_Officer),
            QCLASS(SYN_O_RNLDF_A_Logistics),
            QCLASS(SYN_O_RNLDF_A_Logistics_2),
            QCLASS(SYN_O_RNLDF_B_Machinegunner),
            QCLASS(SYN_O_RNLDF_A_MP),
            QCLASS(SYN_O_RNLDF_A_Soldier),
            QCLASS(SYN_O_RNLDF_A_Parade),
            QCLASS(SYN_O_RNLDF_A_Parade_2),
            QCLASS(SYN_O_RNLDF_B_Crewman),
            QCLASS(SYN_O_RNLDF_B_Heli_Pilot),
            QCLASS(SYN_O_RNLDF_B_Heli_Crew),
        };
        weapons[] = {
            QCLASS(SYN_F2000_F),
            QCLASS(SYN_F2000_VRCO),
            QCLASS(SYN_F2000_Holo),
            QCLASS(SYN_F2000_GL_F),
            QCLASS(SYN_F2000_GL_Holo),
            QCLASS(SYN_Minimi_F),
            QCLASS(SYN_HK417_DMS),
        };

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_optics",
            "ace_ballistics",
            "ace_realisticnames_optics",
            "ace_compat_ws_realisticnames",
            "A3_Aegis_Weapons_F_Aegis",
            "A3_Aegis_Weapons_F_Aegis_Rifles_AKM74",
            "A3_Weapons_F_Exp_Rifles_AKM",
            "Weapons_1_F_lxWS",
            "A3_Aegis_Weapons_F_Aegis_LongRangeRifles_SVD",
            "A3_Aegis_Weapons_F_Aegis_Rifles_RPK",
            "Weapons_1_F_lxWS_Machineguns_S77",
            "A3_Atlas_Characters_F_Atlas_Headgear",
            "A3_Atlas_Characters_F_Atlas_Uniforms",
            "A3_Atlas_Characters_F_Atlas_Vests",
            "A3_Supplies_F_Enoch_Bags",
            "A3_Aegis_Supplies_F_Aegis_Bags",
            "A3_Weapons_F_Ammoboxes",
            "A3_Aegis_Supplies_F_Aegis_Bags",
            "Characters_f_lxWS",
            "A3_Weapons_F",
            "A3_Aegis_Weapons_F_Aegis",
            "A3_Weapons_F_Exp",
            "A3_Weapons_F_Tank_Launchers_Vorona",
        };
        skipWhenMissingDependencies = 1;
        authors[] = {"Tobias Jennings"};
        VERSION_CONFIG;
    };
};

class CfgGroups
{
	class East
	{
		delete OPF_F;
	};
};


#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFactionClasses.hpp"
