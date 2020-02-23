
params ["_unit"];
_currBackpackClass=backpack _unit;
(configFile >> "CfgVehicles" >>_currBackpackClass >> "RD501_jumppack_is_jumppack") call BIS_fnc_getCfgDataBool
