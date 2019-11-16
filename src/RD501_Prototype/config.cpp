#include "config_macros.hpp" // my config macro lib
class CfgPatches
{
	class macro_patch_name(weapon_prototypes)
	{
		author=macro_authors_ppl
		requiredAddons[]=
		{
		
			"A3_Data_F_Enoch_Loadorder",//Load all of arma first
			"sci_dc15a",
			"sci_dc15gl",
			"sci_dc15s",
			"sci_z6",
			"sci_valken38a"
		
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_scope(x4_dc15_acog),
			macro_new_scope(x4_x12_dc15_le),
			macro_new_scope(x4_dc15_mod0_acog)
		
		};
		
	};
};

class CfgRecoils
{
	
	class recoil_SMG_03;
	class Default;
	class recoil_default;

	class macro_new_recoil(z6): recoil_default
	{
		muzzleOuter[] = {"0.2*0.2", "1", "0.3*.8", "0.3*1"};
		kickBack[] = {"0.02*1.2", "0.04*1.2"};
		temporary = "0.02";
	};
	
	class macro_new_recoil(dc15a_rifle)
	{
		kickBack[] = {0.012,0.02};
		muzzleInner[] = {0,0,0.04,0.04};
		muzzleOuter[] = {.07,.4,.04,.10};
		permanent = 0.12;
		temporary = 0.03;
	};

	class macro_new_recoil(dc15a_mod_0_prone): recoil_default
	{
		muzzleOuter[] = {0.05, 0.2, 0.2, 0.2};
		kickBack[] = {0.01, 0.03};
		temporary = 0.005*0.8;
	};

	class  macro_new_recoil(dc15a_mod_0): recoil_default
	{
		muzzleOuter[] = {0.1*1.3, 0.2*1.3, 0.2*1.2, 0.2*1.2};
		kickBack[] = {0.01*1.5, 0.03*1.5};
		temporary = 0.005*1;
	};

	class  macro_new_recoil(dc15s): Default
	{
		muzzleInner[]={0,0,0.1,0.1};
		permanent=0.1;

		muzzleOuter[]={0.1,0.13,0.2,0.2};
		kickBack[]={0.004,0.01};
		temporary=0.004;
	};


};

