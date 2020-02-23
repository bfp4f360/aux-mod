//change types

params["_unit",["_inc",0,[0]]];

//if not jumppack, bye
if(!(_unit call tcw_fnc_jumppack_is_jumppack)) exitWith {};

_unitBackpackClass=backpack _unit;
_currentJumpType=_unit getVariable ["tcw_jumpPack_jumpType",0];
_jumpTypes=[(configFile >> "CfgVehicles" >> _unitBackpackClass),"tcw_jumpTypes",[]] call BIS_fnc_returnConfigEntry;
_selectedJump=_jumpTypes select _currentJumpType;
_jumpTypeCount=count _jumpTypes;

_delta=0;
if(_inc<0) then
{
	_delta=_currentJumpType+(_jumpTypeCount+_inc);
}
else
{
	_delta=_currentJumpType+_inc;
};

_newJumpTyepIndex=_delta%_jumpTypeCount;

_unit setVariable ["tcw_jumpPack_jumpType",round (_newJumpTyepIndex),true];
[_unit] call tcw_fnc_jumppack_show_data;

