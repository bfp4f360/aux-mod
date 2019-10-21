//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon droideka
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_droideka_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(droideka)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(droideka,camo),
			macro_new_vehicle(droideka,support),
			macro_new_vehicle(droideka,normal)
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
	//O_JM_TX130_1  empire command
	//O_JM_TX130m1_1 normal
	//O_JM_TX130m2_1 super

	#include "inheritance.hpp"
		//Moveable

	class macro_new_vehicle(droideka,base) :SWOP_Droideka
	{
		scope=0;
		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(heavy_armored_infantry)
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry)
	};
	class macro_new_vehicle(droideka,camo) : macro_new_vehicle(droideka,base)
	{
		scope=2;
		displayName = "Moveable Droideka (Camo)";
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikacamoOK_co.paa"};
		
	};
	
	class macro_new_vehicle(droideka,support) : macro_new_vehicle(droideka,base)
	{
		scope=2;
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikasupportOK_co.paa"};
		displayName = "Moveable Droideka (Support)";
		
	};
	
	
	class macro_new_vehicle(droideka,normal) : macro_new_vehicle(droideka,base)
	{
		scope=2;
		displayName = "Moveable Droideka";
		
	};

};