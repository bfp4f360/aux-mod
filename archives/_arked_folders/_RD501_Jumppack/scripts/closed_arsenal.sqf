//When u enter arsenal reset energy
params["_unit"];
// _has_jumppack=_unit call RD501_jumppack_fnc_has_jumppack;
// if(!_has_jumppack) exitwith
// {
// 	_unit setVariable ["RD501_jumppack_energy",0,true];
// };
_unit setVariable ["RD501_jumppack_energy",_unit call RD501_jumppack_fnc_get_energy_capacity,true];
