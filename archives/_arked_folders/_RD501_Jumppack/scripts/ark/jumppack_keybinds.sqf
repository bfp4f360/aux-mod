scriptName "keybinds jumppack";
//Included so I can just say which key rather then the HEX numbers
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["TCW Mod","Jump",["Jump","Jump"],{ [player] spawn tcw_fnc_jumppack_decide_jump;},"",[DIK_Y, [false, true, false]],false] call cba_fnc_addKeybind;
["TCW Mod","Cycle jump type left",["Cycle jump type left","Cycle jump type left"],{[player, -1] spawn tcw_fnc_jumppack_change_jump_type;},"",[DIK_G, [false, true, false]],false] call cba_fnc_addKeybind;
["TCW Mod","Cycle jump type right",["Cycle jump type right","Cycle jump type right"],{[player, 1] spawn tcw_fnc_jumppack_change_jump_type;},"",[DIK_J, [false, true, false]],false] call cba_fnc_addKeybind;
["TCW Mod","Show Energy",["Show Energy","Show Energy"],{[player] spawn tcw_fnc_jumppack_show_data;},"",[DIK_K, [false, true, false]],false] call cba_fnc_addKeybind;
