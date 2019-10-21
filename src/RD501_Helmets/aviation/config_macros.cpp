
#define NEW_501_Pilot_HELM(classname,displayname,texture)\
	class macro_new_helmet(pilot,classname): macro_new_helmet(pilot,base)\
	{\
		scope = 2;\
		author = "RD501";\
		displayName = Clone pilot helmet (501st '##displayname##');\
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures##\aviation\##texture};\
		subItems[] = {macro_new_weapon(nvg_integrated,pilot_test),"G_B_Diving"};\
	};