class CfgWeapons
{	
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class macro_new_scope(x4_dc15_acog): itemCore
	{
		scope = 2;
		author = "RD501";
		inertia = 0.1;
		displayName = "DC-15 Holo (x4-x6)";
		picture = "\SWOP_Main\SWOP_Rifles\SWOP_Blaster\data\ui\E11_Scope.paa";
		model = "Scope\holoscopedc15A.p3d";
		descriptionShort = "DC-15 Holo (x4) Eotech";
		weaponInfoType = "RscOptics_nightstalkerbluenorange";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 4;
			RMBhint = "DC-15A Scope (x4)";
			optics = 1;
			weaponInfoType = "RscOptics_nightstalkerbluenorange";
			modelOptics = "Scope\4x_xm8.p3d";
			class OpticsModes
			{
				class Iron
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsPPEffects[] = {"", ""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin =  macro_scope_magnification(1.6);
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					discreteInitIndex = 0;
					modelOptics = "\A3\Weapons_F\empty";
	
				};
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = macro_scope_magnification(4);
					opticsZoomMax = macro_scope_magnification(1);
					opticsZoomInit = macro_scope_magnification(6);
					discreteinitIndex = 0;
					discretefov[] = {macro_scope_magnification(4),macro_scope_magnification(6)};
					discreteDistance[] = {100, 300, 400, 500, 600, 700, 800, 900, 1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					visionMode[] = {"Normal", "NVG"};
					thermalMode[] = {1, 2};
					memoryPointCamera = "opticView";
					modelOptics = "Scope\4x_xm8.p3d";
					weaponInfoType = "RscOptics_nightstalkerbluenorange";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0;//1;
					cameraDir = "";
				};
			};
		};
	};

	class macro_new_scope(x4_x12_dc15_le): itemCore
	{
		scope = 2;
		author = "Namenai";
		inertia = 0.1;
		displayName = "Custom DC-15A Scope x6-x12 scope";
		picture = "\SWOP_Main\SWOP_Rifles\SWOP_Blaster\data\ui\E11_Scope.paa";
		model = "SW_CloneWarsWeapons\DCrifles\dc15azoomscopeX10range.p3d";
		descriptionShort = "DC-15A LE Scope (x12 max Range)";
		weaponInfoType = "RscOptics_nightstalkerblue";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 4;
			RMBhint = "DC-15A LE Scope x6-x12 scope";
			optics = 1;
			weaponInfoType = "RscOptics_nightstalkerblue";//make diffrent scope?
			modelOptics = "Scope\a180.p3d";
			class OpticsModes
			{
				class Snip
				{
					modelOptics = "Scope\a180.p3d";
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = macro_scope_magnification(12);
					opticsZoomMax = macro_scope_magnification(1);
					opticsZoomInit = macro_scope_magnification(6);
					discretefov[] = {macro_scope_magnification(6),macro_scope_magnification(12)};
					discreteinitIndex = 0;
					discreteDistance[] = {100, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000,4000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 4000;
					visionMode[] = {"Normal", "NVG","TI"};
					thermalMode[] = {1};
					memoryPointCamera = "opticView";
					weaponInfoType = "RscOptics_nightstalkerblue";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0;
					cameraDir = "";
				};
				class Iron
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsPPEffects[] = {"", ""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					discreteInitIndex = 0;
					modelOptics = "\A3\Weapons_F\empty";
				};
			};
		};
	};

	class macro_new_scope(x4_dc15_mod0_acog): itemCore
	{
		scope = 2;
		author = "SWOP";
		inertia = 0.1;
		displayName = "DC-15A Mod 0 Scope (x4)";
		picture = "\SWOP_Main\SWOP_Rifles\SWOP_Blaster\data\ui\E11_Scope.paa";
		model = "SW_CloneWarsWeapons\DCrifles\dc15azoomscope.p3d";
		descriptionShort = "DC-15A Scope (x4)";
		weaponInfoType = "RscOptics_nightstalkerbluenorange";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 4;
			RMBhint = "DC-15A Scope (x4)";
			optics = 1;
			weaponInfoType = "RscOptics_nightstalkerbluenorange";
			modelOptics = "Scope\4x_xm8.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = macro_scope_magnification(4);
					opticsZoomMax = macro_scope_magnification(1);
					opticsZoomInit = macro_scope_magnification(4);
					discreteinitIndex = 0;
					discretefov[] = {macro_scope_magnification(4)};
					discreteDistance[] = {100, 300, 400, 500, 600, 700, 800, 900, 1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					visionMode[] = {"Normal", "NVG"};
					thermalMode[] = {1, 2};
					memoryPointCamera = "opticView";
					modelOptics = "Scope\4x_xm8.p3d";
					weaponInfoType = "RscOptics_nightstalkerbluenorange";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0;
					cameraDir = "";
				};
				class Iron
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsPPEffects[] = {"", ""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					discreteInitIndex = 0;
					modelOptics = "\A3\Weapons_F\empty";
				};
			};
		};
	};
};
class CfgMagazineWells
{
	class Republic_Universal_Magazine_Well
	{
		Republic_Universal_Magazine[]=
		{
			macro_new_mag(Republic_Universal_Magazine,30),
			"DCStun_Mag"
		};
	};
	class Republic_GL_Magazine_Well
	{
		Republic_GL_Magazines[]=
		{
			macro_new_mag(proto_HE_GL,3),
			macro_new_mag(proto_AP_GL,2),

			macro_new_mag(flare_white,3),

			macro_new_mag(flare_red,3),
			macro_new_mag(flare_green,3),
			macro_new_mag(flare_blue,3),

			macro_new_mag(flare_cyan,3),
			macro_new_mag(flare_purple,3),
			macro_new_mag(flare_yellow,3),
			macro_new_mag(flare_orange,3),
			
			macro_new_mag(flare_cir,3),
		

			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"ACE_HuntIR_M203"
		};
	};
};
class CfgMagazines
{	
	class CA_Magazine;
	class macro_new_mag(Republic_Universal_Magazine,30): CA_Magazine
	{
		author = "RD501";
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture = "\z\acex\addons\field_rations\ui\item_canteen_co.paa";
		displayName = "60Rnd Republic Universal Magazine";
		ammo = macro_new_ammo(DC_15a);//macro_new_ammo(Republic_Universal_Ammo)
		tracersEvery = 1;
		count = 60;
		descriptionShort = "60Rnd R.U.M";
		mass = 30;
		initSpeed = 500;
	};

