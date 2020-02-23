
params["_unit","_f_velo","_v_velo","_dir_angle",["_use_dir",false]];

_unit allowDamage false;
_unit setVariable ["RD501_jumppack_is_jumping",true,true];
// /SmokeShellRed
//RD501_jumppack_jump_id
_jump_id=random [0, 210000 , 420000];
_unit setVariable ["RD501_jumppack_jump_id",_jump_id,true];

//We assume we have to apply the effect, this also determines if we add a idle effect.
_apply_effect_flag=true;
_attached_items=_unit getVariable ["RD501_jumppack_effects",[]];
if((count _attached_items)>0) then
{
	_apply_effect_flag=false;
};

_v_hat=getCameraViewDirection _unit;
if(!(_use_dir)) then 
{
	//non directional jump
	_v_hat=vectorDir _unit;
	_v_hat = [_v_hat, _dir_angle] call BIS_fnc_rotateVector2D;
	(_unit) setVelocity 
	[
		((_v_hat select 0) *(_f_velo)),
		((_v_hat select 1) *(_f_velo)),
		(_v_velo)
	]; 	

}
else
{
	//directional jump
	_vertical_sign=(_v_hat select 2)/(abs (_v_hat select 2));
	(_unit) setVelocity 
	[
		((_v_hat select 0) *(_f_velo)),
		((_v_hat select 1) *(_f_velo)),
		((_v_hat select 2) *(_f_velo))+(_v_velo/2)
	]; 	
};
//Ignite sound
_volume=3;
_dist=30;
_unitBackpackClass=backpack _unit;
_sound_path_start=selectRandom([(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_sound_ignite",[]] call BIS_fnc_returnConfigEntry);
playSound3D ["RD501_Jumppack\sounds\cdv21Start.ogg", _unit,false, getPosASL _unit,_volume,1,_dist];//"RD501_Jumppack\sounds\cdv21Start.ogg"

if(_apply_effect_flag) then
{
	_unit_backpack_class=backpack _unit;
	_position_of_effects=[(configFile >> "CfgVehicles" >> _unit_backpack_class),"RD501_jumppack_effect_points",nil] call BIS_fnc_returnConfigEntry;
	_effect_script=([(configFile >> "CfgVehicles" >> _unit_backpack_class),"RD501_jumppack_jump_effect_script",nil] call BIS_fnc_returnConfigEntry);
	[_unit,_position_of_effects] spawn call compile _effect_script;
};

sleep .1;
waitUntil 
{
	((isTouchingGround _unit) || (_jump_id !=(_unit getVariable ["RD501_jumppack_jump_id",-1])) || (surfaceIsWater getPos _unit ) || !(alive _unit))//(vectorMagnitude (velocity _unit))<.1
};
//to give time to let dmg eh not freak out
sleep .1;
//if not exists, rip.
if((_unit isEqualTo objNull)) exitwith
{
	//leave ,f
};

//Checks if another jump happened, if so disregard this timeline
if(_jump_id !=(_unit getVariable ["RD501_jumppack_jump_id",-1])) exitwith{};

//if on land, or water, end
if ((isTouchingGround _unit) || (surfaceIsWater getPos _unit ) || !(alive _unit)) then {
	_unit setVariable ["RD501_jumppack_is_jumping",false,true];
	_unit setVariable ["RD501_jumppack_jump_id",-1,true];
};

//if not exists, rip.
// if(!(_unit isEqualTo objNull)) exitwith
// {
// 	[_unit] call RD501_remove_effects;
// };

//landing soundsz
_unitBackpackClass=backpack _unit;
_sound_path_landing=selectRandom([(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_sound_land",[]] call BIS_fnc_returnConfigEntry);
playSound3D [_sound_path_landing, _unit,false, getPosASL _unit,_volume,1,_dist];//"RD501_Jumppack\sounds\cdv21End.ogg"

//create landing effect
[_unit] spawn RD501_jumppack_fnc_landing_effect;
sleep .25;

//remove all effects
[_unit] call RD501_jumppack_fnc_remove_effects;

//DELAYED to allow arma to not yeet u
_is_jumping=_unit getVariable ["RD501_jumppack_is_jumping",false];
if(!_is_jumping) then 
{
	_unit allowDamage true;
};


