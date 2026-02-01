class GCLASS(Offroad); // FIXME: when offroad is fixed add the light bar on it
class Offroad_01_military_covered_base_F;
class C_Offroad_01_covered_F: Offroad_01_military_covered_base_F {
    class AnimationSources;
};
class GCLASS(Offroad_Covered): C_Offroad_01_covered_F {
    class AnimationSources: AnimationSources {
        class hidePolice;
    };
};

class GCLASS(Offroad_Comms);
class Van_02_transport_base_F;
class C_Van_02_transport_F: Van_02_transport_base_F {
    class AnimationSources;
};
class GCLASS(Van_Transport): C_Van_02_transport_F {
    class AnimationSources: AnimationSources {
        class beacon_front_hide;
        class beacon_rear_hide;
        class roof_rack_hide;
        class front_protective_frame_hide;
        class side_protective_frame_hide;
        class LED_lights_hide;
        class reflective_tape_hide;
    };
};

class GCLASS(Ram);
class Pickup_service_base_rf;
class Pickup_covered_base_rf: Pickup_service_base_rf {
    class AnimationSources;
};
class GCLASS(Ram_Covered): Pickup_covered_base_rf {
    class AnimationSources: AnimationSources {
        class hide_police;
    };
};
class GCLASS(Ram_Comms);


class CLASS(Offroad): GCLASS(Offroad) {
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS(Offroad_Covered): GCLASS(Offroad_Covered) {
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    class AnimationSources: AnimationSources {
        class hidePolice: hidePolice {
            initPhase = 0;
        };
    };
};
class CLASS(Van_Transport): GCLASS(Van_Transport) {
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    class AnimationSources: AnimationSources {
        class beacon_front_hide: beacon_front_hide {
            initPhase = 0;
        };
        class beacon_rear_hide: beacon_rear_hide {
            initPhase = 0;
        };
        class roof_rack_hide: roof_rack_hide {
            initPhase = 0;
        };
        class front_protective_frame_hide: front_protective_frame_hide {
            initPhase = 0;
        };
        class side_protective_frame_hide: side_protective_frame_hide {
            initPhase = 0;
        };
        class LED_lights_hide: LED_lights_hide {
            initPhase = 0;
        };
        class reflective_tape_hide: reflective_tape_hide {
            initPhase = 0;
        };
    };
};
class CLASS(Ram_Covered): GCLASS(Ram_Covered) {
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    class AnimationSources: AnimationSources {
        class hide_police: hide_police {
            initPhase = 0;
        };
    };
};
