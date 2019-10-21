TCW_CDV_21_Effect=
{
	params["_unit","_effectPositionList"];
	{ 

		[_unit,_x]  spawn 
		{
			params["_unitSpawn","_effectPositionDataSpawn"];

			_memPoint=_effectPositionDataSpawn select 0;
			_offset=_effectPositionDataSpawn select 1;
			

			_blueFireEffect = "#particlesource" createVehicle (getPosWorld _unitSpawn);  
			_blueFireEffect setParticleClass "TCW_Jumppack_Fire_Blue"; 

			_blueSparkEffect = "#particlesource" createVehicle (getPosWorld _unitSpawn);  
			_blueSparkEffect setParticleClass "TCW_Jumppack_Spark";

			_smokeTrailEffect = "#particlesource" createVehicle (getPosWorld _unitSpawn);  
			_smokeTrailEffect setParticleClass "TCW_Jumppack_Smoke";

			_THEBLUELIGHT = "#lightpoint" createVehicle (getPosWorld _unitSpawn);  
			_THEBLUELIGHT setLightAmbient [0, 0, 0];  
			_THEBLUELIGHT setLightColor [.15, 0.45, 1];  
			_THEBLUELIGHT setLightBrightness 1;

			//_THELIGHT setLightColor [1, 0.45, 0.15];  
			//_THELIGHT setLightBrightness 1;
			_THEBLUELIGHT attachto [_unitSpawn, _offset,_memPoint];
			_smokeTrailEffect attachTo [_unitSpawn, _offset,_memPoint];
			_blueSparkEffect attachTo [_unitSpawn, _offset,_memPoint];
			_blueFireEffect attachTo [_unitSpawn, _offset,_memPoint]; //[0, -.3, -.1]

			

			waitUntil 
			{
				sleep .005;((isTouchingGround _unitSpawn))//(vectorMagnitude (velocity _unit))<.1
			};


			detach  _smokeTrailEffect;
			deleteVehicle _smokeTrailEffect;

			detach  _blueSparkEffect;
			deleteVehicle _blueSparkEffect;

			detach  _blueFireEffect;
			deleteVehicle _blueFireEffect;

			_blueFireEffectPulse = "#particlesource" createVehicle (getPosWorld _unitSpawn);  
			_blueFireEffectPulse setParticleClass "TCW_Jumppack_Fire_Blue_Pulse";
			_blueFireEffectPulse attachto [_unitSpawn, [0,0,0]]; 

			

			sleep .45;

			detach  _blueFireEffectPulse;
			deleteVehicle _blueFireEffectPulse;
			sleep .25;
			deleteVehicle _THEBLUELIGHT;

		};
	} forEach [_effectPositionList select 0];
};