params["_unit"];
// if(!(local _unit)) exitwith{};
//if(isServer) exitwith{};
//if(_unit !=player) exitwith{};

// _unit addMPEventHandler ["MPRespawn", {
// 	params["_unit","_corpse"];
// 	diag_log format["%1 added MP",time]
// 	_unit call RD501_jumppack_fnc_respawned;
// }];

_unit call RD501_jumppack_fnc_add_recharge_frame_eh;