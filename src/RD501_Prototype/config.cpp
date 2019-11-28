#include "config_macros.hpp" // my config macro lib
#include "../RD501_main/config_macros.hpp"
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

class CfgMagazineWells
{
	#include "_magwell/magwell.hpp"
};
class CfgMagazines
{	
	class CA_Magazine;
	class 1Rnd_HE_Grenade_shell;
	
	#include "_mags/core_mags.hpp"

	#include "_mags/flares.hpp"

	class 2Rnd_12Gauge_Pellets;
	#include "_mags/shotgun.hpp"
	
};

class CfgAmmo
{
	class SWOP_DC15ABlasterRifle_L_Ammo;
	class SCI_B_bluePlasma_762;
	class FlareBase;
	class G_40mm_HE;
	
	#include "_ammo/core_ammo.hpp"
	// class macro_new_ammo(DC_15a):macro_new_ammo(Republic_Universal_Ammo)
	// {
	// 	hit = 16;
	// 	//caliber = 3.8;
	// };

	

	#include "_ammo/flares.hpp"

	

	// class  macro_new_ammo(test_sub_deplopy):G_40mm_HE
	// {
	// 	model = "\SWOP_Main\Effects\Tracer\LaserBlue";
	// 	effectFly = "SWOP_BlueLaserEffect";

	// 	airFriction = -0.0067;
	// 	hit = 90;
	// 	indirectHit = 0;
	// 	indirectHitRange = 0;
	// 	typicalSpeed = 360;
	// 	deflecting = 35;

	// 	indirectHit = 15;
	// 	indirectHitRange = 1;

	// 	deflecting = 0;
	// 	fuseDistance = 0;
	// };

	class B_12Gauge_Pellets_Submunition_Deploy;
	#include "_ammo/shotgun.hpp"
};

class CfgCloudlets
{
	class ImpactSparksPlasma1;
	class ImpactSparksPlasma2;
	class ImpactSmoke;
	class  macro_new_cloudlet(impack_spark_plasma):ImpactSparksPlasma1
	{
		interval=0.0008;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 300",
			"( - inDirY * 2 + surfNormalY / 2) * inSpeed / 300",
			"( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 300"
		};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=0.30000001;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,6,4,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=.5;
		position[]={0,0,0};
		positionVar[]={0.001,0.01,0.01};
		moveVelocityVar[]={1,1.5,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	}
	class macro_new_cloudlet(impack_spark_plasma2):ImpactSparksPlasma2
	{
		size[] = {0.25, 0.125, 0};
	};

	class macro_new_cloudlet(impack_smoke):ImpactSmoke
	{
		interval = 0.008;
		size[] = {0.3, 0.5};
		sizeCoef = 0.8;
	};
};
class CfgLights
{
	
};

class macro_new_complex_effect(impack_plasma)
{
	class Light1
	{
		simulation = "light";
		type = "PlasmaLight";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class SparksLight
	{
		simulation = "light";
		type = "SparksLightPlasma";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};

	class ImpactSparks1
	{
		simulation = "particles";
		type =  macro_new_cloudlet(impack_spark_plasma);
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSparks2
	{
		simulation = "particles";
		type = macro_new_cloudlet(impack_spark_plasma2);
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};

	class ImpactSmoke
	{
		simulation = "particles";
		type = macro_new_cloudlet(impack_smoke);
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};