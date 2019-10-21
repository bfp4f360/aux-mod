
	params["_unit"];

	_blueFireEffectPulse = "#particlesource" createVehicle (getPosWorld _unit);  
	_blueFireEffectPulse setParticleClass "TCW_Jumppack_Fire_Blue_Pulse";
	_blueFireEffectPulse attachto [_unit, [0,0,0]]; 

	sleep .45;

	detach  _blueFireEffectPulse;
	deleteVehicle _blueFireEffectPulse;
