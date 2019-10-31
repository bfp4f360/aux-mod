//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon doggo
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_doggo_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(speed_boats)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(speedboat,opfor)
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

	class Boat_F;
	class Boat_Armed_01_base_F:Boat_F
	{
		class Turrets;
	}
	class Boat_Armed_01_minigun_base_F:Boat_Armed_01_base_F
	{
		class Turrets:Turrets
		{
			class FrontTurret;
			class RearTurret;
		}
	};

	class macro_new_vehicle(speedboat,opfor):Boat_Armed_01_minigun_base_F
	{
		displayName = "Speedboat CIS";
		scope=2;
		faction = macro_cis_faction
		// editorSubcategory = macro_editor_cat(tank)
		// vehicleClass = macro_editor_vehicle_type(tank)
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret
			{
			};
			class RearTurret: RearTurret
			{
				weapons[] = {"cannon_portableun"};
				magazines[] = {"1000Rnd_Laser_Cannon_EWEBSWBF_REP","1000Rnd_Laser_Cannon_EWEBSWBF_REP","1000Rnd_Laser_Cannon_EWEBSWBF_REP"};
				
			};
		};
	};
};
