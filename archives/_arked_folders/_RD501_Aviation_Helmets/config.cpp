#define COMPONENT aviation_helmets
#define BASEHELMNAME MODNAME##_501st_Pilot_Base
#include "../RD501_main/config_macros.hpp"
#include "config_macros.cpp"

class CfgPatches
{
	class ADDON
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			//ADD_PREFIX(main)
			"A3_Data_F_Tank_Loadorder"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgWeapons
{
	class itemCore;
	class HeadgearItem;
	class BASEHELMNAME: itemCore//RD501_501st_Pilot_Base
	{
		scope = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0.6;    
		displayName = "Clone pilot helmet (501st legion)";
		picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
		model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet501.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"Camo1"};
			material = -1;
			explosionShielding = 2.2;
			minimalHit = 0.01;
			passThrough = 0.01;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.6;
				};
			};
		};
	};

	//Jamie Lanister
	NEW_501_Pilot_HELM(scuba,Scuba,scuba_helm.paa)

	//RIP CAREER
	NEW_501_Pilot_HELM(charmer,Charmer,charmer_helm.paa)

	//MEOW
	NEW_501_Pilot_HELM(kitty,Kitty,kitty.paa)

	//KERCHAOW
	NEW_501_Pilot_HELM(jackson,Jackson,Jackson.paa)

	NEW_501_Pilot_HELM(exose,Exose,Exose.paa)

	NEW_501_Pilot_HELM(jaisus,Jaisus,Jaisus.paa)

	NEW_501_Pilot_HELM(koop,Koop,Koop.paa)

	NEW_501_Pilot_HELM(luuce,Luuce,Luuce.paa)

	NEW_501_Pilot_HELM(nocturnal,Nocturnal,Nocturnal.paa)

	NEW_501_Pilot_HELM(kushiban,Kushiban,Kushiban.paa)

	NEW_501_Pilot_HELM(dylan,Dylan,Dylanhelmet.paa)

	NEW_501_Pilot_HELM(stealth,Stealth,stealthPilot.paa)

	NEW_501_Pilot_HELM(dylan,Dylan,Dylanhelmet.paa)

	NEW_501_Pilot_HELM(stealth_Krayt,Stealth Lord Krayt,steathKrayt.paa)

	


};
