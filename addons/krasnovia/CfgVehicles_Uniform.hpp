class B_CTRG_Soldier_F;
class B_CTRG_Soldier_2_F;
class B_CTRG_Soldier_3_F;

class CLASS(uniform): B_CTRG_Soldier_F {
    uniformClass = QCLASS(uniform);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\summer_digital_uniform.paa),
    };
};
class CLASS(uniform_tee): B_CTRG_Soldier_2_F {
    uniformClass = QCLASS(uniform_tee);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\summer_digital_uniform.paa),
        "\A3\Characters_F\Common\Data\basicbody_black_CO.paa"
    };
};
class CLASS(uniform_rolled): B_CTRG_Soldier_3_F {
    uniformClass = QCLASS(uniform_rolled);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\summer_digital_uniform.paa),
    };
};
