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

  class GCLASS(Offroad);
  class GCLASS(Offroad_Covered);
  class GCLASS(Offroad_Comms);
  class GCLASS(Offroad_Services);
  class GCLASS(Van_Transport);
  class GCLASS(Ram);
  class GCLASS(Ram_Covered);
  class GCLASS(Ram_Comms);

#define TEMPLATE_SIDE 0
#define SIDE DOUBLES(NATION,OPFOR)
#include "CfgVehicles_Sides.hpp"
#undef SIDE
#undef TEMPLATE_SIDE
#define TEMPLATE_SIDE 1
#define SIDE DOUBLES(NATION,BLUFOR)
#include "CfgVehicles_Sides.hpp"
#undef SIDE
#undef TEMPLATE_SIDE
#define TEMPLATE_SIDE 2
#define SIDE DOUBLES(NATION,INDEP)
#include "CfgVehicles_Sides.hpp"

};
