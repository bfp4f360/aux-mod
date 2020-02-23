//These handle inv changes/arsenal detection
[missionNamespace,"arsenalClosed", {

	[west, "HQ"] sideChat format["%1 >>> vinilla",time];
	player call RD501_jumppack_fnc_closed_arsenal;

}] call bis_fnc_addScriptedEventhandler;

["ACE_arsenal_displayClosed", {

	[west, "HQ"] sideChat format["%1 >>> ACE",time];
	player call RD501_jumppack_fnc_closed_arsenal;

}] call CBA_fnc_addEventHandler;