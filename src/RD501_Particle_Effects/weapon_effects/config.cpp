#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(weapon_impact_effects)
	{
		addonRootClass = macro_patch_name(particle_effects)
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			macro_patch_name(particle_effects)
		};
		version = 1;
		author[] = {"RD501"};
	};
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