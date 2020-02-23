// params["_unit"];


// _has_recharge=_unit getVariable["RD501_jumppack_has_respawn_added_recharge",false];
// //since vars are persistant through respawn,
// if(!_has_recharge)then
// {
// 	_unit setVariable["RD501_jumppack_has_recharge",false,true];
// 	_unit setVariable["RD501_jumppack_has_respawn_added_recharge",true,true];
// 	_unit call RD501_jumppack_fnc_add_recharge_frame_eh;
// };


player addMPEventHandler ["MPRespawn", {
	params["_unit","_corpse"];
	//diag_log format["%1 MP TEST5 %2",time,_unit];
	_unit setVariable["RD501_jumppack_has_recharge",false,true];
	_unit call RD501_jumppack_fnc_add_recharge_frame_eh;
}];