class Offroad_01_civil_base_F;
class C_Offroad_01_F: Offroad_01_civil_base_F {
    class AnimationSources;
};

class GCLASS(Offroad): C_Offroad_01_F {
    class AnimationSources: AnimationSources {
        class hidePolice;
    };
};

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
        class hide_armor_window_armor_top;
        class hide_armor_window_armor_front;
        class hide_armor_window_armor_F_R;
        class hide_armor_window_armor_F_L;
        class hide_armor_window_armor_R_R;
        class hide_armor_window_armor_R_L;
        class hide_box;
        class hide_frame;
        class hide_frame_full;
        class hide_fram_full_panel;
        class box_door_open;
        class enable_FFV;
    };
};
class GCLASS(Ram_Comms);

class CLASS(Offroad): GCLASS(Offroad) {
    scope = 0;
    scopeCurator = 0;
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    class AnimationSources: AnimationSources {
        ANIMATION_OFF(hidePolice);
    };
};
class CLASS(Offroad_Covered): GCLASS(Offroad_Covered) {
    scope = 0;
    scopeCurator = 0;
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    class AnimationSources: AnimationSources {
        ANIMATION_OFF(hidePolice);
    };
};
class CLASS(Van_Transport): GCLASS(Van_Transport) {
    scope = 0;
    scopeCurator = 0;
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    class AnimationSources: AnimationSources {
        ANIMATION_OFF(beacon_front_hide);
        ANIMATION_OFF(beacon_rear_hide);
        ANIMATION_OFF(roof_rack_hide);
        ANIMATION_OFF(front_protective_frame_hide);
        ANIMATION_OFF(side_protective_frame_hide);
        ANIMATION_OFF(LED_lights_hide);
        ANIMATION_OFF(reflective_tape_hide);
    };
};
class CLASS(Ram_Covered): GCLASS(Ram_Covered) {
    scope = 0;
    scopeCurator = 0;
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    class AnimationSources: AnimationSources {
        ANIMATION_OFF(hide_police);
    };
};
class CLASS(Ram_Bars_Covered): GCLASS(Ram_Covered) {
    scope = 0;
    scopeCurator = 0;
    displayName = "Ram 1500 (Bars, Covered)";
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    class AnimationSources: AnimationSources {
        ANIMATION_OFF(hide_police);
        ANIMATION_OFF(hide_armor_window_armor_top);
        ANIMATION_OFF(hide_armor_window_armor_front);
        ANIMATION_OFF(hide_armor_window_armor_F_R);
        ANIMATION_OFF(hide_armor_window_armor_F_L);
        ANIMATION_OFF(hide_armor_window_armor_R_R);
        ANIMATION_OFF(hide_armor_window_armor_R_L);
    };
};
class CLASS(Ram_Bars): CLASS(Ram_Bars_Covered) {
    scope = 0;
    scopeCurator = 0;
    displayName = "Ram 1500 (Bars)";
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    class AnimationSources: AnimationSources {
        ANIMATION_ON(hide_box);
        ANIMATION_ON(hide_frame);
        ANIMATION_ON(hide_frame_full);
        ANIMATION_ON(hide_fram_full_panel);
        ANIMATION_OFF(box_door_open);
        ANIMATION_OFF(enable_FFV);
    };
};
class CLASS(Ram): GCLASS(Ram) {
    scope = 0;
    scopeCurator = 0;
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};

class GCLASS(Otokar);
class GCLASS(Otokar_HMG);
class GCLASS(Otokar_RCWS);
