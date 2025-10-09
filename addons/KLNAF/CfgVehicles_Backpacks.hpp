class tacs_Backpack_Kitbag_Medic_Sage;
class CLASS(SYN_KLNAF_Pack_Medic): tacs_Backpack_Kitbag_Medic_Sage {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {
        MACRO_MEDICAL_BACKPACK_ITEMS;
    };
    class TransportMagazines {
        ADDMAG(SmokeShell,2);
    };
};

class B_TacticalPack_eaf_F;
class CLASS(SYN_KLNAF_Pack_Engineer): B_TacticalPack_eaf_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {
        ADDITEM(ToolKit,1);
        ADDITEM(ACE_EntrenchingTool,1);
        ADDITEM(ACE_wirecutter,1);
        ADDITEM(ACE_DefusalKit,1);
    };
};

class B_AssaultPack_eaf_F;
class CLASS(SYN_KLNAF_Pack_Autorifleman): B_AssaultPack_eaf_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(200Rnd_556x45_Box_Tracer_F,4);
    };
};

class CLASS(SYN_KLNAF_Pack_Machinegunner): B_AssaultPack_eaf_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F,4);
    };
};
