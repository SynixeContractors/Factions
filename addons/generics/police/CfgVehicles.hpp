class CfgVehicles {
  class PCLASS(Base);
  class CLASS(Base): PCLASS(Base) {
    faction = QCLASS(civilian);
    displayName = "Police Base Unit";
    @Templated();
  };

  @For(Identities)
  class CLASS2(Base,$1): CLASS(Base) {
    faction = QPCLASS($1);
    displayName = "$1 Police Base Unit";
    @Identity($1);
  };
  @EndFor
#define TEMPLATE_SIDE 0
#define SIDE DOUBLES(NATION,OPFOR)
#include "CfgVehicles_Sides.hpp"
#undef SIDE
#undef TEMPLATE_SIDE

};
