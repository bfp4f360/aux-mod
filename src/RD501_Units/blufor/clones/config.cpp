#include "../../config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"
#include "armor_patches.hpp"

class CfgPatches
{
	class macro_patch_name(clones)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			
		
		};
		weapons[]=
		{
			marco_swop_armor_classes
			
		};
	};
};

class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;

    class SWOP_Clonetrooper_501jesse_F_CombatUniform:Uniform_Base
    {
        class ItemInfo;
    };
	class macro_new_uniform_class(blufor,501_jesse_combat): SWOP_Clonetrooper_501jesse_F_CombatUniform//SWOP_Clonetrooper_501jesse_M_CombatUniform
	{
		author = "RD501";
		scope = 2;
		displayName = "Clonetrooper uniform (501st 'Medic Jesse')";
		picture = "\SWOP_clones\data\body\icoBODY\Ico_body_501_jesse.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = macro_new_uniform_skin_class(blufor,jesse);
			Armor = 20;
			modelSides[] = {6};
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
		};
	};
	
    class SWOP_Clonetrooper_501srtrooper_F_CombatUniform:Uniform_Base
    {
         class ItemInfo;
    };
	class macro_new_uniform_class(blufor,501_senior_trooper_combat): SWOP_Clonetrooper_501srtrooper_F_CombatUniform//SWOP_Clonetrooper_501srtrooper_F_CombatUniform
	{
		author = "RD501";
		scope = 2;
		displayName = "Clonetrooper uniform (501st 'Sr.Trooper')";
		picture = "\SWOP_clones\data\body\icoBODY\Ico_body_501.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = macro_new_uniform_skin_class(blufor,senior_trooper)
			Armor = 20;
			modelSides[] = {6};
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
		};
	};
		
	class macro_new_uniform_class(blufor,501_vet_trooper_combat): SWOP_Clonetrooper_501srtrooper_F_CombatUniform//RD501_Clonetrooper_501Vettrooper_F_CombatUniform
	{
		author = "RD501";
		scope = 2;
		displayName = "Clonetrooper uniform (501st 'Vet.Trooper')";
		picture = "\SWOP_clones\data\body\icoBODY\Ico_body_501.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = macro_new_uniform_skin_class(blufor,vet_trooper)
			Armor = 20;
			modelSides[] = {6};
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
		};
	};

	class macro_new_uniform_class(blufor,gold_trooper_v1): SWOP_Clonetrooper_501srtrooper_F_CombatUniform//RD501_Clonetrooper_501Vettrooper_F_CombatUniform
	{
		author = "RD501";
		scope = 2;
		displayName = "Clonetrooper uniform (501st 'GOLD')";
		picture = "\SWOP_clones\data\body\icoBODY\Ico_body_501.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = macro_new_uniform_skin_class(blufor,gold_trooper)
			Armor = 20;
			modelSides[] = {6};
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
		};
	};

	#include "_clone_armor_readjust_base.hpp"
	#include "_clone_armor_readjust_1.hpp"
	#include "_cadet_armor.hpp"
	#include "_medic_armor.hpp"
	#include "_rto_armor.hpp"
	
	class SWOP_Clonetrooper_F_CombatUniform: Uniform_Base
	{
		author = "RD501";
		scope = 2;
		displayName = "Clonetrooper uniform";
		picture = "\SWOP_clones\data\body\icoBODY\Ico_body.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SWOP_Clonetrooper_F";
			armor = 100;
			armorStructural = 5;
			explosionShielding = 0.1;
			impactDamageMultiplier	= -100; // multiplier for falling damage, doesnt actualy work lol
			modelSides[] = {6};
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
			

		};
	};

	class macro_new_uniform_class(blufor,purge_uniform):SWOP_Clonetrooper_F_CombatUniform
	{
		displayName = "Clone Purgetrooper Uniform";
		class ItemInfo: ItemInfo
		{

			uniformClass = macro_new_uniform_skin_class(blufor,purge_uniform);
		};
	}

	//chest
	class macro_new_uniform_class(blufor,purge_vest): V_RebreatherB
	{
		author = "RD501";
		scope = 2;
		side = 3;
		displayName = "Clone Purgetrooper Armor";
		picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor.paa";
		model = "\SWOP_clones\armor\cloneArmor.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\purge\Trooper.paa};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWOP_clones\armor\cloneArmor.p3d";
			modelsides[] = {6};
			macro_rebreather_armor_stuff
			hiddenSelections[] = {"Camo1"};
			macro_clone_armor_hitpoints
			
		};
	};

	class macro_new_uniform_class(blufor,gold_boi): V_RebreatherB
	{
		author = "RD501";
		scope = 2;
		side = 3;
		displayName = "Clone Goldilocks";
		picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor.paa";
		model = "\SWOP_clones\armor\cloneArmor.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\purge_chest.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\gold.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWOP_clones\armor\cloneArmor.p3d";
			modelsides[] = {6};
			macro_rebreather_armor_stuff
			hiddenSelections[] = {"Camo1"};
			macro_clone_armor_hitpoints
			
		};
	};
};

