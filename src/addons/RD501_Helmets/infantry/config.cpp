#define COMPONENT aviation_helmets
#define BASEHELMNAME MODNAME##_501st_Pilot_Base
#include "../../RD501_main/config_macros.hpp"
#include "config_macros.cpp"

class CfgPatches
{
	class macro_patch_name(infantry_helmets)
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

	class macro_new_helmet(infantry,base);
	class macro_new_helmet(infantry,lum_base);
	class macro_new_helmet_jlts(infantry,jlts_recruit);
	
	NEW_501_Inf_Helm_JLTS(Archaic,Archaic,Archaic.paa)
	NEW_501_Inf_Helm_JLTS(Blade,Blade,Blade.paa)
	NEW_501_ARC_Helm_JLTS(Brennan,Brennan,Brennan.paa)
	NEW_501_ARC_Helm_JLTS(Darkstar,Darkstar,Darkstar.paa)
	NEW_501_Inf_Helm_JLTS(Delaney,Delaney,Delaney.paa)
	NEW_501_Inf_Helm_JLTS(Fallout,Fallout,Fallout.paa)
	NEW_501_ARC_Helm_JLTS(Habivi,Habivi,Habivi.paa)
	NEW_501_Inf_Helm_JLTS(Hosed,Hosed,Hosed.paa)
	NEW_501_ARC_Helm_JLTS(Jink,Jink,Jink.paa)
	NEW_501_Inf_Helm_JLTS(Kestrel,Kestrel,Kestrel.paa)
	NEW_501_Inf_Helm_JLTS(Lantern,Lantern,Lantern.paa)
	NEW_501_Inf_Helm_JLTS(Odin,Odin,Odin.paa)
	NEW_501_Inf_Helm_JLTS(Player,Player,Player.paa)
	NEW_501_Inf_Helm_JLTS(Roster,Roster,Roster.paa)
	NEW_501_Inf_Helm_JLTS(Scanlon,Scanlon,Scanlon.paa)
	NEW_501_Inf_Helm_JLTS(Serge,Serge,Serge.paa)
	NEW_501_Inf_Helm_JLTS(Simon,Simon,Simon.paa)
	NEW_501_Inf_Helm_JLTS(Snippy,Snippy,Snippy.paa)
	NEW_501_Inf_Helm_JLTS(Spark,Spark,Spark.paa)
	NEW_501_Inf_Helm_JLTS(Target,Target,Target.paa)
	NEW_501_Inf_Helm_JLTS(Train,Train,Train.paa)
	NEW_501_Inf_Helm_JLTS(Tupiks,Tupiks,Tupiks.paa)
	NEW_501_Inf_Helm_JLTS(Vengeance,Vengeance,Vengeance.paa)

};
