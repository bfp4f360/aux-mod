#define COMPONENT jumppack
#include "../RD501_Main/config_macros.hpp"
#include "config_macros.hpp"

class CfgPatches
{
	class ADDON
	{
		author="Namenai";
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

class CfgVehicles
{
	class B_AssaultPack_blk;

	class jumppackClass(base):B_AssaultPack_blk//RD501_jumppack_base
	{
		scope=2;
		displayname="[Jumpy] OWO BASE JUMPPACK";

		isJumppack=1;
		spamDelay=1;

		energyCap=100;
		rechargeRate=4;

		effectScript = "RD501_cdv_21_effects";
		effectPoints = {
			{"spine3",{0, -.3, -.1}}
		};

		igniteSound={"RD501_Jumppack\sounds\cdv21Start.ogg"};
		landSound={"RD501_Jumppack\sounds\cdv21End.ogg"};
		idleSound={"RD501_Jumppack\sounds\cdv21Idle.ogg"};

		textureCatagory={default_texture_group};

		//{"name of jump",{forward velo(0),verticle velo(1),cost(2),angle(3),directional(4)(0,1)?,can prone jump(5)(0,1)?}}
		types_of_jumps = 
		{
			{"Forward Jump",{10.1,21.5,50,0,0,0},"single_jump"},
			{"Short Jump",{12,5,30,0,1,1},"single_jump"}
		};
		
		
	};


};






class cfgFunctions
{
	//tcw_fnc_jumppack_is_jumppack
	class concat_function(scripts)//This will be the name of the mods functions,in functionViewer.
	{
		tag=ADDON;

		class concat_function(functions)
		{
			
			post_init_fnc(init_data)
			
			normal_fnc(energy_recharge)
			normal_fnc(decide_jump)
			normal_fnc(jump)
			normal_fnc(has_jumppack)
			normal_fnc(get_energy_capacity)
			normal_fnc(proper_mod)
			normal_fnc(cycle_jump)
			normal_fnc(no_prone)
			normal_fnc(notify_recharge)
			normal_fnc(remove_effects)
			normal_fnc(landing_effect)
			normal_fnc(closed_arsenal)
			normal_fnc(add_recharge_frame_eh)
			normal_fnc(cba_loadout_eh)
			normal_fnc(show_energy)
			post_init_fnc(respawned)
			normal_fnc(init)

			post_init_fnc(handle_arsenal)
			post_init_fnc(cba_player_eh)
			post_init_fnc(jump_effects)
			post_init_fnc(cba_xeh)

			

		};

		class concat_function(keybinds)//This is where all keybinding files will be.
		{
			
			// class keybinds
			// {
			// 	file=function_path(keybinds)
			// 	postInit = 1;//So that all the controls can be set in the main arma 3 menu.
			// 	description="Script with all the keybinds for RD501 Jumppack";
			// };		

			post_init_fnc(keybinds)
		
		};


	};
	
};


	// class Man;
	// class CAManBase : Man
	// {
	// 	class ACE_SelfActions
	// 	{
			
	// 		class XXX_Jumppack_Remove_Effects
	// 		{
	// 			displayName = "Clear Jumppack Effects";
	// 			condition = "player call tcw_fnc_jumppack_is_jumppack";
	// 			statement = "[player] call tcw_fnc_jumppack_delete_attached_effects";
	// 			icon = "TCW_Jumppack\textures\fixJumpEffect.paa";
	// 			showDisabled = 0;
	// 			priority = 2.5;
	// 		};


	// 		// class ACE_Equipment
	// 		// {
	// 		// 	class TCW_Jumppack_Acklay_skin_set
	// 		// 	{
	// 		// 		displayName = "Acklay Set Skin";
	// 		// 		exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
	// 		// 		condition = "[player,'acklay'] call tcw_texture_condition";
	// 		// 		showDisabled = 0;
	// 		// 		priority = 2.5;
	// 		// 		icon = "TCW_Jumppack\textures\acklay_skin_set\acklay_skin_set_logo.paa";
	// 		// 		class acklay_1_1
	// 		// 		{
	// 		// 			displayName = "Acklay 1-1";
	// 		// 			exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
	// 		// 			condition = "player call tcw_fnc_jumppack_is_jumppack";
	// 		// 			statement = "(unitBackpack player) setObjectTextureGlobal [0, 'TCW_Jumppack\textures\acklay_skin_set\ack_1_1.paa']";
	// 		// 			showDisabled = 0;
	// 		// 			runOnHover = 0;
	// 		// 			priority = 2.5;
						
