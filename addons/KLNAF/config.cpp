#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(SYN_KLNAF_Base),
            QCLASS(SYN_O_KLNAF_A_Officer),
            QCLASS(SYN_O_KLNAF_A_Rifleman),
            QCLASS(SYN_O_KLNAF_A_Medic),
            QCLASS(SYN_O_KLNAF_A_Engineer),
            QCLASS(SYN_O_KLNAF_A_Autorifleman),
            QCLASS(SYN_O_KLNAF_A_Marksman),
            QCLASS(SYN_O_KLNAF_A_Logi_Officer),
            QCLASS(SYN_O_KLNAF_A_Logistics),
            QCLASS(SYN_O_KLNAF_A_Logistics_2),
            QCLASS(SYN_O_KLNAF_B_Officer),
            QCLASS(SYN_O_KLNAF_B_Teamleader),
            QCLASS(SYN_O_KLNAF_B_Rifleman),
            QCLASS(SYN_O_KLNAF_B_Medic),
            QCLASS(SYN_O_KLNAF_B_Engineer),
            QCLASS(SYN_O_KLNAF_B_Autorifleman),
            QCLASS(SYN_O_KLNAF_B_Marksman),
            QCLASS(SYN_O_KLNAF_B_Machinegunner),
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