	// class macro_new_mag(DC15a_standard,30): macro_new_mag(Republic_Universal_Magazine,30)
	// {
	// 	ammo = macro_new_ammo(DC_15a)
	// 	initSpeed = 500;
	// 	displayName = "30Rnd DC-15A Rifle Magazine";
	// 	descriptionShort = "30rnd Magazine";
	// 	count = 30;
	// 	mass = 40;
	// 	picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
	// };

	class macro_new_mag(DC15a_LE,20): macro_new_mag(Republic_Universal_Magazine,30)
	{
		ammo = macro_new_ammo(DC_15a_le)
		initSpeed = 1000;//666.66;
		displayName = "20Rnd DC-15A LE Magazine";
		descriptionShort = "20rnd Magazine";
		count = 20;
		mass = 70;
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
	};

	class macro_new_mag(DC_15a_le_HE,5): macro_new_mag(Republic_Universal_Magazine,30)
	{
		ammo = macro_new_ammo(DC_15a_le_HE)
		initSpeed = 1000;//666.66;
		displayName = "20Rnd DC-15A LE HE Magazine";
		descriptionShort = "20rnd Magazine";
		count = 5;
		mass = 90;
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
	};

	class macro_new_mag(DC15a_mod_0,200): macro_new_mag(Republic_Universal_Magazine,30)
	{
		ammo = macro_new_ammo(DC_15a_mod0)
		initSpeed = 700;
		displayName = "200Rnd DC-15A Mod 0 Magazine";
		descriptionShort = "200rnd Magazine";
		count = 200;
		mass = 70;
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
	};

	class macro_new_mag(DC15s,100): macro_new_mag(Republic_Universal_Magazine,30)
	{
		ammo = macro_new_ammo(DC_15s)
		initSpeed = 450;
		displayName = "100Rnd DC-15S Carbine Magazine";
		descriptionShort = "100rnd Magazine";
		count = 100;
		mass = 20;
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
	};

	class macro_new_mag(z6,300): macro_new_mag(Republic_Universal_Magazine,30)
	{
		ammo = macro_new_ammo(z6)
		initSpeed = 500;
		displayName = "300Rnd Z6 Drum";
		descriptionShort = "300rnd Drum";
		count = 300;
		mass = 90;
		picture = "\SW_CloneWarsWeapons\SW_Z6\UI\SW_Z6-mag.paa";
	};

	#include "_mags/flares.hpp"

	class 1Rnd_HE_Grenade_shell;
	class macro_new_mag(proto_HE_GL,3): 1Rnd_HE_Grenade_shell
	{
		author = "RD501";
		scope = 2;
		type = 16;
		displayName = "3Rnd HE DC-15A Grenades";
		displayNameShort = "3Rnd HE DC-15A";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = macro_new_ammo(40mm_HE_GL);
		count = 3;
		initSpeed = 80;
		nameSound = "";
		descriptionShort = "3Rnd HE DC-15A Grenade";
		mass = 20;
	};

	class macro_new_mag(proto_AP_GL,2): 1Rnd_HE_Grenade_shell
	{
		author = "RD501";
		scope = 2;
		type = 16;
		displayName = "2 Rnd AP DC-15A Grenades";
		displayNameShort = "2 Rnd AP DC-15A";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = macro_new_ammo(40mm_AP_GL)
		initSpeed = 80;//120;
		count = 2;
		nameSound = "";
		descriptionShort = "2Rnd AP DC-15A Grenade";
		//mass = 30;
		mass = 15;
	};

