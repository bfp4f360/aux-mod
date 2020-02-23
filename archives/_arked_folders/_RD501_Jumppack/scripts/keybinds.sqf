scriptName "keybinds jumppack";
//Included so I can just say which key rather then the HEX numbers
#include "\a3\editor_f\Data\Scripts\dikCodes.h"


["Namenai Jumppack Mod","Jump",["Jump","Jump"],{ [player] spawn RD501_jumppack_fnc_decide_jump;},"",[DIK_Y, [false, true, false]],false] call cba_fnc_addKeybind;
["Namenai Jumppack Mod","Cycle jump type left",["Cycle jump type left","Cycle jump type left"],{[player, -1] spawn RD501_jumppack_fnc_cycle_jump;},"",[DIK_G, [false, true, false]],false] call cba_fnc_addKeybind;
["Namenai Jumppack Mod","Cycle jump type right",["Cycle jump type right","Cycle jump type right"],{[player, 1] spawn RD501_jumppack_fnc_cycle_jump;},"",[DIK_J, [false, true, false]],false] call cba_fnc_addKeybind;
