
params["_unit"];
//if not jumppack, bye
if(!(_unit call tcw_fnc_jumppack_is_jumppack)) exitWith {};

[_unit] call tcw_fnc_jumppack_calculate_recharge;

_unitBackpackClass=backpack _unit;	
_jumpTypes=[(configFile >> "CfgVehicles" >> _unitBackpackClass),"tcw_jumpTypes",[]] call BIS_fnc_returnConfigEntry;
_currentJumpType=_unit getVariable ["tcw_jumpPack_jumpType",0];
_jumpType=_jumpTypes select _currentJumpType;

_jumpName=_jumpType select 0;
_jumpData=_jumpType select 1;

_fVelo=_jumpData select 0;
_vVelo=_jumpData select 1;
_cost=_jumpData select 2;
_angle=_jumpData select 3;
_sound=_jumpData select 4;
_useDir=(_jumpData select 5==1);//[_jumpData select 5] call TCW_StringToBool;
_currEnergy=_unit getVariable["tcw_jumpPack_currentEnergy",0];
_useDirText="Directional jump: <t color='#00FFFF'>%7</t><br/>";

if(_useDir) then
{
	_useDirText="Directional jump: <t color='#00FF00'>%7</t><br/>";
}
else
{
	_useDirText="Directional jump: <t color='#FF0000'>%7</t><br/>";
};

hint parseText format 
[
	"Name: <t color='#00FF00'>%1</t><br/>
	Forward velo: <t color='#FFFF00'>%2</t>
	Verticle velo: <t color='#FFFF00'>%3</t><br/>
	Cost: <t color='#15bef4'>%4</t>
	Current Energy: <t color='#15bef4'>%5</t><br/>
	Angle: <t color='#FF00FF'>%6</t><br/>"+
	_useDirText+"%8"
	,
	_jumpName,_fVelo,_vVelo,_cost,_currEnergy,_angle,_useDir,time
];

