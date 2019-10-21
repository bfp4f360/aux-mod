
params["_unit",["_configAttribute",""]];
if(!(_unit call tcw_fnc_jumppack_is_jumppack)) exitWith {nil};

_unitBackpackClass=backpack _unit;
_value=[(configFile >> "CfgVehicles" >> _unitBackpackClass),_configAttribute,nil] call BIS_fnc_returnConfigEntry;

_value
