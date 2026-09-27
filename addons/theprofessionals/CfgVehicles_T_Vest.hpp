class CLASS2(SIDE,Vest): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Professionals_Vest);
    faction = FACTION;

    #include "wear/suit.hpp"
    #include "wear/headwear.hpp"
    #include "wear/vest.hpp"
    #include "weapons/pistol.hpp"
};
class CLASS2(SIDE,Vest_Rifleman_SMG): CLASS2(SIDE,Vest) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS2(SIDE,Vest_Rifleman): CLASS2(SIDE,Vest) {
    @Role(Rifleman);
    #include "weapons/rifle.hpp"
};
class CLASS2(SIDE,Vest_Breacher): CLASS2(SIDE,Vest) {
    @Role(Breacher);
    #include "weapons/smg.hpp"
    #include "wear/backpack.hpp"
};
class CLASS2(SIDE,Vest_Autorifleman): CLASS2(SIDE,Vest) {
    @Role(Autorifleman);
    #include "weapons/autorifle.hpp"
};
