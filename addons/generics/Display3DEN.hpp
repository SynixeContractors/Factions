class ctrlControlsGroupNoScrollbars;
class ctrlStatic;
class ctrlCombo;
class ctrlTree;
class ctrlEdit;

class Display3DEN {
    class Controls {
        class PanelRight: ctrlControlsGroupNoScrollbars {
            class Controls {
                class PanelRightCreate: ctrlControlsGroupNoScrollbars {
                    class Controls {
                        class Create: ctrlControlsGroupNoScrollbars {
                            class Controls {
                                class CreateObjectWest: ctrlTree {
                                    h = "safezoneH - ((5 + (5 + 2) + (5 + 1) + 10) + 21 + 5 + (5 + 2) + (5 + 2)) * (pixelH * pixelGrid * 0.50)";
                                };
                                class SearchCreate: ctrlEdit {
                                    onKeyDown = QUOTE(_this call FUNC(onSearchCreateKeyDown););
                                };
                                class GVAR(identitySelect): ctrlControlsGroupNoScrollbars {
                                    h = "(5 + 2) * (pixelH * pixelGrid * 0.50)";
                                    w = "60 * (pixelW * pixelGrid * 0.50)";
                                    y = "safezoneH - ((5 + (5 + 2) + (5 + 1) + 10) + 14 + 5 + (5 + 2) + (5 + 2)) * (pixelH * pixelGrid * 0.50)";
                                    class Controls {
                                        class Background: ctrlStatic {
                                            colorBackground[] = {0.2,0.2,0.2,1};
                                            h = "(5 + 2) * (pixelH * pixelGrid * 0.50)";
                                            w = "60 * (pixelW * pixelGrid * 0.50)";
                                        };
                                        class IdentitySelect: ctrlCombo {
                                            idc = IDC_IDENTITY_SELECT;
                                            h = "5 * (pixelH * pixelGrid * 0.50)";
                                            w = "60 * (pixelW * pixelGrid * 0.50)";
                                            x = "1 * (pixelW * pixelGrid * 0.50)";
                                            y = "(pixelH * pixelGrid * 0.50)";
                                            onLBSelChanged = QUOTE([_this] call FUNC(onIdentitySelectChange););
                                        };
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    };
};
