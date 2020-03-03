//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon cis_vanilla
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_CIS_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(cis_vanilla)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(Archer,CIS),
			macro_new_vehicle(Scorpion,CIS),
			macro_new_vehicle(Tarantula,CIS)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers ;

class CfgVehicles
{
	#include "inheritance.hpp"
	class macro_new_vehicle(Archer,CIS):I_LT_01_AA_F
	{
		
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="CIS Archer AA"
		crew = "SWOP_CIS_droid_crew";
		visualTarget = 0; 
		visualTargetSize = 0;
		reportOwnPosition = true;
		radarTargetSize = 0;
		radarTarget = 0;
		nvTarget = 0;
		laserTarget = 0;
		laserScanner = 0;
		irTarget = 0;
		irTargetSize = 0;
		countermeasureActivationRadius = 2000;
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa"
		};

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)

		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SmokeLauncher",macro_new_weapon(swarm,aa),macro_new_weapon(generic,preatorian_gun_opfor)};
				magazines[] = {"SmokeLauncherMag",macro_new_mag(spartan,21),macro_new_mag(spartan,21),macro_new_mag(generic_aircraft_gun_preatorian,1000),macro_new_mag(generic_aircraft_gun_preatorian,1000)};
			};
		};
	};
	class macro_new_vehicle(Scorpion,CIS):I_LT_01_Cannon_F
	{
		
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="CIS Scorpion IFV"
		crew = "SWOP_CIS_droid_crew";
		
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa"
		};

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)

		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SmokeLauncher","Cannon_EWEBSWBFgun",macro_new_weapon(aat_cannon,mbt)};
				magazines[] = {"SmokeLauncherMag",macro_new_mag(aat_mbt,50), macro_new_mag(aat_mbt,50),"1000Rnd_Laser_Cannon_EWEBSWBF","1000Rnd_Laser_Cannon_EWEBSWBF"};
			};
		};
	};
	class macro_new_vehicle(Tarantula,CIS):B_APC_Tracked_01_AA_F
	{
		
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="CIS Tarantula AA"
		crew = "SWOP_CIS_droid_crew";
		
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa"
		};

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)

		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class commanderoptics: commanderoptics
			{
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag"};
			};
			class mainturret: mainturret
			{
				weapons[] = {macro_new_weapon(generic,preatorian_gun_opfor),macro_new_weapon(tyrant,aa)};
				magazines[] = {macro_new_ammo(centurion),macro_new_ammo(centurion),macro_new_mag(generic_aircraft_gun_preatorian,1000),macro_new_mag(generic_aircraft_gun_preatorian,1000)};
			};
		};
	};
};
