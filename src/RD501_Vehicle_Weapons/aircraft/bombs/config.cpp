
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(bombs)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(vehicle_weapons)
		requiredAddons[]=
		{
			macro_patch_name(vehicle_weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(bomb,cluster),
			macro_new_weapon(bomb,SDB),
			macro_new_weapon(bomb,LGB)
			
		};
	};
};

class CfgWeapons
{
	

	class BombCluster_02_F;
	class weapon_SDBLauncher;//RD501_Bomb_Cluster_Launcher
	class GBU12BombLauncher;
	class macro_new_weapon(bomb,cluster): BombCluster_02_F
	{
		magazines[] = {macro_new_mag(cluster_bomb,4),macro_new_mag(cluster_bomb,2)};
		DisplayName = "Rayne Delivery System";
		displayNameShort  = "Rayne System";
		salvo = 4;
		magazineReloadTime = 5;
	};
	class macro_new_weapon(bomb,SDB) : weapon_SDBLauncher //RD501_Bomb_SDB_Launcher
	{
		magazines[] = {macro_new_mag(sdb_bomb,4)};
		DisplayName = "Rayne Delivery System";
		displayNameShort  = "Rayne System";
		salvo = 4;
		magazineReloadTime = 5;
	};
	class macro_new_weapon(bomb,LGB) : GBU12BombLauncher//RD501_Bomb_LGB_Launcher
	{
		magazines[] = {macro_new_mag(lgb_bomb,4)};
		DisplayName = "Rayne Delivery System";
		displayNameShort  = "Rayne System";
		salvo = 4;
		magazineReloadTime = 5;
	};



}; 

