class B_CommandoMortar_RF;
class GCLASS(RSG60Mortar): B_CommandoMortar_RF {
    displayName = "RSG-60 Mortar";
    faction = QGCLASS(base_vehicles);
    editorSubcategory = QGCLASS(mortars);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Olive {
            displayName = "Olive";
            textures[] = {"\lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF_olive_co.paa"};
            factions[] = {};
        };
        class Tan {
            displayName = "Tan";
            textures[] = {"\lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF_tan_co.paa"};
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            textures[] = {"\lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF_sand_co.paa"};
            factions[] = {};
        };
    };
};
