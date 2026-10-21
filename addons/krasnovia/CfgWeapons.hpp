class UniformItem;
class CfgWeapons {
    class U_B_CTRG_Soldier_F;
    class U_B_CTRG_Soldier_2_F;
    class U_B_CTRG_Soldier_3_F;
    class CLASS(uniform): U_B_CTRG_Soldier_F {
        displayName = "Combat Uniform (Pakra Summer)";
        class ItemInfo: UniformItem {
            uniformClass = QCLASS(uniform);
            containerClass = "Supply40";
            uniformModel = "-";
            mass = 20;
        };
    };
    class CLASS(uniform_tee): U_B_CTRG_Soldier_2_F {
        displayName = "Combat Uniform (Pakra Summer, Tee)";
        class ItemInfo: UniformItem {
            uniformClass = QCLASS(uniform_tee);
            containerClass = "Supply40";
            uniformModel = "-";
            mass = 20;
        };
    };
    class CLASS(uniform_rolled): U_B_CTRG_Soldier_3_F {
        displayName = "Combat Uniform (Pakra Summer, Rolled-Up)";
        class ItemInfo: UniformItem {
            uniformClass = QCLASS(uniform_rolled);
            containerClass = "Supply40";
            uniformModel = "-";
            mass = 20;
        };
    };
    class H_HelmetHBK_F;
    class CLASS(helmet): H_HelmetHBK_F {
        displayName = "AMH (Pakra Summer)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\amh_helmet.paa)};
    };
    class H_HelmetHBK_headset_F;
    class CLASS(helmet_headset): H_HelmetHBK_headset_F {
        displayName = "AMH (Pakra Summer, Headphones)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\amh_helmet.paa)};
    };
    class H_HelmetHBK_chops_F;
    class CLASS(helmet_chops): H_HelmetHBK_chops_F {
        displayName = "AMH (Pakra Summer, Chops)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\amh_helmet.paa)};
    };
    class H_HelmetHBK_ear_F;
    class CLASS(helmet_protector): H_HelmetHBK_ear_F {
        displayName = "AMH (Pakra Summer, Ear Protector)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\amh_helmet.paa)};
    };
};
