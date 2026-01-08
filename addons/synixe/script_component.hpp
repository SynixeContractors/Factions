#define COMPONENT synixe
#define COMPONENT_BEAUTIFIED Synixe

#include "..\main\script_mod.hpp"
#include "..\main\script_macros.hpp"

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}
