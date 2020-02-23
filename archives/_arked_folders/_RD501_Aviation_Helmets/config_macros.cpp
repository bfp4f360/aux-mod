#define TEXTURE \RD501_Aviation_Helmets\textures


#define NEW_501_Pilot_HELM(classname,displayname,texture)\
	class MODNAME##_501st_Pilot_Helmet_##classname: BASEHELMNAME\
	{\
		scope = 2;\
		displayName = Clone pilot helmet (501st '##displayname##');\
		hiddenSelectionsTextures[] = {TEXTURE##\##texture};\
		subItems[] = {"Integrated_NVG_TI_1_F_RD501","G_B_Diving"};\
	};


