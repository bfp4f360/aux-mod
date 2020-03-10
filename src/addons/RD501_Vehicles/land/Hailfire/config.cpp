//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon hailfire
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_hailfire_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(hailfire)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(hailfire,cis)
		};
		weapons[]=
		{
			
		};
	};
};
class CfgVehicles
{
    class SWOP_Hailfire;
	class macro_new_vehicle(hailfire,cis): SWOP_Hailfire
	{
        faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)
        displayname = "Hailfire Droid";
    };
};