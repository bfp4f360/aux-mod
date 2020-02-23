
params ["_unit"];

hint parseText format 
[
	"Energy Left: <t color='#15bef4'>%1</t>",
	
	_unit getVariable ["tcw_jumpPack_currentEnergy",0]
];
