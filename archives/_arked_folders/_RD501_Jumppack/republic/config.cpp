// class CfgPatches
// {
// 	class xxx_Jumppack_CDV
// 	{
// 		addonRootClass="xxx_jumppack";
// 		requiredAddons[]=
// 		{
// 			"xxx_jumppack"
// 		};
// 		requiredVersion=0.1;
// 		units[]={};
	
// 	};
// };

// class CfgVehicles
// {
// 	class XXX_jumppack_base;

// 	class TCW_Jumppack_CDV_Base:TCW_Jumppack_Base
// 	{
// 		maximumLoad = 500;
// 		displayName = "CDV-21 [Base]";
// 		tcw_jumpEffect= "TCW_CDV_21_Effect";
// 		tcw_jumpEffectMemPoints[] = {{"spine3",{-.1, 0, -.1}}};

// 		tcw_sound_ignite="TCW_Jumppack\sounds\cdv21Start.ogg";
// 		tcw_sound_land="TCW_Jumppack\sounds\cdv21End.ogg";
// 		tcw_sound_idle="TCW_CDV21_Idle_Sound";

// 		tcw_jumppackSpamDelay=.2;
// 		model = "SWOP_clones\clonebackDV.p3d";

// 		hiddenSelections[] = {"Camo1"};
// 		hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec2_co.paa"};

// 	};


	

	
// 	class TCW_Jumppack_CDV_Titan_Cap:TCW_Jumppack_CDV_Base
// 	{
// 		scope=2;
// 		displayName = "CDV-21 [Titan Mode]";
// 		tcw_jumppackSpamDelay=2;

// 		tcw_energyCapacity=100;
// 		tcw_energyRecharge=5;

// 		tcw_jumpTypes[] = 
// 		{
// 			{"Forward Jump",{10.1,21.5,50,0,{"TCW_Jumppack\sounds\cdv21.ogg"},0,1}},
// 			{"Short Jump",{12,10,30,0,{"TCW_Jumppack\sounds\cdv21.ogg"},0,0}},
// 			{"Directional Jump",{18,5,30,0,{"TCW_Jumppack\sounds\cdv21.ogg"},1,1}}
// 		};
// 		hiddenSelectionsTextures[] = {"TCW_Jumppack\textures\razor_skin_set\CDV21_Grey.paa"};
		
// 	};

// 	class TCW_Jumppack_CDV_Pilot:TCW_Jumppack_CDV_Titan_Cap
// 	{
// 		tcw_jumppackSpamDelay=.2;
// 		displayName = "CDV-21PP [Pilot Mode]";
// 		maximumLoad = 550;
// 		tcw_energyCapacity=100;
// 		tcw_energyRecharge=6;

// 		tcw_jumpTypes[] = 
// 		{
// 			{"Directional Jump",{18,5,30,0,{"TCW_Jumppack\sounds\cdv21.ogg"},1,0}}
// 		};
		
// 		tf_encryptionCode = "tf_west_radio_code";
// 		tf_dialog = "anarc210_radio_dialog";
// 		tf_subtype = "digital_lr";
// 		tf_range = 20000;
// 		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
// 		tf_hasLRradio = 1;
// 		hiddenSelectionsTextures[] = {"TCW_Jumppack\textures\razor_skin_set\CDV21_Grey.paa"};
// 		tcw_skin_group="razor";
// 	};


// 	class Sound;
// 	class TCW_CDV21_Idle_Sound: Sound
// 	{
// 		author = "namenai";
// 		scope = 2;
// 		sound = "TCW_CDV21_Idle_SFX";
// 		displayName = "CDV 21 Ignition Idle Effect";
// 	};
// };

// class CfgSFX
// {
// 	class TCW_CDV21_Idle_SFX
// 	{
// 		sounds[]={"sound1"};
// 		name="TCWcdv21IgnitionSound";
// 		sound1[]={"TCW_Jumppack\sounds\cdv21Idle.ogg", 4, 1,400,1,0,0,0};
// 		empty[]={"",0,0,0,0,0,0,0};
// 	};
// };