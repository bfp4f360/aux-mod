// Created by Rexi to make things move
//edited by namenai
params[
	["_vic",objNull,[player]]
]; 

if(isNull _vic) exitWith {
	
};
if (isServer) then {
	_group = createGroup east; 
	_ai_unit = _group createUnit ["O_Soldier_VR_F", position _vic, [], 0, "CAN_COLLIDE"]; 
	_ai_unit allowDamage false;
	_vic attachTo [_ai_unit,[0,-0.3,4.8]]; 

	//_ai_unit AddUniform "SWOP_tacticdroid_black_F_spec"; 
	[_ai_unit, true] remoteExec ["hideObjectGlobal", 0];
	_ai_unit setUnitPos "down"; 
	_ai_unit setBehaviour "CARELESS"; 

	_ai_unit setSpeedMode "LIMITED";
	_ai_unit forceWalk true;
};