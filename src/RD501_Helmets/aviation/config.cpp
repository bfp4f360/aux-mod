#define COMPONENT aviation_helmets
#define BASEHELMNAME MODNAME##_501st_Pilot_Base
#include "../../RD501_main/config_macros.hpp"
#include "config_macros.cpp"

class CfgPatches
{
	class macro_patch_name(aviation_helmets)
	{
		author=DANKAUTHORS
		addonRootClass= macro_patch_name(helmets)
		requiredAddons[]=
		{
			
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgWeapons
{
	class itemCore;
	class macro_new_helmet(pilot,base):itemCore
	{
		class ItemInfo;
	};

	class macro_new_helmet(pilot,lum_base): macro_new_helmet(pilot,base)
	{
		class ItemInfo:ItemInfo
		{

		};
	};
	

	NEW_501_Pilot_HELM(aspect,Aspect,pilots\aspect.paa)
	NEW_501_Pilot_HELM(casskun,Casskun,pilots\casskun.paa)
	NEW_501_Pilot_HELM(dylan,Dylan,pilots\Dylanhelmet.paa)
	NEW_501_Pilot_HELM(exose,Exose,pilots\Exose.paa)
	NEW_501_Pilot_HELM(jackson,Jackson,pilots\Jackson.paa)
	NEW_501_Pilot_HELM(jaisus,Jaisus,pilots\Jaisus.paa)
	NEW_501_Pilot_HELM(kitty,Kitty,pilots\kitty.paa)
	NEW_501_Pilot_HELM(koop,Koop,pilots\Koop.paa)
	NEW_501_Pilot_HELM(kushiban,Kushiban,pilots\Kushiban.paa)
	NEW_501_Pilot_HELM(orange,Orange,pilots\orange.paa)
	NEW_501_Pilot_HELM(nocturnal,Warbird,pilots\Nocturnal.paa)
	NEW_501_Pilot_HELM(scuba,Scuba,pilots\scuba_helm.paa)
	NEW_501_Pilot_HELM(zatama,Zatama,pilots\DragonGemHelm.paa)

	NEW_501_Pilot_HELM(stealth,Stealth,pilots\stealthPilot.paa)
	NEW_501_Pilot_HELM(stealth_Krayt,Stealth Lord Krayt,pilots\steathKrayt.paa)
	//NEW_501_Pilot_HELM(luuce,Luuce,pilots\Luuce.paa)


	class macro_new_helmet(pilot,lord_krayt): macro_new_helmet(pilot,base)
	{
		scope = 2;
		displayName = "Clone pilot helmet (501st legion) Lord Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\LordKrayt.paa};
		subItems[] = {macro_new_weapon(nvg_integrated,pilot_test),"G_B_Diving"};

		#include "memenai.hpp"

	};

	class macro_new_helmet(pilot,king_krayt): macro_new_helmet(pilot,lum_base)
	{
		scope = 2;
		displayName = "Clone pilot helmet (501st legion) King Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\KingKrayt.paa};
		subItems[] = {macro_new_weapon(nvg_integrated,pilot_test),"G_B_Diving"};
		#include "memenai.hpp"

		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\white_glow.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};
	};

	class macro_new_helmet(pilot,royal_krayt): macro_new_helmet(pilot,king_krayt)
	{
			displayName = "Clone pilot helmet (501st legion) Royal Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\purple.paa};
	}

		class macro_new_helmet(pilot,cold_krayt): macro_new_helmet(pilot,king_krayt)
	{
			displayName = "Clone pilot helmet (501st legion) Ice Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\blue.paa};
	}

	class macro_new_helmet(pilot,angrr_krayt): macro_new_helmet(pilot,king_krayt)
	{
			displayName = "Clone pilot helmet (501st legion) Angrr Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\red.paa};
	}


	class 212th_Engineer_Helmet_501st;
	// class macro_new_helmet(warden,501st):212th_Engineer_Helmet_501st
	// {
	// 	author="RD501"
	// 	DisplayName="Clone warden helmet (501st legion 212th)";
	// 	hiddenSelections[]=
	// 	{
	// 		"Camo"
	// 	};
	
	// 	hiddenSelectionsMaterials[] = 
    //     {
    //         "RD501_Helmets\_materials\aviation\wardenMaterial.rvmat"
    //     };
	// };

	class macro_new_helmet(warden,501st2):212th_Engineer_Helmet_501st
	{
		author="RD501"
		DisplayName="Clone warden helmet (501st legion Cassie)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			macro_custom_helmet_textures\aviation\warden\warden.paa
		};
		hiddenSelectionsMaterials[] = 
        {
            "RD501_Helmets\_materials\aviation\wardenMaterial.rvmat"
        };
	};

	// class macro_new_helmet(warden,501stv3):212th_Engineer_Helmet_501st
	// {
	// 	author="RD501"
	// 	DisplayName="Clone warden helmet (501st legion swop)";
	// 	hiddenSelections[]=
	// 	{
	// 		"Camo"
	// 	};
	
	// 	hiddenSelectionsMaterials[] = 
    //     {
    //         "SWOP_clones\data\helmpilot.rvmat"
    //     };
	// };

};