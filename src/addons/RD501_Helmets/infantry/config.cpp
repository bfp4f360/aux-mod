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
	NEW_501_Inf_Helm_JLTS(Delaney,Delaney,Delaney.paa)
	NEW_501_Inf_Helm_JLTS(Fallout,Fallout,Fallout.paa)
	NEW_501_Inf_Helm_JLTS(Hosed,Hosed,Hosed.paa)
	NEW_501_Inf_Helm_JLTS(Kestrel,Kestrel,Kestrel.paa)
	NEW_501_Inf_Helm_JLTS(Lantern,Lantern,Lantern.paa)
	NEW_501_Inf_Helm_JLTS(Odin,Odin,Odin.paa)
	NEW_501_Inf_Helm_JLTS(Player,Player,Player.paa)
	NEW_501_Inf_Helm_JLTS(Roster,Roster,Roster.paa)
	NEW_501_Inf_Helm_JLTS(Scanlon,Scanlon,Scanlon.paa)
	NEW_501_Inf_Helm_JLTS(Simon,Simon,Simon.paa)
	NEW_501_Inf_Helm_JLTS(Snippy,Snippy,Snippy.paa)
	NEW_501_Inf_Helm_JLTS(Spark,Spark,Spark.paa)
	NEW_501_Inf_Helm_JLTS(Target,Target,Target.paa)
	NEW_501_Inf_Helm_JLTS(Train,Train,Train.paa)
	NEW_501_Inf_Helm_JLTS(Tupiks,Tupiks,Tupiks.paa)
	NEW_501_Inf_Helm_JLTS(Vengeance,Vengeance,Vengeance.paa)
	NEW_501_Inf_Helm_JLTS(Dobby,Dobby,Dobby.paa)
	NEW_501_Inf_Helm_JLTS(Hyper,Hyper,Hyper.paa)
	NEW_501_Inf_Helm_JLTS(Ranque,Ranque,Ranque.paa)
	NEW_501_Inf_Helm_JLTS(Tuch,Tuch,Tuch.paa)
	NEW_501_Inf_Helm_JLTS(Zeros,Zeros,Zeros.paa)
	NEW_501_Inf_Helm_JLTS(Pollyon,Pollyon,Pollyon.paa)
	NEW_501_Inf_Helm_JLTS(Del,Del,Del.paa)
	NEW_501_Inf_Helm_JLTS(Raktharg,Raktharg,Raktharg.paa)
	NEW_501_Inf_Helm_JLTS(Buggs,Buggs,Buggs.paa)
	NEW_501_Inf_Helm_JLTS(Chaser,Chaser,Chaser.paa)
	NEW_501_Inf_Helm_JLTS(Reck,Reck,Reck.paa)
	NEW_501_Inf_Helm_JLTS(Cursed,Cursed,Cursed.paa)
	NEW_501_Inf_Helm_JLTS(Kahn,Kahn,Kahn.paa)
	NEW_501_Inf_Helm_JLTS(Weaver,Weaver,Weaver.paa)
	NEW_501_Inf_Helm_JLTS(Alistair,Alistair,Alistair.paa)
	NEW_501_Inf_Helm_JLTS(Dimitri,Dimitri,Dimitri.paa)
	NEW_501_Inf_Helm_JLTS(Loki,Loki,Loki.paa)
	NEW_501_Inf_Helm_JLTS(Money,Money,Money.paa)
	NEW_501_Inf_Helm_JLTS(Nightingale,Nightingale,Nightingale.paa)
	NEW_501_Inf_Helm_JLTS(Point,Point,Point.paa)
	NEW_501_Inf_Helm_JLTS(Tee,Tee,Tee.paa)
	NEW_501_Inf_Helm_JLTS(Tideend,Tideend,Tideend.paa)
	NEW_501_Inf_Helm_JLTS(Dadecoy,Dadecoy,Dadecoy.paa)
	NEW_501_Inf_Helm_JLTS(Muzzer,Muzzer,Muzzer.paa)
	NEW_501_Inf_Helm_JLTS(Biscuit,Biscuit,Biscuit.paa)
	NEW_501_Inf_Helm_JLTS(Goldarp,Goldarp,Goldarp.paa)

	NEW_501_ARC_Helm_JLTS(Habivi,Habivi,Habivi.paa)
	NEW_501_ARC_Helm_JLTS(Jink,Jink,Jink.paa)
	NEW_501_ARC_Helm_JLTS(Brennan,Brennan,Brennan.paa)
	NEW_501_ARC_Helm_JLTS(Darkstar,Darkstar,Darkstar.paa)
	//NEW_501_ARC_Helm_JLTS(Korvus,Korvus,Korvus.paa)
};
