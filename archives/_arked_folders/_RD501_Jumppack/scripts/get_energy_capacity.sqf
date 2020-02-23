params["_unit"];

_unitBackpackClass=backpack _unit;
[(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_energy_capacity",0] call BIS_fnc_returnConfigEntry