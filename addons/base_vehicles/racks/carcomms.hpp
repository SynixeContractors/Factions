class AcreRacks {
  class Rack_1 {
    displayName = "Antenna";
    shortName = "V.RF";
    // can manually mount 152 for more range
    // available to all internal crew (simulates literally having a antenna jack in seats)
    componentName = "ACRE_VRC110";
    allowedPositions[] = {
        "driver",
        {"cargo", 0},
        {"cargo", 1},
        {"cargo", 2},
        {"cargo", 3},
    };
    disabledPositions[] = {};
    defaultComponents[] = {};
    mountedRadio = ""; // doesnt have 152 you need to provide your own
    isRadioRemovable = 1;
    intercom[] = {};
  };
  class Rack_2 {
    displayName = "Integral 1";
    shortName = "Rack1";
    componentName = "ACRE_VRC103";
    allowedPositions[] = {"driver", {"cargo", 0}, "external"};
    disabledPositions[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC117F";
    isRadioRemovable = 0;
    intercom[] = {};
  };
  class Rack_3 {
    displayName = "Integral 2";
    shortName = "Rack2";
    componentName = "ACRE_VRC103";
    allowedPositions[] = {"driver", {"cargo", 0}, "external"};
    disabledPositions[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC117F";
    isRadioRemovable = 0;
    intercom[] = {};
  };
};
