class CLASS2(SIDE,Armor): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Professionals_Armor);
    faction = FACTION;

    #include "wear/suit.hpp"
    #include "wear/headwear.hpp"
    #include "wear/armor.hpp"
    #include "weapons/pistol.hpp"
};
class CLASS2(SIDE,Armor_Rifleman_SMG): CLASS2(SIDE,Armor) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS2(SIDE,Armor_Rifleman): CLASS2(SIDE,Armor) {
    @Role(Rifleman);
    #include "weapons/rifle.hpp"
};
class CLASS2(SIDE,Armor_Breacher): CLASS2(SIDE,Armor) {
    @Role(Breacher);
    #include "weapons/smg.hpp"
    #include "wear/backpack.hpp"
};
class CLASS2(SIDE,Armor_Autorifleman): CLASS2(SIDE,Armor) {
    @Role(Autorifleman);
    #include "weapons/autorifle.hpp"
};
