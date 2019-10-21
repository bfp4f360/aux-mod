#define COMPONENT aviation_helmets
#define BASEHELMNAME MODNAME##_501st_Pilot_Base
#include "../../RD501_main/config_macros.hpp"
#include "config_macros.cpp"

class CfgPatches
{
	class macro_patch_name(airborne_helmets)
	{
		author=DANKAUTHORS
		addonRootClass= macro_patch_name(helmets)
		requiredAddons[]=
		{
			macro_patch_name(helmets)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgWeapons
{
	class macro_new_helmet(airborne,base);
	class macro_new_helmet(airborne,lum_base);

	NEW_501_AB_HELM(501st_Legacy_helmet,501st Veteran,Vet_Trooper.paa)
	NEW_501_AB_HELM(501st_Commander_helmet,AC/DC,Lava.paa)
	NEW_501_AB_HELM(501st_Trooper_helmet,501st,Trooper.paa)

	

	NEW_501_AB_HELM(501st_Calo_helmet,Calo,Calo.paa)
	NEW_501_AB_HELM(501st_Dragneel_helmet,Dragneel,Dragneel.paa)
	NEW_501_AB_HELM(501st_Exod_helmet,Exod,Exod.paa)
	NEW_501_AB_HELM(501st_Grinch_helmet,Grinch,Grinch.paa)
	NEW_501_AB_HELM(501st_Komodo_helmet,Komodo,Komodo.paa)
	NEW_501_AB_HELM(501st_Kryptic_helmet,Kryptic,Kryptic.paa)
	NEW_501_AB_HELM(501st_Lich_helmet,Lich,Lich.paa)
	NEW_501_AB_HELM(501st_Lissy_helmet,Lissy,Lissy.paa)
	NEW_501_AB_HELM(501st_Miller_helmet,Miller,Miller.paa)
	NEW_501_AB_HELM(501st_Navo_helmet,Navo,Navo.paa)
	NEW_501_AB_HELM(501st_Needles_helmet,Needles,Needles.paa)
	NEW_501_AB_HELM(501st_Nobear_helmet,Nobear,Nobear.paa)
	NEW_501_AB_HELM(501st_Raykan_helmet,Raykan,Raykan.paa)
	NEW_501_AB_HELM(501st_Riley_helmet,Riley,Riley.paa)
	NEW_501_AB_HELM(501st_Tuff_helmet,Tuff,Tuff.paa)

		
	

	// NEW_501_AB_HELM(yeethelmeme,yeet,yeet.paa)

	class macro_new_helmet(airborne,air_krayt): macro_new_helmet(airborne,lum_base)
	{
		scope=2;
		displayName="Clone Air Pilot-Borne (Air Krayt)";
		//model = "\501st_helmets\AB\AB_helmet_lum.p3d";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\airborne\airKrayt.paa"
		};
	};

	class macro_new_helmet(airborne,purge): macro_new_helmet(airborne,lum_base)
	{
		scope=2;
		displayName="Clone Airborne Purge 'Angrr >:|'";
		//model = "\501st_helmets\AB\AB_helmet_lum.p3d";
		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\white_glow.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\airborne\Purge.paa"
		};
	};
	






};