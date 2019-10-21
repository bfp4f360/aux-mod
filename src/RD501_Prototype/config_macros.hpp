#define macro_modname RD501
#define macro_authors "RD501"
#define macro_authors_ppl "Namenai"
#define macro_mod_ver [Stage I] verison 1.5 part C

#define macro_patch_name(component) macro_modname##_patch_##component

#define macro_scope_magnification(zoom) 0.25/zoom
#define macro_new_scope(scopename) macro_modname##_weapon_scope_##scopename
#define macro_new_weapon(family,name) macro_modname##_##prototype_family##_##name

#define DC15a_Overheat_Dispersion 0.0
#define DC15a_Overheat_SlowdownFactor 0.0
#define DC15a_Overheat_JamChance 0.0
#define DC15a_Overheat_mrbs 3e+009

#define macro_ace_heating \
ACE_Overheating_Dispersion = 0.0;\
ACE_Overheating_SlowdownFactor = 0.0;\
ACE_Overheating_JamChance = 0.0;\
ACE_overheating_mrbs = 3e+009;\
ACE_overheating_allowSwapBarrel = 1;\
ACE_clearJamAction = "ReloadMagazine";

#define macro_new_recoil(name) macro_modname##_##name##_recoil

//mags 
#define macro_new_mag(name,count) macro_modname##_##name##_x##count##_magazine

//weapon definitions
#define macro_dc15a_rof 0.1
#define macro_dc15a_burst_rof 0.08
#define macro_dc15a_acc 0.0

#define macro_dc15a_mod0_rof_slow 0.15
#define macro_dc15a_mod0_rof_fast 0.075
#define macro_dc15a_mod0_acc 0.00007

#define macro_dc15a_le_rof 0.3
#define macro_dc15a_le_acc macro_dc15a_acc

#define macro_dc15s_rof .06
#define macro_dc15s_acc 0.0001

#define macro_z6_rof 0.06
#define macro_z6_super_rof 0.05
#define macro_z6_acc 0.001

// gravityFactor = 0;\
// coefGravity = 0;\
//ammo
#define macro_ammo_no_grav \
deflecting = 0;\
airFriction = 0;\
sideAirFriction = 0;

#define macro_new_ammo(name) macro_modname##_##name##_prototype_ammo


#define macro_dc15a_rifle_scope \
class OpticsModes\
{\
	class Ironsights\
	{\
		opticsID=1;\
		useModelOptics=0;\
		opticsFlare="true";\
		opticsPPEffects[]=\
		{\
		};\
		opticsDisablePeripherialVision=0.67000002;\
		opticsZoomMin=macro_scope_magnification(1);\
		opticsZoomMax=1.1;\
		opticsZoomInit=0.75;\
		memoryPointCamera="eye";\
		visionMode[]={};\
		distanceZoomMin=100;\
		distanceZoomMax=100;\
		discreteDistanceInitIndex = 1;\
		discreteinitIndex = 0;\
	};\
	class Scope: Ironsights\
	{\
		opticsID=2;\
		useModelOptics=1;\
		opticsPPEffects[]=\
		{\
		};\
		opticsDisablePeripherialVision=0.67000002;\
		opticsZoomMin = macro_scope_magnification(6);\
		opticsZoomMax = macro_scope_magnification(1);\
		opticsZoomInit = macro_scope_magnification(6);\
		discretefov[] = {macro_scope_magnification(6)};\
		memoryPointCamera="opticView";\
		visionMode[]=\
		{\
			"Normal",\
			"NVG"\
		};\
		opticsFlare="true";\
		distanceZoomMin=300;\
		distanceZoomMax=300;\
		cameraDir="";\
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100};\
	};\
};


