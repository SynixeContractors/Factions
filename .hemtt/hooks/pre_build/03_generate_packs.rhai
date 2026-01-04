const HEMTT_VFS = HEMTT_VFS;

fn load_json(filename) {
    return parse_json(global::HEMTT_VFS.join("generator/" + filename + ".json").open_file().read());
}

const PACKS = load_json("packs");

let items = "";
let magazines = "";

for pack in PACKS.keys() {
    let pack_items = [];
    let pack_magazines = [];
    if "items" in PACKS[pack] {
        pack_items = PACKS[pack]["items"];
    }
    if "magazines" in PACKS[pack] {
        pack_magazines = PACKS[pack]["magazines"];
    }
    items = items + `
            case "${pack}": {
                ${pack_items}
            };
`;
    magazines = magazines + `
            case "${pack}": {
                ${pack_magazines}
            };
`;
}

let output = `
#include "..\\script_component.hpp"
params ["_name", "_items"];

switch (_items) do {
    case true: {
        switch (_name) do {
${items}
        };
    };
    case false: {
        switch (_name) do {
${magazines}
        };
    };
};
`;

HEMTT_VFS.join("addons/main/functions/fnc_packItems.sqf").create_file().write(output);
