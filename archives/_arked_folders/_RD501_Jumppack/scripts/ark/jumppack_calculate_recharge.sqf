
params["_unit"];
_rechareRate=_unit getVariable ["tcw_jumpPack_rechargeRate",0];
_lastRechargeTime=_unit getVariable ["tcw_jumpPack_lastRechargeTime",time];
_maxEnergy=_unit getVariable ["tcw_jumpPack_maxEnergy",0];
_currentEnergy=_unit getVariable ["tcw_jumpPack_currentEnergy",0];

_timeSinceLastRecharge=time-_lastRechargeTime;
_gainedEnergy=_rechareRate*_timeSinceLastRecharge;
_newEnergyTotal=abs(_currentEnergy+_gainedEnergy);

if(_newEnergyTotal>_maxEnergy) then 
{
	_newEnergyTotal=_maxEnergy
};

//update values
_unit setVariable ["tcw_jumpPack_currentEnergy",_newEnergyTotal,true];
_unit setVariable ["tcw_jumpPack_lastRechargeTime",time,true];

