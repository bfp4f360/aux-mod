params["_unit"];
{ 
  _attechedType=typeOf _x;
  if((_attechedType isEqualTo "#dynamicsound")||(_attechedType isEqualTo "#lightpoint")||(_attechedType isEqualTo "#particlesource")) then
  {

  	detach _x;
  	deleteVehicle _x;
  };
} forEach attachedObjects _unit;