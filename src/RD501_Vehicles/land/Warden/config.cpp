//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon warden
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_warden_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(warden_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(warden_tank,mobile)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers;
class CfgVehicles
{
	class APC_Tracked_01_base_F;
	class  B_APC_Tracked_01_base_F:APC_Tracked_01_base_F
	{
		class Turrets;
	};
	class B_APC_Tracked_01_CRV_F:B_APC_Tracked_01_base_F
	{
		class Turrets:Turrets
		{
			class MainTurret;
		};
		class Components;
	};
	
	class macro_new_vehicle(warden_tank,mobile) : B_APC_Tracked_01_CRV_F
	{
		displayName = "Warden Utility Tank (Black) Mk.II";

		ace_refuel_fuelCargo = 999999999999;
		ace_rearm_defaultSupply = 999999999999;
		ace_cargo_space = 170;
		ace_repair_canRepair =1;
		ace_refuel_hooks[] = {{0.38, -3.17, -0.7}, {-0.41, -3.17, -0.7}};

		scopeCurator = 2;
		
		transportSoldier=8;
		LESH_canTow = 1;
		crew = "SWOP_Clonetrooper_P1";
		LESH_AxisOffsetTower[] = {0,-6,1};
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee = 31;
		canUseScanner = 1;
		incomingMissileDetectionSystem = 16;
		weaponLockSystem = "2+4+8";
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(IFV)
		vehicleClass = macro_editor_vehicle_type(IFV)
		
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 4;
			};
		};
		author = "RD501";
		//faction = "RD501Faction";
		scope = 2;
		side = 1;
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "CamoNet"};
		hiddenSelectionsTextures[] =
		{
			macro_vehicle_textures\warden\Warden_AVRE_Body.paa,
			macro_vehicle_textures\warden\Warden_AVRE_EXT2.paa,
			macro_vehicle_textures\warden\Warden_AVRE_RCWS.paa,
			macro_vehicle_textures\warden\Warden_AVRE_CRV.paa,
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		forceInGarage =1;
				
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					
					macro_basic_air_weapons,
					macro_new_weapon(generic,plasma_aircraft_cannon)
				};
				magazines[] = {
				
					macro_basic_air_mags,
					macro_new_mag(generic_aircraft_cannon_plasma_red,1000),
					macro_new_mag(generic_aircraft_cannon_plasma_red,1000)
				};
			};
		};
		class components: Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						maxFogSeeThrough= -1;
						nightRangeCoef = 1;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
							maxFogSeeThrough= -1;
							nightRangeCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
							maxFogSeeThrough= -1;
							nightRangeCoef = 1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				right = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType = "SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {32000,16000,8000,4000,2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				left = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType = "SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {32000,16000,8000,4000,2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};

		class EventHandlers : DefaultEventhandlers {};
	};
};