
params["_unit","_inc"];
_has_jumppack=_unit call RD501_jumppack_fnc_has_jumppack;
if(!_has_jumppack) exitwith{};

_unitBackpackClass=backpack _unit;
_jumppack_data=[(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_jump_types",[]] call BIS_fnc_returnConfigEntry;
_num_jumps=count _jumppack_data;
_jumppack_jump_index=_unit getVariable["RD501_jumppack_selected_jump",0];

_new_index=[_jumppack_jump_index+_inc,_num_jumps] call RD501_jumppack_fnc_proper_mod;
_unit setVariable ["RD501_jumppack_selected_jump",_new_index,true];
//[west, "HQ"] sideChat format["%1 %2 %3",_new_index,time,[_jumppack_jump_index+_inc,_num_jumps]];

_new_selected_jump=(_jumppack_data select _new_index);
_jump_name=_new_selected_jump select 0;
_jump_cost=(_new_selected_jump select 1) select 2;
hint parseText format ["name: %1 <br />Cost: <t color='#00FFFF'>%2</t><br />Current Energy:<t color='#aaff00'>%3</t>",_jump_name,_jump_cost,_unit getVariable["RD501_jumppack_energy",0]];

