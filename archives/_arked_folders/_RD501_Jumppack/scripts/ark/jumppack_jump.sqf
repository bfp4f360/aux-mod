
params["_unit","_jumpData"];

//if not jumppack, bye
if(!(_unit call tcw_fnc_jumppack_is_jumppack)) exitWith {};

_unit allowDamage false;
_unit setVariable ["ace_medical_allowDamage", false];

_fVelo=_jumpData select 0;
_vVelo=_jumpData select 1;
_cost=_jumpData select 2;
_angle=_jumpData select 3;
_soundIgnite=[_unit,"tcw_sound_ignite"] call tcw_fnc_jumppack_get_config_data;//selectRandom(_jumpData select 4);
_soundLand=[_unit,"tcw_sound_land"] call tcw_fnc_jumppack_get_config_data;
_soundIdle=[_unit,"tcw_sound_idle"] call tcw_fnc_jumppack_get_config_data;//"TCW_CDV21_Idle_Sound";//
_useDir=((_jumpData select 5)==1);//[_jumpData select 5] call TCW_StringToBool;

_effect=[_unit,"tcw_jumpEffect"] call tcw_fnc_jumppack_get_config_data;
_effectPos=[_unit,"tcw_jumpEffectMemPoints"] call tcw_fnc_jumppack_get_config_data;

_currentEnergy=_unit getVariable ["tcw_jumpPack_currentEnergy",0];
_unit setVariable ["tcw_jumpPack_currentEnergy",_currentEnergy-_cost,true];

_vHat=getCameraViewDirection _unit;//_unit weaponDirection currentWeapon _unit;

_isJumping=_unit getVariable ["TCW_jumppack_is_jumping",false];

[_unit] spawn tcw_fnc_jumppack_show_energy;


playSound3D [_soundIgnite, _unit, false, getPosASL _unit, 6, 1, 0];
//This is so that the sounds dont stack
_idleEffect=null;
if(!_isJumping) then
{
	
	[_unit,_effectPos] remoteExec [_effect];
	_idleEffect = createSoundSource [_soundIdle, position _unit, [], 0];//"TCW_CDV21_Idle_Sound"
	_idleEffect attachto [_unit,[0,0,0]];
};

_unit setVariable ["tcw_jumpPack_lastJumpTime",time,true];


 

_unit setVariable ["TCW_jumppack_is_jumping",true,true];
if(!(_useDir)) then 
{
	_vHat=vectorDir _unit;
	_vHat = [_vHat, _angle] call BIS_fnc_rotateVector2D;

	(_unit) setVelocity 
	[
		((_vHat select 0) *(_fVelo)),
		((_vHat select 1) *(_fVelo)),
		(_vVelo)
	]; 	

}
else
{
	

	(_unit) setVelocity 
	[
		((_vHat select 0) *(_fVelo)),
		((_vHat select 1) *(_fVelo)),
		((_vHat select 2) *(_fVelo))+_vVelo
	]; 	
	
};

waitUntil 
{
	sleep .005;((isTouchingGround _unit))//(vectorMagnitude (velocity _unit))<.1
};

//on non stacking jump,play landing sound
//_isJumping=_unit getVariable ["TCW_jumppack_is_jumping",false];
if(!_isJumping && !(isNull _idleEffect)) then
{

	detach  _idleEffect;
	deleteVehicle _idleEffect;
	playSound3D [_soundLand, _unit, false, getPosASL _unit, 4, 1, 0];
	[_unit] call tcw_fnc_jumppack_delete_attached_effects;
};

_unit setVariable ["TCW_jumppack_is_jumping",false,true];
_unit setVariable ["ace_medical_allowDamage", true];
_v1=_unit getVariable["tcw_jumpPack_lastJumpTime",time];

//This makes it so that u if u dont actualy jump with directional, it doesnt consume.
if(time-_v1<.1) then { 
	[_unit] call tcw_fnc_jumppack_calculate_recharge;
	_currentEnergy=_unit getVariable ["tcw_jumpPack_currentEnergy",0];
	_unit setVariable ["tcw_jumpPack_currentEnergy",_currentEnergy+_cost,true];
};

_unit allowDamage true;