	class 2Rnd_12Gauge_Pellets;
	class macro_new_mag(shotgun_test,10): 2Rnd_12Gauge_Pellets
	{
		author = "RD501";
		scope = 2;
		displayName = "12 Gauge 2Rnd Pellets";
		displayNameShort = "Pellets";
		descriptionShort = "Pellets";
		picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_CA.paa";
		ammo = macro_new_ammo(shotgun_submunition)
		initSpeed = 380;
		count = 10;
		mass = 6;
		modelSpecialIsProxy = 1;
		modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_12ga_hunter_2rnd";
		hiddenSelections[] = {"camo", "cap1"};
		hiddenSelectionsTextures[] = {"\a3\Weapons_F_Enoch\MagazineProxies\data\12GA_Pellets_CO.paa"};
	};
};

class CfgAmmo
{
	class SWOP_DC15ABlasterRifle_L_Ammo;
	class SCI_B_bluePlasma_762;
	class FlareBase;
	class G_40mm_HE;
	class macro_new_ammo(Republic_Universal_Ammo):SWOP_DC15ABlasterRifle_L_Ammo
	{
		macro_ammo_no_fric
		coefGravity=0.12;//0.050000001;
		cartridge = "FxCartridge_slug";
		effectFly = "SWOP_BlueLaserEffect";
		model="sci_weaponsMain\Data\tracer_blue.p3d";
		indirectHit = 0.0;
		indirectHitRange = 0.0;
		explosive = 0.0;

		hit = 22;
		waterFriction = -0.001;//
		caliber = 2;
		tracerScale = 1.1;
		tracerStartTime = 0;
		tracerEndTime = 2;
		timeToLive = 4;


		soundSetBulletFly[]= 
		{ 
			"PlasmaFlyBy_SoundSet" 
		}; 
		class HitEffects 
		{ 
			Hit_Foliage_green="ImpactPlasma_RD501"; 
			Hit_Foliage_Dead="ImpactPlasma_RD501"; 
			Hit_Foliage_Green_big="ImpactPlasma_RD501"; 
			Hit_Foliage_Palm="ImpactPlasma_RD501"; 
			Hit_Foliage_Pine="ImpactPlasma_RD501"; 
			hitFoliage="ImpactPlasma_RD501"; 
			hitGlass="ImpactPlasma_RD501"; 
			hitGlassArmored="ImpactPlasma_RD501"; 
			hitWood="ImpactPlasma_RD501"; 
			hitMetal="ImpactPlasma_RD501"; 
			hitMetalPlate="ImpactPlasma_RD501"; 
			hitBuilding="ImpactPlasma_RD501"; 
			hitPlastic="ImpactPlasma_RD501"; 
			hitRubber="ImpactPlasma_RD501"; 
			hitTyre="ImpactPlasma_RD501"; 
			hitConcrete="ImpactPlasma_RD501"; 
			hitMan="ImpactPlasma_RD501"; 
			hitGroundSoft="ImpactPlasma_RD501"; 
			hitGroundRed="ImpactPlasma_RD501"; 
			hitGroundHard="ImpactPlasma_RD501"; 
			hitWater="ImpactPlasma_RD501"; 
			hitVirtual="ImpactPlasma_RD501"; 
		}; 
		class CamShakeFire 
		{ 
			power=0; 
			duration=0; 
			frequency=0; 
			distance=0; 
		}; 
		class CamShakePlayerFire 
		{ 
			power=0; 
			duration=0; 
			frequency=0; 
			distance=0; 
		}; 
		
	};

	// class macro_new_ammo(DC_15a):macro_new_ammo(Republic_Universal_Ammo)
	// {
	// 	hit = 16;
	// 	//caliber = 3.8;
	// };

