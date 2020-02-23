
params["_unit"];
//check to see if they surrendering or captive, if so dont jump
if(_unit getVariable["ace_captives_isSurrendering",false] || _unit getVariable ["ace_captives_isHandcuffed", false]) exitWith 
{
	[] spawn
	{
		
		_chance=random [0, .5, 1];
		_textToShow= "Cant jump while surrendering";

		if(_chance<.2) then 
		{
			_textToShow="UR MINE!!!";
		};



		titleText [_textToShow, "PLAIN", -1, true, true];
		sleep 2;
		titleText ["", "PLAIN"];
	};
};
//Check to see if in vehicle 
if (!(isNull objectParent _unit))exitWith 
{
	[] spawn
	{
		
		_chance=random [0, .5, 1];
		_textToShow= "No jumping in vehicles";

		if(_chance<.4) then 
		{
			_textToShow="YYYYYYYYYYYYYYYYYYY THO?????";
		};



		titleText [_textToShow, "PLAIN", -1, true, true];
		sleep 2;
		titleText ["", "PLAIN"];
	};
};
//if not jumppack, bye 
if(!(_unit call tcw_fnc_jumppack_is_jumppack)) exitWith 
{
	[] spawn
	{
		
		_chance=random [0, .5, 1];
		_textToShow= "No jumppack equipped";

		if(_chance<.2) then 
		{
			_textToShow="LAVA BIG GAY REEE";
		};



		titleText [_textToShow, "PLAIN", -1, true, true];
		sleep 2;
		titleText ["", "PLAIN"];
	};
};

_unitBackpackClass=backpack _unit;	
_lastJumpTime=_unit getVariable ["tcw_jumpPack_lastJumpTime",time];
_jumppackSpamDelay=[(configFile >> "CfgVehicles" >> _unitBackpackClass),"tcw_jumppackSpamDelay",9999] call BIS_fnc_returnConfigEntry;

//First recharge
[_unit] call tcw_fnc_jumppack_calculate_recharge;

//if ur tryna spam ,stop lol
 
if((time-_lastJumpTime)<_jumppackSpamDelay) exitWith 
{
	[_unit] spawn tcw_fnc_jumppack_show_energy;
	[] spawn
	{
		
		_chance=random [0, .5, 1];
		_textToShow= "Cooling Down";

		if(_chance<.2) then 
		{
			_textToShow="STOP SPAMMING";
		};



		titleText [_textToShow, "PLAIN", -1, true, true];
		sleep 2;
		titleText ["", "PLAIN"];
	};
};

//so now we check,do u have enough energy
_currentEnergy=_unit getVariable ["tcw_jumpPack_currentEnergy",0];
_currentJumpType=_unit getVariable ["tcw_jumpPack_jumpType",0];
_jumpTypes=[(configFile >> "CfgVehicles" >> _unitBackpackClass),"tcw_jumpTypes",[]] call BIS_fnc_returnConfigEntry;
_selectedJump=_jumpTypes select _currentJumpType;

_selectedJumpData=_selectedJump select 1;
_selectedJumpCost=(_selectedJumpData) select 2;
_canProneJump=((_selectedJumpData select 6)==1);//[_selectedJumpData select 6] call TCW_StringToBool;

//if ur prone and u cant prone jump, dont jump
if ((stance _unit == "PRONE") && !_canProneJump) exitWith 
{
	[] spawn
	{
		
		_chance=random [0, .5, 1];
		_textToShow= "No prone jump selected";

		if(_chance<.2) then 
		{
			_textToShow="No Grasshopper";
		};



		titleText [_textToShow, "PLAIN", -1, true, true];
		sleep 2;
		titleText ["", "PLAIN"];
	};
};

//if u dont have enough energy,bye
if(_currentEnergy<_selectedJumpCost) exitWith 
{	
	_unit call tcw_fnc_jumppack_show_energy;
	[] spawn
	{
		
		_chance=random [0, .5, 1];
		_textToShow= "Not enough energy";

		if(_chance<.2) then 
		{
			_textToShow="Not enough VBUCKS";
		};



		titleText [_textToShow, "PLAIN", -1, true, true];
		sleep 2;
		titleText ["", "PLAIN"];
	};
};

//jump
[_unit,_selectedJumpData] spawn tcw_fnc_jumppack_jump;
