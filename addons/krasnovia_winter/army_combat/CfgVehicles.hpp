class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_indep)
    #define TEMPLATE_SIDE 2
    #include "..\..\..\templates\statics\M2.hpp"
    #define TEMPLATE_CAMO Ru_winter
    #include "..\..\..\templates\tanks\T14.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "..\wear\uniform.hpp"
        #include "..\wear\vest_army.hpp"
        #include "..\wear\helmet.hpp"
        #include "..\wear\facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "..\..\krasnovia\weapons\carabine.hpp"
        #include "..\..\krasnovia\weapons\launcher.hpp"
        #include "..\..\krasnovia\weapons\attachments_army.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "..\..\krasnovia\weapons\rifle.hpp"
        #include "..\..\krasnovia\weapons\attachments_army.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "..\wear\backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
        #include "..\..\krasnovia\weapons\pistol.hpp"
        #include "..\..\krasnovia\weapons\gl.hpp"
    };
    class CLASS(SquadLeader): CLASS(RiflemanCarabine) {
        @Role(SquadLeader);
        #include "..\..\krasnovia\weapons\pistol.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "..\..\krasnovia\weapons\lmg.hpp"
        #include "..\..\krasnovia\weapons\pistol.hpp"
    };
    class CLASS(Machinegunner): CLASS(RiflemanCarabine) {
        @Role(Machinegunner);
        #include "..\..\krasnovia\weapons\mg.hpp"
        #include "..\..\krasnovia\weapons\pistol.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(RiflemanBackpack) {
        @Role(AsstMachinegunner);
        #include "..\wear\backpack_mg.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        #include "..\wear\backpack_medic.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanMAT);
        #include "..\..\krasnovia\weapons\mat.hpp"
    };
    class CLASS(RiflemanAA): CLASS(RiflemanBackpack) {
        @Role(RiflemanAA);
        #include "..\..\krasnovia\weapons\aa.hpp"
    };
    class CLASS(RiflemanHAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanHAT);
        #include "..\..\krasnovia\weapons\hat.hpp"
    };
    class CLASS(Engineer): CLASS(RiflemanBackpack) {
        @Role(Engineer);
        #include "..\wear\engineer.hpp"
    };
    class CLASS(RadioOperator): CLASS(RiflemanCarabine) {
        @Role(RadioOperator);
        #include "..\wear\backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(RiflemanBackpack) {
        @Role(Demolitions);
        #include "..\wear\demo.hpp"
    };
    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);
        #include "..\..\krasnovia\weapons\pdw.hpp"
        #include "..\..\krasnovia\wear\tanker.hpp"
    };
    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);
        #include "..\..\krasnovia\wear\pilot.hpp"
    };
    class CLASS(Marksman): CLASS(RiflemanCarabine) {
        @Role(Marksman);
        #include "..\..\krasnovia\weapons\marksman.hpp"
        #include "..\..\krasnovia\weapons\pistol.hpp"
    };
    class CLASS(Sniper): CLASS(Marksman) {
        @Role(Sniper);
        #include "..\..\krasnovia\weapons\sniper.hpp"
    };
};
