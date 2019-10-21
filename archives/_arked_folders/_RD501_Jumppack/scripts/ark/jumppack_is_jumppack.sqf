//Is this backpack a jumppack

params ["_unit"];
_currBackpackClass=backpack _unit;
(configFile >> "CfgVehicles" >>_currBackpackClass >> "tcw_isJumppack") call BIS_fnc_getCfgDataBool

