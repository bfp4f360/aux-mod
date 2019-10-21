//makes it so that units get it
["CAManBase", "init",RD501_jumppack_fnc_init, true, [], true] call CBA_fnc_addClassEventHandler;
//adds when respawn
//["CAManBase", "Respawn",RD501_jumppack_fnc_respawned, true, [], true] call CBA_fnc_addClassEventHandler;

["CAManBase", "Delete",RD501_jumppack_fnc_remove_effects, true, [], true] call CBA_fnc_addClassEventHandler;