	// 		// 		};
	// 		// 		class acklay_1_2:acklay_1_1
	// 		// 		{
	// 		// 			displayName = "Acklay 1-2";
	// 		// 			statement = "(unitBackpack player) setObjectTextureGlobal [0, 'TCW_Jumppack\textures\acklay_skin_set\ack_1_2.paa']";
						
	// 		// 		};
	// 		// 		class acklay_1_3:acklay_1_1
	// 		// 		{
	// 		// 			displayName = "Acklay 1-3";
	// 		// 			statement = "(unitBackpack player) setObjectTextureGlobal [0, 'TCW_Jumppack\textures\acklay_skin_set\ack_1_3.paa']";
						
	// 		// 		};
	// 		// 		class acklay_1_4:acklay_1_1
	// 		// 		{
	// 		// 			displayName = "Acklay 1-4";
	// 		// 			statement = "(unitBackpack player) setObjectTextureGlobal [0, 'TCW_Jumppack\textures\acklay_skin_set\ack_1_4.paa']";
						
	// 		// 		};
	// 		// 		class acklay_hq:acklay_1_1
	// 		// 		{
	// 		// 			displayName = "Acklay HQ";
	// 		// 			statement = "(unitBackpack player) setObjectTextureGlobal [0, 'TCW_Jumppack\textures\acklay_skin_set\ack_hq.paa']";
						
	// 		// 		};
	// 		// 		class JT_12_reset:acklay_1_1
	// 		// 		{
	// 		// 			displayName = "Reset";
	// 		// 			statement = "(unitBackpack player) setObjectTextureGlobal [0, 'TCW_Jumppack\textures\JT_21.paa']";
						
	// 		// 		};
	// 		// 	};

	// 		// 	class TCW_Jumppack_Razor_skin_set
	// 		// 	{
	// 		// 		displayName = "Razor Set Skin";
	// 		// 		exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
	// 		// 		condition = "[player,'razor'] call tcw_texture_condition";
	// 		// 		showDisabled = 0;
	// 		// 		priority = 2.5;
	// 		// 		icon = "TCW_Jumppack\textures\acklay_skin_set\acklay_skin_set_logo.paa";
	// 		// 		class razor_krayt
	// 		// 		{
	// 		// 			displayName = "Razor Krayt";
	// 		// 			exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
	// 		// 			condition = "player call tcw_fnc_jumppack_is_jumppack";
	// 		// 			statement = "(unitBackpack player) setObjectTextureGlobal [0, 'TCW_Jumppack\textures\razor_skin_set\CDV_21_Krayt.paa']";
	// 		// 			showDisabled = 0;
	// 		// 			runOnHover = 0;
	// 		// 			priority = 2.5;
						
	// 		// 		};
				
	// 		// 		class CDV_grey_reset:razor_krayt
	// 		// 		{
	// 		// 			displayName = "Reset";
	// 		// 			statement = "(unitBackpack player) setObjectTextureGlobal [0, 'TCW_Jumppack\textures\razor_skin_set\CDV21_Grey.paa']";
						
	// 		// 		};
	// 		// 	};

	// 		// 	// class TCW_Jumppack_Gen_Inf_skin_set
	// 		// 	// {
	// 		// 	// 	displayName = "Gen Inf. Set Skin";
	// 		// 	// 	exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
	// 		// 	// 	condition = "[player,'general inf'] call tcw_texture_condition ";
	// 		// 	// 	showDisabled = 0;
	// 		// 	// 	priority = 2.5;
				
	// 		// 	// 	class acklay_1_1
	// 		// 	// 	{
	// 		// 	// 		displayName = "Gen Inf 1";
	// 		// 	// 		exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
	// 		// 	// 		condition = "player call tcw_fnc_jumppack_is_jumppack";
	// 		// 	// 		statement = "(unitBackpack player) setObjectTextureGlobal [0, 'TCW_Jumppack\textures\ack_1_1.paa']";
	// 		// 	// 		showDisabled = 0;
	// 		// 	// 		runOnHover = 0;
	// 		// 	// 		priority = 2.5;
						
	// 		// 	// 	};
				
	// 		// 	// };
	// 		// };
			
	// 	};
	// };