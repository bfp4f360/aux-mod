#define COMPONENT infantry_helmets
#define Base_Inf_Name MODNAME##_501st_Infantry_Base
#define Base_Inf_Lumanated_Name MODNAME##_501st_Lumanated_Visor_Base
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
			"A3_Data_F_Tank_Loadorder"//"RD501_501st_AB_Helmets"
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

	class Base_Inf_Name : itemCore
	{
		scope = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       

		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0.6;   

		displayName = "Clonetrooper helmet (501st 'Dino')";
		picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
		model = "SWOP_clones\helmet\cloneHelmet.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501dino_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
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


	class Base_Inf_Lumanated_Name : itemCore
	{
		scope = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       

		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0.6;    

		displayName = "Clonetrooper helmet (501st)";
		picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
		model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";//
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501clutch_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";//
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

	//9 arc
	//49 normal infantry
	//4 lumanted visors?
	//2 special lumanted
	//2 hidden
	//---------------------
	//66 total helmets

	//no cluthc helm


	//ARC, Alphabetically, Ascending order
		NEW_501_ARC_Helm(Adenn,Adenn,Adenn.paa)
		NEW_501_ARC_Helm(arc_rto,ARC RTO,ARC_RTO.paa)
		NEW_501_ARC_Helm(beskar,Beskar,Beskar.paa)
		//NEW_501_ARC_Helm(crow,Crow,Crow.paa)
		NEW_501_ARC_Helm(cyrus,Cyrus,Cyrus.paa)
		NEW_501_ARC_Helm(delta,Delta,Delta.paa)
		NEW_501_ARC_Helm(solus,Solus,Solus.paa)
		NEW_501_ARC_Helm(triton,Triton,Triton.paa)
		NEW_501_ARC_Helm(verda,Verda,Verda.paa)

	//Infantry, Alphabetically, Ascending order
		NEW_501_Inf_Helm(audials,Audials,Audials_Helm.paa)
		NEW_501_Inf_Helm(calvary,Calvary,Cavalry_Helm.paa)
		NEW_501_Inf_Helm(corey,Corey,corey_helm.paa)
		NEW_501_Inf_Helm(coward,Coward,coward_helm.paa)
		NEW_501_Inf_Helm(crisis_alt,Alt Crisis,helmcrisis.paa)
		NEW_501_Inf_Helm(crusie,Crusie,Cruisie_helm.paa)
		NEW_501_Inf_Helm(csm_odin,CS-M Odin,Odins_CSM_Helm.paa)
		NEW_501_Inf_Helm(drifter,Drifter,helmdrifter.paa)
		NEW_501_Inf_Helm(eli,Eli,eli.paa)
		NEW_501_Inf_Helm(ewik,Ewik,ewik_helm.paa)
		NEW_501_Inf_Helm(glue,Glue,glue_helm.paa)
		NEW_501_Inf_Helm(grandpa,Grandpa,Grandpa_helm.paa)
		NEW_501_Inf_Helm(jupiter,Jupiter,Jupiter.paa)
		NEW_501_Inf_Helm(klown,Klown,helmklown.paa)
		NEW_501_Inf_Helm(koda,Koda,koda_helm.paa)
		NEW_501_Inf_Helm(legia,Legia,Legia_helm.paa)
		NEW_501_Inf_Helm(lissy,Lissy,Lissy.paa)
		NEW_501_Inf_Helm(lucky,Lucky,Lucky.paa)
		NEW_501_Inf_Helm(mags,Mags,Mags.paa)
		NEW_501_Inf_Helm(money,Money,Money_Helm.paa)
		NEW_501_Inf_Helm(murdock,Murdock,Murdock.paa)
		NEW_501_Inf_Helm(nekro,Nekro,Nekro.paa)
		NEW_501_Inf_Helm(nightingale,Nightingale,Nightingale.paa)
		NEW_501_Inf_Helm(odin,Odin,odin_helm.paa)
		NEW_501_Inf_Helm(orion,Orion,orion_helm.paa)
		NEW_501_Inf_Helm(peterson,Peterson,Peterson.paa)
		NEW_501_Inf_Helm(player,Player,Player_helm.paa)
		NEW_501_Inf_Helm(point,Point,helmpoint.paa)
		NEW_501_Inf_Helm(pompano,Pompano,Pompano_Helm.paa)
		NEW_501_Inf_Helm(raven,Raven,helmraven.paa)
		NEW_501_Inf_Helm(reck,Reck,Reck.paa)
		NEW_501_Inf_Helm(rexi,Rexi,RexiMk2.paa)
		NEW_501_Inf_Helm(roadboy,Roadboy,roadboy_helm.paa)
		NEW_501_Inf_Helm(royale,Royale,Royal.paa)
		NEW_501_Inf_Helm(sam,Sam,Sam_CP.paa)
		NEW_501_Inf_Helm(serge,Serge,serge_helm.paa)
		NEW_501_Inf_Helm(shade,Shade,shade_helm.paa)
		NEW_501_Inf_Helm(shadow,Shadow,Shadow.paa)
		NEW_501_Inf_Helm(shape,Shape,Shape.paa)
		NEW_501_Inf_Helm(silent,Silent,Silent.paa)
		NEW_501_Inf_Helm(skittles,Skittles,skittles.paa)
		NEW_501_Inf_Helm(spectre,Spectre,Spectre.paa)
		NEW_501_Inf_Helm(strill,Strill,Strill.paa)
		NEW_501_Inf_Helm(tee,Tee,Tee.paa)
		NEW_501_Inf_Helm(testie,Testhelmfortesting,Koda_test_helmet.paa)
		NEW_501_Inf_Helm(train,Train,Train.paa)
		NEW_501_Inf_Helm(tupiks,Tupiks,Tupiks.paa)
		NEW_501_Inf_Helm(tyler,Tyler,Tyler.paa)
		NEW_501_Inf_Helm(warlord,Warlord,warlord_helm.paa)
	
	//Lumanated Visor, Alphabetically, Ascending order
		NEW_501_Lumanated_Visor_Helm(crisis2,Crisis,Crisis.paa)
		NEW_501_Lumanated_Visor_Helm(euler,Euler,Euler_helm.paa)
		NEW_501_Lumanated_Visor_Helm(klein,Klein,Klein_Helm.paa)
		NEW_501_Lumanated_Visor_Helm(verax,Verax,Verax.paa)

		NEW_501_Lumanated_Visor_Alt_Texture_Path_Hide(meme,meme,memeland\meme1.paa)
		NEW_501_Lumanated_Visor_Helm_Hide(roasted_helm,Gayax,verTest.paa)

	//Spewcial, Alphabetically, Ascending order
		NEW_501_Inf_Helm_Hide(klownv2,Klown,helmklownv2.paa)
		NEW_501_Inf_Helm_Hide(rexi_v1,Rexi,Rexi_helm.paa)
};