	class macro_new_ammo(DC_15a_le):macro_new_ammo(Republic_Universal_Ammo)
	{
		hit = 40;
		coefGravity=0.05;	
	};

	class macro_new_ammo(DC_15a_le_HE):macro_new_ammo(Republic_Universal_Ammo)
	{
		hit = 10;
		coefGravity=0.3;	

		indirectHit = 100.0;
		indirectHitRange = 5.0;
		explosive = 1.0;
	};

	class macro_new_ammo(DC_15a_mod0):macro_new_ammo(Republic_Universal_Ammo)
	{
		hit = 9//14;
		coefGravity=0.07;
	};

	class macro_new_ammo(DC_15s):macro_new_ammo(Republic_Universal_Ammo)
	{
		hit = 6;
		coefGravity=0.2;
		caliber = 1;
	};

	class macro_new_ammo(z6):macro_new_ammo(Republic_Universal_Ammo)
	{
		hit = 25;
		coefGravity=0.4;
	};

	#include "_ammo/flares.hpp"

	class macro_new_ammo(40mm_HE_GL): G_40mm_HE
	{
		explosionSoundEffect = "DefaultExplosion";
		
		//model = "\A3\weapons_f\ammo\UGL_slug";
		model = "SW_AV7\ion.p3d";
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 5;
		warheadName = "HE";
		visibleFire = 1;
		timeToLive = 38;
		audibleFire = 30;
		visibleFireTime = 3;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001;

		fuseDistance = 2;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 4;
	};

	class macro_new_ammo(40mm_AP_GL): G_40mm_HE
	{
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		model = "\GeonFighter\LaserGeon.p3d";
		hit = 300;
		indirectHit = 5;
		indirectHitRange = 1;
	
		warheadName = "HE";
		visibleFire = 1;
		audibleFire = 30;
		visibleFireTime = 3;
	
		timeToLive =30;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		explosive = 0.0001;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001;

		fuseDistance = .5;
		// whistleDist = 16;
		// typicalSpeed = 185;
		// caliber = 5;
		
		// SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		// ace_frag_enabled = 0;
		// ace_frag_force = 0;
		// ace_frag_classes[] = {"ace_frag_tiny_HD"};
		// ace_frag_metal = 0;
		// ace_frag_charge = 0;
		// ace_frag_gurney_c = 0;
		// ace_frag_gurney_k = "1/2";
		// ace_rearm_caliber = 39;
	};

	class B_12Gauge_Pellets_Submunition_Deploy;
	class macro_new_ammo(shotgun_submunition_deploy):B_12Gauge_Pellets_Submunition_Deploy
	{
		airFriction = -0.0067;
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 360;
		deflecting = 35;
	};
	class B_12Gauge_Pellets_Submunition;
	class macro_new_ammo(shotgun_submunition): B_12Gauge_Pellets_Submunition
	{
		cost = 1;
		hit = 20;
		simulationStep = 0.0001;
		cartridge = "";
		submunitionAmmo = macro_new_ammo(shotgun_submunition_deploy)
		submunitionConeType[] = {"poissondisc", 18};
		submunitionConeAngle = 0.8;
		triggerSpeedCoef[] = {0.85, 1};
		triggerTime = 0.001;
		model = "\SWOP_Main\Effects\Tracer\LaserRed";
	};
};

class ImpactPlasma_RD501
{
	class Light1
	{
		simulation="light";
		type="PlasmaLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class SparksLight
	{
		simulation="light";
		type="SparksLightPlasma";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="ImpactSparksPlasma1_RD501";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	// class ImpactSparks2
	// {
	// 	simulation="particles";
	// 	type="ImpactSparksPlasma2";
	// 	position[]={0,0,0};
	// 	intensity=1;
	// 	interval=1;
	// 	lifeTime=0.2;
	// };
	class ImpactSmoke
	{
		simulation="particles";
		type="ImpactSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};

class CfgCloudlets
{
	class Default;
	#include "_effects/spark.hpp"
};

class CfgLights
{
	#include "_lights/spark_lights.hpp"
};

