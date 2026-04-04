class CfgGroups {
    @ForSides(OPFOR,BLUFOR,INDEP,CIV)
    class $GROUP {
        class CLASS(SIDE) {
            name = "Police";
            @For(Identities)
            #define SIDE DOUBLES($1,$UPPER)
            class CLASS2(SIDE,Patrol) {
                name = "Patrol ($2)";
                class CLASS2(SIDE,Patrol_Beat) {
                    name = "Beat";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,PolicemanPistol),0);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanPistol),0);
                };
                class CLASS2(SIDE,Patrol_Patrol) {
                    name = "Quick Response Patrol";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,PolicemanSMG),0);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanSMG),0);
                };
                class CLASS2(SIDE,Patrol_ResponseTeam) {
                    name = "Response Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,PolicemanSMG),0);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanSMG),0);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanRifle),0);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanRifle),0);
                };
            };
            class CLASS2(SIDE,SWAT) {
                name = "SWAT ($2)";
                class CLASS2(SIDE,SWAT_Patrol) {
                    name = "Patrol";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,SWATSMG),0);
                    GROUP_UNIT(CLASS2(SIDE,SWATSMG),0);
                };
                class CLASS2(SIDE,SWAT_SniperTeam) {
                    name = "Sniper Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,SWATSniper),0);
                    GROUP_UNIT(CLASS2(SIDE,SWATSniper),0);
                };
                class CLASS2(SIDE,SWAT_ResponseTeam) {
                    name = "Response Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,SWATSMG),0);
                    GROUP_UNIT(CLASS2(SIDE,SWATRifle),0);
                    GROUP_UNIT(CLASS2(SIDE,SWATRifle),0);
                    GROUP_UNIT(CLASS2(SIDE,SWATDemo),0);
                };
            };
            class CLASS2(SIDE,Gendarmerie) {
                name = "Gendarmerie ($2)";
                class CLASS2(SIDE,Gendarmerie_Patrol) {
                    name = "Patrol";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSMG),0);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSMG),0);
                };
                class CLASS2(SIDE,Gendarmerie_SniperTeam) {
                    name = "Sniper Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSniper),0);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSniper),0);
                };
                class CLASS2(SIDE,Gendarmerie_ResponseTeam) {
                    name = "Response Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSMG),0);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeRifle),0);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeRifle),0);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeBreacher),0);
                };
            };
            #undef SIDE
            @EndFor
        };
    };
    @EndForSides
};
