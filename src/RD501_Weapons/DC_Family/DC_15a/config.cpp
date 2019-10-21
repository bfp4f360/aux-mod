#define COMPONENT DC_15a
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(dc_15a)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(DC,15a_base),
			macro_new_weapon(DC,15a),
			macro_new_weapon(DC,15a_gl),
			macro_new_weapon(DC,15a_LE),
			macro_new_weapon(DC,15a_mod_0)
		};
	};
};

class cfgWeapons 
{
	class Rifle_Long_Base_F;
	class SWOP_BlasterRifle_Base:Rifle_Long_Base_F
	{
		//class Secondary;
		class WeaponSlotsInfo;
		// scopeArsenal = 0; 
		// weaponPoolAvailable=0;
	};

	class SWOP_DC15ABlasterRifle:SWOP_BlasterRifle_Base
	{
		
		class FlashLight;
		class Single;
		class Burst;
		class FullAuto;
		class Secondary;
		scopeArsenal = 0;
		weaponPoolAvailable=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};
		

	};

	class SWOP_DC15ABlasterRifle_mod0:SWOP_DC15ABlasterRifle
	{
		scopeArsenal = 0;
		weaponPoolAvailable=0;
		class Secondary:Secondary
		{
			class Single;
		};
	};
	
	class SWOP_DC15AGL:SWOP_DC15ABlasterRifle
	{
		scopeArsenal = 0;
		weaponPoolAvailable=0;
		class Secondary:Secondary
		{
			class Single;
		};

		class EGLM;

	};

	class SWOP_DC15ABlasterRifle_mod1: SWOP_DC15ABlasterRifle
	{
		scopeArsenal = 0;
		weaponPoolAvailable=0;
		class Secondary:Secondary
		{
			class Single;
		};
	}

	#include "DC_15a__LE_rifle.hpp"
	#include "DC_15a__GL_rifle.hpp"
	#include "DC_15a__mod0_rifle.hpp"
	#include "DC_15a_rifle.hpp"
};
