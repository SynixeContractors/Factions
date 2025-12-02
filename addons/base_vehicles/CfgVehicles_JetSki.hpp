class C_Scooter_Transport_01_F;
class GCLASS(JetSki): C_Scooter_Transport_01_F {
    displayName = "Jet Ski";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    textureList[] = {"White",1,"Black",1,"Blue",1,"Grey",1,"Lime",1,"Red",1,"Yellow",1};
    class TextureSources {
        class White {
            displayName = "White";
            textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};
        };
        class Black {
            displayName = "Black";
            textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"};
        };
        class Blue {
            displayName = "Blue";
            textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};
        };
        class Grey {
            displayName = "Grey";
            textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};
        };
        class Lime {
            displayName = "Lime";
            textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};
        };
        class Red {
            displayName = "Red";
            textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};
        };
        class Yellow {
            displayName = "Yellow";
            textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};
        };
    };
};
