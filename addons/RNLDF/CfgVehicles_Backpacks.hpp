class tacs_Backpack_Kitbag_Medic_Green;
class CLASS(SYN_RNLDF_Pack_Medic): tacs_Backpack_Kitbag_Medic_Green {
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
class CLASS(SYN_RNLDF_Pack_Engineer): B_TacticalPack_rgr {
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

class B_AssaultPack_wdl_F;
class CLASS(SYN_RNLDF_Pack_Autorifleman): B_AssaultPack_wdl_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(ACE_150Rnd_762x54_Box_tracer_red,4);
    };
};

class CLASS(SYN_RNLDF_Pack_Machinegunner): B_AssaultPack_wdl_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(ACE_150Rnd_93x64_Mag_red,4);
    };
};

class B_Messenger_Olive_F;
class CLASS(SYN_RNLDF_Pack_ToolKit): B_Messenger_Olive_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {
        ADDITEM(ToolKit,1);   
    };
};

class B_Kitbag_wdl_F;
class CLASS(SYN_RNLDF_Pack_MAT): B_Kitbag_wdl_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(MRAWS_HEAT55_F,2);
        ADDMAG(MRAWS_HE_F,1);
    };
};

class CLASS(SYN_RNLDF_Pack_HAT): B_Kitbag_wdl_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(Titan_AT,2);
    };
};

class CLASS(SYN_RNLDF_Pack_AA): B_Kitbag_wdl_F {
    dlc = QUOTE(PREFIX); 
    scope = 1; 
    scopeCurator = 1;
    class TransportWeapons {};
    class TransportItems {};
    class TransportMagazines {
        ADDMAG(ace_missile_manpad_stinger_man,2);
    };
};