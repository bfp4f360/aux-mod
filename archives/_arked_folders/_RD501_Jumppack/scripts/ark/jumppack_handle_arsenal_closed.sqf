
params ["_unit"];

// _backpack=backpack _unit;
if((_unit call tcw_fnc_jumppack_is_jumppack) ) then //&& !(_backpack isEqualTo _curPack)
{	
	_unit call tcw_fnc_jumppack_apply_values;
};
