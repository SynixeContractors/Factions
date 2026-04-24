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
                    GROUP_UNIT(CLASS2(SIDE,PolicemanPistol),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanPistol),$SIDE);
                };
                class CLASS2(SIDE,Patrol_Patrol) {
                    name = "Quick Response Patrol";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,PolicemanSMG),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanSMG),$SIDE);
                };
                class CLASS2(SIDE,Patrol_ResponseTeam) {
                    name = "Response Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,PolicemanSMG),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanSMG),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanRifle),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,PolicemanRifle),$SIDE);
                };
            };
            class CLASS2(SIDE,SWAT) {
                name = "SWAT ($2)";
                class CLASS2(SIDE,SWAT_Patrol) {
                    name = "Patrol";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,SWATSMG),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,SWATSMG),$SIDE);
                };
                class CLASS2(SIDE,SWAT_SniperTeam) {
                    name = "Sniper Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,SWATSniper),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,SWATSniper),$SIDE);
                };
                class CLASS2(SIDE,SWAT_ResponseTeam) {
                    name = "Response Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,SWATSMG),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,SWATRifle),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,SWATRifle),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,SWATDemo),$SIDE);
                };
            };
            class CLASS2(SIDE,Gendarmerie) {
                name = "Gendarmerie ($2)";
                class CLASS2(SIDE,Gendarmerie_Patrol) {
                    name = "Patrol";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSMG),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSMG),$SIDE);
                };
                class CLASS2(SIDE,Gendarmerie_SniperTeam) {
                    name = "Sniper Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSniper),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSniper),$SIDE);
                };
                class CLASS2(SIDE,Gendarmerie_ResponseTeam) {
                    name = "Response Team";
                    faction = QCLASS($LOWER);
                    side = $SIDE;
                    __COUNTER_RESET__
                    GROUP_UNIT(CLASS2(SIDE,GendarmeSMG),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeRifle),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeRifle),$SIDE);
                    GROUP_UNIT(CLASS2(SIDE,GendarmeBreacher),$SIDE);
                };
            };
            #undef SIDE
            @EndFor
        };
    };
    @EndForSides
};
