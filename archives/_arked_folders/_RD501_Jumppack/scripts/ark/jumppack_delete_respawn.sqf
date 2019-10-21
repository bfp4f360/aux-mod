player addMPEventHandler  ["MPKilled", {
	params ["_unit", "_killer","_instigator","_useEffects"];
	[_unit] call tcw_fnc_jumppack_delete_attached_effects;
	_unit setVariable ["TCW_jumppack_is_jumping",false];
}];




player addEventHandler ["Respawn", {
	[_unit] call tcw_fnc_jumppack_delete_attached_effects;
	_unit setVariable ["TCW_jumppack_is_jumping",false];
}];