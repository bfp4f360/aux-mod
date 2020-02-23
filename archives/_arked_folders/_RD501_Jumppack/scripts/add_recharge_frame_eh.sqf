params["_unit"];
//diag_log format["%1 %2 %3",time,"here",_unit];
if(!(local _unit)) exitwith{};
//if(isServer) exitwith{};
if(_unit !=player) exitwith{};

_has_recharge=_unit getVariable["RD501_jumppack_has_recharge",false];

if(_has_recharge) exitwith{};
// [west, "HQ"] sideChat format["adding %1",time];
_unit setVariable["RD501_jumppack_has_recharge",true,true];
//diag_log format["LOCAL MEME %1 %2 %3 %4",time,"---",_unit,_unit getVariable["RD501_jumppack_has_recharge",false]];
diag_log format["%1 added",time];
_delay=.1;
_handle = [RD501_jumppack_fnc_energy_recharge, _delay, [player,_delay]] call CBA_fnc_addPerFrameHandler;
