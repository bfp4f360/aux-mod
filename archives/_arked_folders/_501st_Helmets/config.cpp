#define _ARMA_

#define COMPONENT 501st_AB_Helmets
#include "../RD501_Main/config_macros.hpp"
#include "config_macros.cpp"


class CfgPatches
{
	class ADDON
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			ADD_PREFIX(main)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[] = {901,605};
		type = 605;
		hiddenSelections[] = {};
		hitpointName = "HitHead";
	};
	class H_HelmetSpecB;
	class 501_AB_helmet: H_HelmetSpecB
	{
		author = "";
		scope = 2;
		displayName = "Clone airborne helmet";
		model = MODEL;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {TEXTURE##\AB_helmet_co.paa};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = MODEL;
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"Camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 60;
					passThrough = 0.5;
				};
			};
		};
	};
	NEW_501_AB_HELM(501st_Legacy_helmet,501st Veteran,Vet_Trooper.paa)
	NEW_501_AB_HELM(501st_Commander_helmet,Lava,Lava_helm.paa)
	NEW_501_AB_HELM(501st_Trooper_helmet,501st,Trooper.paa)

	NEW_501_AB_HELM(501st_Navo_helmet,Navo,Navo.paa)
	NEW_501_AB_HELM(501st_Needles_helmet,Needles,Needles.paa)
	NEW_501_AB_HELM(501st_Nobear_helmet,Nobear,Nobear.paa)

	NEW_501_AB_HELM(501st_Angel_helmet,Angel,angel_helm_AB.paa)
		
	NEW_501_AB_HELM(501st_Calo_helmet,Calo,Calo.paa)
};

