class tacs_Backpack_Kitbag_Medic_Digital;
class CLASS(SYN_CNAF_Pack_Medic): tacs_Backpack_Kitbag_Medic_Digital {
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

class B_TacticalPack_rgr;
class CLASS(SYN_CNAF_Pack_Engineer): B_TacticalPack_rgr {
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

class B_AssaultPack_dgtl;
class CLASS(SYN_CNAF_Pack_Autorifleman): B_AssaultPack_dgtl {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(100Rnd_762x51_S77_Yellow_lxWS,4);
    };
};

class CLASS(SYN_CNAF_Pack_Machinegunner): B_AssaultPack_dgtl {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(ACE_130Rnd_338_Mag_yellow,4);
    };
};

class B_Messenger_Olive_F;
class CLASS(SYN_CNAF_Pack_ToolKit): B_Messenger_Olive_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {
        ADDITEM(ToolKit,1);   
    };
};

class B_Kitbag_dgtl;
class CLASS(SYN_CNAF_Pack_MAT): B_Kitbag_dgtl {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(PSRL1_AT_RF,2);
        ADDMAG(PSRL1_HEAT_RF,1);
    };
};

class CLASS(SYN_CNAF_Pack_HAT): B_Kitbag_dgtl {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(Vorona_HEAT,2);
    };
};

class CLASS(SYN_CNAF_Pack_AA): B_Kitbag_dgtl {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(ace_missile_manpad_stinger_man,2);
    };
};