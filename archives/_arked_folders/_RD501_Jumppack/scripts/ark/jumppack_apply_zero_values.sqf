
params["_unit"];
_unitBackpack=backpack _unit;


_unit setVariable ["tcw_jumpPack_maxEnergy",0,true];
_unit setVariable ["tcw_jumpPack_currentEnergy",0,true];
_unit setVariable ["tcw_jumpPack_rechargeRate",0,true];	
_unit setVariable ["tcw_jumpPack_jumpType",0,true];
_unit setVariable ["tcw_jumpPack_lastJumpTime",-9999,true];
_unit setVariable ["tcw_jumpPack_lastRechargeTime",time,true];
_unit setVariable ["tcw_jumppack_is_jumping",false,true];
