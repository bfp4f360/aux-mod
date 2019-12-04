params["_unit"];



// //prevent from adding if unit is the server.
// if(!(local _unit)) exitwith{};
// //if(isServer) exitwith{};
// if(_unit !=player) exitwith{};
_unit=player;
_delay=1;



[
	{
		params["_args","_id"];

		//extract data from args.
		_unit=_args select 0;
		_frame_delay=_args select 1;
		_unitBackpackClass=backpack _unit;

		//player globalChat format["%1 T:%2",_id,time];

		//Check if this backpack is jumppack.
		_has_jumppack=_unitBackpackClass isEqualTo "SANDBOX_TEST_BAG";//@@ replace with fnc
		if(!_has_jumppack) exitwith{};

		//Get recharge value and then calculate with time difference.
		_recharge_value_unit=([(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_recharge",0] call BIS_fnc_returnConfigEntry);
		_recharge_value=_recharge_value_unit*_frame_delay;

		//Get current energy and max
		_curr_energy=_unit getVariable["RD501_jumppack_energy",0];
		_energy_capacity= 100;//@@ replace with fnc


	}
	, _delay, [_unit,_delay]

] call CBA_fnc_addPerFrameHandler;