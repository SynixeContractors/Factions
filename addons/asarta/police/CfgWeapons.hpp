class UniformItem;
class CfgWeapons {
    class U_C_Uniform_Scientist_01_formal_F;
    class CLASS(uniform): U_C_Uniform_Scientist_01_formal_F {
        displayName = "Police Uniform";
        class ItemInfo: UniformItem {
            uniformClass = QCLASS(uniform);
            containerClass = "Supply20";
            uniformModel = "-";
            mass = 20;
        };
    };
    class H_ParadeDressCap_01_LDF_F;
    class CLASS(PoliceCap): H_ParadeDressCap_01_LDF_F {
        SCOPE_DLC;
        displayName = "Parade Cap (Blue)";
        hiddenSelectionsTextures[] = {QPATHTOEF(vehicle_textures,data\uniforms\paradecap_asarta.paa)};
    };
};