class DefaultEventhandlers;

class CfgVehicles
{

	class CAManBase;

    class SWOP_Clonetrooper_501jesse_F;

	class SoldierWB: CAManBase
	{
		class HitPoints;
	};
	class B_Soldier_base_F: SoldierWB
	{
		class HitPoints:HitPoints
		{
			class HitAbdomen;
		
			class HitArms; 
			
			class HitBody; 
			
			class HitChest;
			
			class HitDiaphragm;
			
			class HitNeck; 
			
			class HitPelvis;
		};
	};

	class macro_new_uniform_skin_class(blufor,purge_uniform): B_Soldier_base_F
	{
		author = "RD501";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\purge\Trooper.paa};
		class EventHandlers :DefaultEventhandlers {};
	};

	
    class macro_new_uniform_skin_class(blufor,jesse): SWOP_Clonetrooper_501jesse_F
	{
		author = "RD501";
		scope = 2;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			TEXTUREPATH\Republic\clones\Jesse_medic_uniform.paa
		};
		class EventHandlers : DefaultEventhandlers {};
	};

    class SWOP_Clonetrooper_501srtrooper_F;
    class macro_new_uniform_skin_class(blufor,senior_trooper): SWOP_Clonetrooper_501srtrooper_F
	{
		author = "RD501";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			TEXTUREPATH\Republic\clones\SRTrooper_uniform.paa
		};
		class EventHandlers : DefaultEventhandlers {};
	};
	
	class macro_new_uniform_skin_class(blufor,vet_trooper): SWOP_Clonetrooper_501srtrooper_F
	{
		author = "RD501";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			TEXTUREPATH\Republic\clones\VetTrooper_uniform.paa
		};
		class EventHandlers : DefaultEventhandlers {};
	};


	class macro_new_uniform_skin_class(blufor,gold_trooper): SWOP_Clonetrooper_501srtrooper_F
	{
		author = "RD501";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			TEXTUREPATH\Republic\clones\VetTrooper_uniform.paa
		};
		class EventHandlers : DefaultEventhandlers {};

		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\gold.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};
	};

	
	// class SCI_B_Clone_F :B_Soldier_base_F
	// {
	// 	class HitPoints : HitPoints
	// 	{
	// 		class HitAbdomen:HitAbdomen
	// 		{
	// 			armor = 16;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitArms:HitArms 
	// 		{
	// 			armor = 16;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitBody:HitBody 
	// 		{	
	// 			armor = 32;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitChest:HitChest 
	// 		{
	// 			armor = 32;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitDiaphragm:HitDiaphragm 
	// 		{
	// 			armor = 32;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitNeck:HitNeck 
	// 		{
	// 			armor = 8;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitPelvis:HitPelvis
	// 		{
	// 			armor = 16;
	// 			passThrough = 0.6;
	// 		};
	// 	};
	// };
};
