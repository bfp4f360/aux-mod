
//hint format["%1 loadout changed",time];
//hint format ["%1",_this];

//First we get the last backppack
saved_backpack=player getVariable['RD501_jumppack_backpack_class',''];

//Then we get current backpack
current_backpack=backpack player;

//if backpacks are same, dont do anything
if(saved_backpack isEqualTo current_backpack) exitwith {};

//if different, update and set energy to 0.
player setVariable ["RD501_jumppack_backpack_class",current_backpack,true];

//hint format["%1 <<bp changed",current_backpack];
player setVariable ["RD501_jumppack_energy",0,true];
