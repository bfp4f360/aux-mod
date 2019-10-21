//When arsenal closes ,reapply values.
[missionNamespace,"arsenalClosed", {
	player call tcw_fnc_jumppack_handle_arsenal_closed;
}] call bis_fnc_addScriptedEventhandler;


//When arsenal closes ,reapply values.
["ACE_arsenal_displayClosed", {
player call tcw_fnc_jumppack_handle_arsenal_closed;

}] call CBA_fnc_addEventHandler;

//detech when playerloadout changes
// TCW_jumppack_loadout_change=
// {
	
// };

_id = ["loadout",{[tcw_fnc_jumppack_check_loadout, [], .1] call CBA_fnc_waitAndExecute;}] call CBA_fnc_addPlayerEventHandler;


//When arsenal closes ,reapply values.
