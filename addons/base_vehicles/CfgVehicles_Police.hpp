// Lightbar and barred variants, used by police and gendarmerie factions

class GCLASS(Offroad_Lights): GCLASS(Offroad) {
    scope = 0;
    scopeCurator = 0;
    displayName = "Offroad (Lightbar)";
    class AnimationSources: AnimationSources {
        ANIMATION_OFF(hidePolice);
    };
};

class GCLASS(Offroad_Covered_Lights): GCLASS(Offroad_Covered) {
    scope = 0;
    scopeCurator = 0;
    displayName = "Offroad (Covered, Lightbar)";
    class AnimationSources: AnimationSources {
        ANIMATION_OFF(hidePolice);
    };
};

class GCLASS(Van_Transport_Lights): GCLASS(Van_Transport) {
    scope = 0;
    scopeCurator = 0;
    displayName = "Van (Transport, Lightbar)";
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

class GCLASS(Van_Cargo_Lights): GCLASS(Van_Cargo) {
    scope = 0;
    scopeCurator = 0;
    displayName = "Van (Cargo, Lightbar)";
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

class GCLASS(Ram_Covered_Lights): GCLASS(Ram_Covered) {
    scope = 0;
    scopeCurator = 0;
    displayName = "Ram 1500 (Covered, Lightbar)";
    class AnimationSources: AnimationSources {
        ANIMATION_OFF(hide_police);
    };
};

class GCLASS(Ram_Bars_Covered): GCLASS(Ram_Covered) {
    scope = 0;
    scopeCurator = 0;
    displayName = "Ram 1500 (Bars, Covered)";
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

class GCLASS(Ram_Bars): GCLASS(Ram_Bars_Covered) {
    scope = 0;
    scopeCurator = 0;
    displayName = "Ram 1500 (Bars)";
    class AnimationSources: AnimationSources {
        ANIMATION_ON(hide_box);
        ANIMATION_ON(hide_frame);
        ANIMATION_ON(hide_frame_full);
        ANIMATION_ON(hide_fram_full_panel);
        ANIMATION_OFF(box_door_open);
        ANIMATION_OFF(enable_FFV);
    };
};
