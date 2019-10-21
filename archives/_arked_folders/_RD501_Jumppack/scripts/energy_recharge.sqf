
params["_args","_id"];

_unit=_args select 0;
_frame_delay=_args select 1;
if(!(alive _unit)) exitwith{
	[_id] call CBA_fnc_removePerFrameHandler;

};

_has_jumppack=_unit call RD501_jumppack_fnc_has_jumppack;
if(!_has_jumppack) exitwith{};

_unitBackpackClass=backpack _unit;
_recharge_value=([(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_recharge",0] call BIS_fnc_returnConfigEntry)*_frame_delay;

// _recharge_value=_args select 1;

_curr_energy=_unit getVariable["RD501_jumppack_energy",0];
_energy_capacity= _unit call RD501_jumppack_fnc_get_energy_capacity;



//no need to recharge if at max.
if(_curr_energy == _energy_capacity) exitwith {};

//calc recharge,and round it.
_new_energy=_curr_energy+_recharge_value;
_new_energy=(round (_new_energy*100))/100;

// diag_log format["%1 %2 %3 == %4 %5 == T=%6",
// ([(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_recharge",0] call BIS_fnc_returnConfigEntry),
// _frame_delay,
// _recharge_value,
// _curr_energy,
// _new_energy,
// time
// ];

//check if overspill.
if(_new_energy>_energy_capacity) then
{
	_unit setVariable ["RD501_jumppack_energy",_energy_capacity,true];
}
else
{
	_unit setVariable ["RD501_jumppack_energy",_new_energy,true];
};

//If no jumppack,no need to notfiy.
if(_has_jumppack) then 
{

	[_curr_energy,_new_energy,_energy_capacity] spawn RD501_jumppack_fnc_notify_recharge;
};

[west, "HQ"] sideChat format["%1 T:%2",_unit getVariable["RD501_jumppack_energy",0],time];
