
	params["_unit"];

	_attached_items=_unit getVariable ["RD501_jumppack_effects",[]];

	{
		detach  _x;
		deleteVehicle _x;
	} forEach _attached_items;

	_unit setVariable ["RD501_jumppack_effects",[],true];
