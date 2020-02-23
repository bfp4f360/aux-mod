#define TEXTURE \501st_helmets\AB\data
#define MODEL \501st_helmets\AB\AB_helmet.p3d

#define NEW_501_AB_HELM(classname,displayname,texture)\
	class MODNAME##_##classname: 501_AB_helmet\
	{\
		scope = 2;\
		displayName = pp Clone airborne helmet (##displayname##);\
		hiddenSelections[] = {"camo1"};\
		hiddenSelectionsTextures[] = {TEXTURE##\##texture};\
	};