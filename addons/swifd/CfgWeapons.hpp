class CfgWeapons {
    class Uniform_Base;
    class U_BasicBody: Uniform_Base {
        class ItemInfo;
    };
    class CLASS(uniform_casual): U_BasicBody {
        SCOPE_DLC;
        displayName = "Casual Clothes (SwifD)";
        picture = QPATHTOF(ui\uniform_swifd_casual_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(man_casual);
        };
    };
};
