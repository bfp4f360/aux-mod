RD501_cdv_21_effects={
	params["_unit","_effect_position_list"];
	{ 
		_effect_position_data=_x;
		_mem_point=_effect_position_data select 0;
		_offset=_effect_position_data select 1;
		

		_blueFireEffect = "#particlesource" createVehicle (getPosASL _unit);  
		_blueFireEffect setParticleClass "TCW_Jumppack_Fire_Blue"; 

		_blueSparkEffect = "#particlesource" createVehicle (getPosASL _unit);  
		_blueSparkEffect setParticleClass "TCW_Jumppack_Spark";

		_smokeTrailEffect = "#particlesource" createVehicle (getPosASL _unit);  
		_smokeTrailEffect setParticleClass "TCW_Jumppack_Smoke";

		_THEBLUELIGHT = "#lightpoint" createVehicle (getPosASL _unit);  
		_THEBLUELIGHT setLightAmbient [0, 0, 0];  
		_THEBLUELIGHT setLightColor [.15, 0.45, 1];  
		_THEBLUELIGHT setLightBrightness 1;

		//_THELIGHT setLightColor [1, 0.45, 0.15];  
		//_THELIGHT setLightBrightness 1;
		_THEBLUELIGHT attachto [_unit, _offset,_mem_point];
		_smokeTrailEffect attachTo [_unit, _offset,_mem_point];
		_blueSparkEffect attachTo [_unit, _offset,_mem_point];
		_blueFireEffect attachTo [_unit, _offset,_mem_point]; //[0, -.3, -.1]	

		_attached_items=_unit getVariable ["RD501_jumppack_effects",[]];

		_attached_items pushBack _THEBLUELIGHT;
		_attached_items pushBack _smokeTrailEffect;
		_attached_items pushBack _blueSparkEffect;
		_attached_items pushBack _blueFireEffect;

		_unit setVariable ["RD501_jumppack_effects",_attached_items,true];

	} forEach _effect_position_list;

	sleep 1;

	_unit call RD501_jumppack_fnc_remove_effects;

};