# Synixe Factions

## Development

### Launching the project

```bash
hemtt launch
```

### Generating previews

Once everything is fully configured, you can generate previews of the units and items

```bash
hemtt photoshoot
```

### Vehicles

Base vehicles are defined once in `addons/base_vehicles` and listed in `generator/vehicles.json`, which gives each one's default crew role and whether it takes a camo. Factions add their versions with the `@Vehicles` generator macro, inside `class CfgVehicles`:

```cpp
@Vehicles({
    "faction": "t3_opfor",      // QPCLASS(...) of this addon, or a macro such as "QGCLASS(daltgreen)"
    "side": "OPFOR",            // BLUFOR, OPFOR, INDEP, CIV, or a define such as "SIDE_NUMBER"
    "camo": "Hex",              // optional: a texture name, a list, or {"name": weight}
    "vehicles": [
        "T100",
        "Typhoon_Cargo",
        {"class": "Orca", "camo": "Opfor"},
    ],
});
```

This creates `CLASS(T100)` from `GCLASS(T100)` with the faction, side and camo set, crewed by the faction's own `Crewman`. Other options:

- `"crew"`: use this role instead of each vehicle's default, or map roles: `{"HeliPilot": "Pilot"}`
- `"prefix"` / `"suffix"`: name classes and crew `CLASS2(prefix,Name)` / `CLASS2(Name,suffix)`, for files repeated with `@ForSides` or `@For(Identities)`
- `"properties"`: extra config properties for every vehicle, such as `editorSubcategory`

An entry can be an object to override `name`, `camo`, `crew` (`null` for none) or `cargo` for that vehicle, and any other key becomes a config property, for example `editorPreview`. To use a new base vehicle, add it to `generator/vehicles.json`.

### Faction Structure

#### Calvane Security Pact (OPFOR)

Calvane
├─ Blackmire - PMC group that operates as an unofficial branch of Calvane.
├─ Dal Riada - Large nation with global reach, closely allied with Calvane.
├─ Mbakora - An African federation with a strong military presence.

## Integrated Economies Aliance (BLUFOR)

Virelia
├─ Karskoya

## Mutual Security Alliance (INDEP)

The MSA is made up of small independent nations that work together to on security objects.

The faction uses the MTP family of camouflage patterns. Drovak is a major supplier of weapons (AKs), but some nations use domestic production, and the faction does not have a standardized weapon platform.

Nyrland
Brezia
