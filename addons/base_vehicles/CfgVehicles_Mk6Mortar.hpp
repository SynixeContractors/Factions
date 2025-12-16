class O_Mortar_01_F;
class GCLASS(Mk6Mortar): O_Mortar_01_F {
    displayName = "Mk6 Mortar";
    faction = QGCLASS(base_vehicles);
    editorSubcategory = QGCLASS(mortars);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_CO.paa"};
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre";
            textures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_OPFOR_CO.paa"};
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Tropic";
            textures[] = {"\A3_Aegis\Static_F_Aegis\Mortar_01\Data\Mortar_01_ghex_CO.paa"};
            factions[] = {};
        };
    };
};
