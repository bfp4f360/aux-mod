tcw_texture_condition=
{
	params["_unit",'_desired_class'];

	//if not jumppack, bye 
	if(!(_unit call tcw_fnc_jumppack_is_jumppack)) exitWith 
	{
		false
	};
	_unitBackpack=backpack _unit;
	_texture_group=[(configFile >> "CfgVehicles" >> _unitBackpack),"tcw_skin_group",-1] call BIS_fnc_returnConfigEntry;
	
	//if no class defined
	if(_texture_group isEqualTo -1) exitWith
	{
		false
	};

	if(toLower(_texture_group) isEqualTo toLower(_desired_class))then 
	{
		true
	}
	else
	{
		false
	}


}