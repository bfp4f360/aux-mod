#include "config_macros.hpp"
#include "../RD501_main/config_macros.hpp"

class CfgPatches
{
	class ADDON
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
	
			"A3_Data_F_Tank_Loadorder"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class cfgFunctions
{
	class concat_function(scripts)//This will be the name of the mods functions,in functionViewer.
	{
		tag=ADDON;
		class concat_function(functions)
		{
			class energy_recharge
			{
				file=SCRIPTPATH\energy_recharge.sqf
                //postInit = 1;
			};
		};
	};
	
};
class Extended_Init_EventHandlers 
{
	//class name of the object
    class CAManBase 
    {
    	//doesnt matter wat this is
        class add_recharge 
        {
            init = [_this select 0] spawn macro_fnc_name(energy_recharge);
        };
    };


};


class CfgVehicles
{
	class B_AssaultPack_blk;

	class SANDBOX_TEST_BAG:B_AssaultPack_blk//RD501_jumppack_base
	{
		scope=2;
		displayname="[Jumpy] OWO SANDBOX";

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

