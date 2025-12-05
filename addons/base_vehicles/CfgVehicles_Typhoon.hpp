#define TYPHOON_TEXTURES class TextureSources { \
        class Green { \
	    displayName = "Green"; \
 	    textures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa"}; \
            factions[] = {}; \
        }; \
        class GreenHex { \
	    displayName = "Hex Woodland"; \
	    textures[] = {"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"}; \
            factions[] = {}; \
        }; \
        class Hex { \
	    displayName = "Hex Ochre"; \
	    textures[] = {"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"}; \
            factions[] = {}; \
        }; \
        class WoodlandHex { \
	    displayName = "Hex Green"; \
	    textures[] = {"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa","\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa","\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_cargo_whex_CO.paa"}; \
            factions[] = {}; \
        }; \
    }; \


class O_Truck_03_transport_F;
class GCLASS(TyphoonBench): O_Truck_03_transport_F {
    displayName = "Typhoon (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    TYPHOON_TEXTURES
};
};

