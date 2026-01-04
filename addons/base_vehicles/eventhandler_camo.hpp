class EventHandlers: EventHandlers {
  postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;}";
};
