
params["_unit"];
_has_jumppack=_unit call RD501_jumppack_fnc_has_jumppack;

//if no jumppack,no jump
if(!_has_jumppack) exitwith
{
	[format["<t color='#FF0000'>Cant prone jump with this jumptype</t>"], ""] call ace_common_fnc_displayTextPicture;
};

//if underwater.
if((eyePos _unit select 2 < 0) ||(underwater _unit)) exitWIth 
{
	[format["<t color='#0055FF'>No water jumping</t>"], ""] call ace_common_fnc_displayTextPicture;
};

if (!(isNull objectParent _unit))exitWith 
{	
	[format["<t color='#FF0000'>No jumping in vehicle</t>"], ""] call ace_common_fnc_displayTextPicture;
};
_unitBackpackClass=backpack _unit;
_jumppack_data=[(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_jump_types",[]] call BIS_fnc_returnConfigEntry;

//If no jumppack data,exit
if((count _jumppack_data) ==0) exitWith {};

_jumppack_jump_index=_unit getVariable["RD501_jumppack_selected_jump",0];
_current_energy=_unit getVariable["RD501_jumppack_energy",false];

_selected_jump=_jumppack_data select _jumppack_jump_index;
_cost=(_selected_jump select 1) select 2;

//If not enough energy
if(_cost>_current_energy ) exitwith 
{
	[format["<t color='#FF0000'>Not Enough Energy</t>"], ""] call ace_common_fnc_displayTextPicture;
};


_jump_movement_data=_selected_jump select 1;

//get the forward velo,verticle velo and angle of jump
_velo_data=[_jump_movement_data select 0,_jump_movement_data select 1,_jump_movement_data select 3];

_prone_flag=_jump_movement_data select 5;
_directonal_flag=_jump_movement_data select 4;

_can_prone_jump=(_prone_flag==1);
_can_directional_jump=(_directonal_flag==1);

//If cant prone jump,exit
if ((stance _unit == "PRONE") && !_can_prone_jump) exitWith 
{
	[] spawn RD501_jumppack_fnc_no_prone;
};

//test lol
//_cost=0;

_unit setVariable ["RD501_jumppack_energy",_current_energy-_cost,true];

_tot_energy=_unit call RD501_jumppack_fnc_get_energy_capacity;
[_current_energy-_cost,_tot_energy]  call RD501_jumppack_fnc_show_energy;

[player,
_velo_data select 0,//f velo
_velo_data select 1,//v velo
_velo_data select 2,//angle
_can_directional_jump
] 
spawn RD501_jumppack_fnc_jump;
//hint format["%1 %2 %3",_cost,_unit getVariable["RD501_jumppack_energy",false],_cost>_current_energy];

