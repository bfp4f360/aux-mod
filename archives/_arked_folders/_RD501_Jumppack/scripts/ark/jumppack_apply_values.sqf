//Apply variabels to unit

params["_unit"];
_unitBackpack=backpack _unit;

//if the backpack is not a jumppack
if(!(_unit call tcw_fnc_jumppack_is_jumppack)) exitWith 
{
	_unit setVariable ["tcw_jumpPack_maxEnergy",0,true];
	_unit setVariable ["tcw_jumpPack_currentEnergy",0,true];
	_unit setVariable ["tcw_jumpPack_rechargeRate",0,true];	
	_unit setVariable ["tcw_current_backpack","",true];
};

//if the backpack is a jumppack

_unit setVariable ["tcw_current_backpack",_unitBackpack,true];
_energyCap=[(configFile >> "CfgVehicles" >> _unitBackpack),"tcw_energyCapacity",0] call BIS_fnc_returnConfigEntry;
_energyRecharge=[(configFile >> "CfgVehicles" >> _unitBackpack),"tcw_energyRecharge",0] call BIS_fnc_returnConfigEntry;

_unit setVariable ["tcw_jumpPack_maxEnergy",_energyCap,true];
_unit setVariable ["tcw_jumpPack_currentEnergy",_energyCap,true];
_unit setVariable ["tcw_jumpPack_rechargeRate",_energyRecharge,true];

_unit setVariable ["tcw_jumpPack_jumpType",0,true];
_unit setVariable ["tcw_jumpPack_lastJumpTime",-9999,true];
_unit setVariable ["tcw_jumpPack_lastRechargeTime",time,true];
_unit setVariable ["TCW_current_backpack",_unitBackpack,true];

_unit setVariable ["tcw_jumppack_is_jumping",false,true];



