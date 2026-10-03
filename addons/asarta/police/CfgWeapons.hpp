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
};
