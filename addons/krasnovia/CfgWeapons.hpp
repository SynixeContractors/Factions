#define HELMET_AMH(var1,var2) \
class H_HelmetHBK_F; \
class CLASS(helmet): H_HelmetHBK_F { \
    displayName = "AMH (##var1##)"; \
    hiddenSelectionsTextures[] = {var2}; \
}; \
class H_HelmetHBK_headset_F; \
class CLASS(helmet_headset): H_HelmetHBK_headset_F { \
    displayName = "AMH (##var1##, Headphones)"; \
    hiddenSelectionsTextures[] = {var2}; \
}; \
class H_HelmetHBK_chops_F; \
class CLASS(helmet_chops): H_HelmetHBK_chops_F { \
    displayName = "AMH (##var1##, Chops)"; \
    hiddenSelectionsTextures[] = {var2}; \
}; \
class H_HelmetHBK_ear_F; \
class CLASS(helmet_protector): H_HelmetHBK_ear_F { \
    displayName = "AMH (##var1##, Ear Protector)"; \
    hiddenSelectionsTextures[] = {var2}; \
} \

class UniformItem;
class CfgWeapons {
    class U_B_CTRG_Soldier_F;
    class U_B_CTRG_Soldier_2_F;
    class U_B_CTRG_Soldier_3_F;
    class CLASS(uniform): U_B_CTRG_Soldier_F {
        displayName = "Combat Uniform (Summer Digital)";
        class ItemInfo: UniformItem {
            uniformClass = QCLASS(uniform);
            containerClass = "Supply40";
            uniformModel = "-";
            mass = 20;
        };
    };
    class CLASS(uniform_tee): U_B_CTRG_Soldier_2_F {
        displayName = "Combat Uniform (Summer Digital, Tee)";
        class ItemInfo: UniformItem {
            uniformClass = QCLASS(uniform_tee);
            containerClass = "Supply40";
            uniformModel = "-";
            mass = 20;
        };
    };
    class CLASS(uniform_rolled): U_B_CTRG_Soldier_3_F {
        displayName = "Combat Uniform (Summer Digital, Rolled-Up)";
        class ItemInfo: UniformItem {
            uniformClass = QCLASS(uniform_rolled);
            containerClass = "Supply40";
            uniformModel = "-";
            mass = 20;
        };
    };
    HELMET_AMH(Summer Digital,QPATHTOEF(vehicle_textures,data\uniforms\summer_digital_helmet.paa));
};
