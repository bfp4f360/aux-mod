#define COMPONENT jumppack_effects
#include "../../RD501_Main/config_macros.hpp"
#include "../config_macros.hpp"

class CfgPatches
{
	class ADDON
	{
		addonRootClass=ADD_PREFIX(jumppack);
		requiredAddons[]=
		{
			ADD_PREFIX(jumppack)
		};
		requiredVersion=0.1;
		units[]={};
	
	};
};

class CfgCloudlets
{

	class Default;
	class TCW_Jumppack_Fire: Default
	{
		interval = 0.003;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.3;
		moveVelocity[] = {0, 0.15, 0};
		rotationVelocity = 0;

		weight = .5;
		volume = 1;
		rubbing = 0.17;


		// weight = 0.05;
		// volume = 0.04;
		// rubbing = 0.16;
		size[] = {0.1, 0};
		sizeCoef = 1;
		color[] = {{.3, 0.3, 1, -6.5}, {.3, 0.3, 1, -6}, {.3, 0.3, 1, -5.5}, {.3, 0.3, 1, -4.5}};//{{1, 0.6, 0.6, -80}, {1, 0.6, 0.6, -80}, {0, 0, 0, 0}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.15;
		position[] = {0, 0, 0};
		positionVar[] = {0.018, 0.08, 0.018};
		moveVelocityVar[] = {0.03, 0.09, 0.03};
		rotationVelocityVar = 0;
		sizeVar = 0.06;
		colorVar[] = {0.0, 0.1, 0.1, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class TCW_Jumppack_Spark: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3.5;
		moveVelocity[] = {0, 1.5, 0};
		rotationVelocity = 1;
		weight = 1.05;
		volume = 1;
		rubbing = 0.17;
		size[] = {0.1, 0.1, 0.1, 0.1, 0.1, 0.08, 0.08, 0.08, 0.08, 0};
		color[] = {{.2, 0.2, 1, -6.5}, {.2, 0.2, 1, -6}, {.2, 0.2, 1, -5.5}, {.2, 0.2, 1, -4.5}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 0.55;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 1;
		colorCoef[] = {1, 1, 1, 1};
		animationSpeedCoef = 1;
		lifeTimeVar = 2.5;
		positionVar[] = {0, 0.2, 0};
		MoveVelocityVar[] = {0.2, 1, 0.2};
		rotationVelocityVar = 2;
		sizeVar = 0.04;
		colorVar[] = {0, 0.15, 0.15, 0};
		randomDirectionPeriodVar = 0.3;
		randomDirectionIntensityVar = 0.15;
	};

	class TCW_Jumppack_Smoke: Default
	{
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.8;
		moveVelocity[] =  {0, 1.5, 0};
		rotationVelocity = 1;
		weight = 1.05;
		volume = 1;
		rubbing = 0.17;
		size[] = {0.3, 0.7, 1, 1.2, 1.4, 1.6, 1.8};
		color[] = {{0.9, 0.9, 0.9, 0.08}, {0.9, 0.9, 0.9, 0.036}, {0.9, 0.9, 0.9, 0.012}, {0.9, 0.9, 0.9, 0.001}};
		animationSpeed[] = {1.2};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 1.2;
		colorCoef[] = {1, 1, 1, 1};
		animationSpeedCoef = 1;
		position[] = {0,0,0};
		lifeTimeVar = 0;
		positionVar[] = {0, 0, 0};
		MoveVelocityVar[] = {1, 1, 1};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};



	//
	class TCW_Jumppack_Fire_Blue:TCW_Jumppack_Fire
	{
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		angleVar = 0;
		size[] ={0.2,0.4,0.1};
		color[] = {{0,0,1,-1},{0,0,1,-1},{0.154776,0.145711,1,-1}};
		particleFSLoop = 0;
		particleShape = "\A3\data_f\cl_exp";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		animationName = "";
		particleType = "Billboard";
	};

	class TCW_Jumppack_Fire_Blue_Pulse:TCW_Jumppack_Fire
	{
		interval = 0.003;
		circleRadius = .1;
		circleVelocity[] = {0, 0, 2};
		angleVar = 0;
		size[] ={.5};
		color[] = {{0,0,1,-1},{0,0,1,-1},{0,0.145711,1,-1}};
		particleFSLoop = 0;
		particleShape = "\A3\data_f\cl_exp";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		animationName = "";
		particleType = "Billboard";

		weight = 1.15;//1.25;

	};

	// class SmokeShellWhite;
	// class RD_501_Leg_SmokeShell: SmokeShellWhite
	// {
	// 	destroyOnWaterSurfaceOffset = -6;
	// 	size[] = {0.1,3,3};
	// 	blockAIVisibility = 0;
	// 	interval = 0.01;
	// };


};

// class SmokeShellWhiteEffect;
// class SmokeShellRedEffect:SmokeShellWhiteEffect
// {
// 	class SmokeShell;
// };
// class RD501_leg_SmokeRed//: SmokeShellRedEffect
// {

// 		class SmokeShellUW
// 		{
// 			simulation = "particles";
// 			type = "TCW_Jumppack_Fire_Blue";
// 			position[] = {0, 0, 0};
// 			intensity = 1;
// 			interval = 1;
// 		};
		
	
// };



