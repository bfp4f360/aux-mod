#define COMPONENT infantry_helmets
#define SUBCOMPONENT LEGACY_CLASSNAMES
#define SUBADDON ADDON##_##SUBCOMPONENT
#define legacy_classname_base SUBADDON##_Base
#include "../../RD501_main/config_macros.hpp"
#include "../config_macros.cpp"
#include "config_macros.cpp"

class CfgPatches
{
	class SUBADDON
	{
		addonRootClass=ADDON;
		requiredAddons[]=
		{
			ADDON
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			
		};
	};
};


class CfgWeapons
{
	class H_HelmetB;

	class legacy_classname_base:H_HelmetB
	{
		author= "RD501";
		displayName = "LEGACY CLASSNAME HELMET";
		hiddenSelectionsTextures[] = {TEXTURE_PATH\other\legacy_texture.paa};
		scopeArsenal=0;
	};

	MAKE_LEGACY_HELM(SWOP_Clonetrooper_RD501_Basehe)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_baselum)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_RD501_Basehe)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_helmet_RD501_Serge)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_meme)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_helmet_RD501_Rexi)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_helmet_RD501_Rexi2)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_helmet_RD501_Koda)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_helmet_RD501_Odin)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_helmet_RD501_Ewik)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_shade)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_corey)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_player)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_orion)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_euler)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Crusie)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_scuba)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_Charmer)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_klein)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Coward)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Crisis)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Crisis2)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Drifter)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Jan)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_klown)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_klownv2)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Miller)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Point)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Raven)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Sideways)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Audials)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_Calvary)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Money)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Pompano)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Grandpa)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Legia)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Warlord)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Glue)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Roadboy)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_Kitty)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_Jacky)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_odinCSM)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Tyler)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_Eragon)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_Exose)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_Jaisus)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_Koop)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_Luuce)
	MAKE_LEGACY_HELM(SWOP_ClonetrooperSAM2)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Jupiter)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Murdock)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Tee)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Lissy)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Verax)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_nocturnal)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_nekro)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Strill)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Peterson)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_skittles)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Eli)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Tupiks)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Reck)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Spectre)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Shape)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Lucky)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Silent)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Royale)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Nightingale)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_mags)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Train2)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_shadow)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Adenn)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_arc_rto)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Crow)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Beskar)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Cyrus)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Solus)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Triton)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Delta)
	MAKE_LEGACY_HELM(SWOP_501_helmet_RD501_Verda)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_kushiban)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_dylan)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_501_Test)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_RD501_VerTest)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_stealth)
	MAKE_LEGACY_HELM(SWOP_Clonetrooper_pilot_helmet501_RD501_stealth_Krayt)
};