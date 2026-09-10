@For(Arid,Boreal,Cold,Desert,Tropic)
class CLASS2(IDENT,$1) {
    name = QUOTE($1 (NAME));
    class CLASS3(IDENT,$1,Pair) {
        name = "Pair";
        faction = QCLASS(LOWER);
        side = SIDE;
        __COUNTER_RESET__
        GROUP_UNIT(CLASS3(IDENT,$1,Looter),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,Looter),SIDE);
    };
    class CLASS3(IDENT,$1,Group) {
        name = "Group";
        faction = QCLASS(LOWER);
        side = SIDE;
        __COUNTER_RESET__
        GROUP_UNIT(CLASS3(IDENT,$1,Looter),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,Looter),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,LooterPistol),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,Hunter),SIDE);
    };
    class CLASS3(IDENT,$1,Mob) {
        name = "Mob";
        faction = QCLASS(LOWER);
        side = SIDE;
        __COUNTER_RESET__
        GROUP_UNIT(CLASS3(IDENT,$1,Looter),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,Looter),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,LooterPistol),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,Hunter),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,Looter),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,Looter),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,LooterPistol),SIDE);
        GROUP_UNIT(CLASS3(IDENT,$1,Hunter),SIDE);
    };
};
@EndFor
