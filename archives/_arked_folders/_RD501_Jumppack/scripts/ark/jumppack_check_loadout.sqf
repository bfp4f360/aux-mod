
_currentBackpack=backpack player;
_savedBackpack=player getVariable ["TCW_current_backpack",backpack player];
//This line takes care of the exploit where if u drop and pick up jumppack ,u get all energy back.
if(_currentBackpack isEqualTo "")exitWith {};
if(!(_currentBackpack isEqualTo _savedBackpack)) then 
{

	player call tcw_fnc_jumppack_apply_values;
	
	
};
