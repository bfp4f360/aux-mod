#define TEXTURE_PATH \RD501_Infantry_Helmets\textures

//Normal Infantry ones
	#define NEW_501_Inf_Helm(classname,displayname,texture)\
		class MODNAME##_501st_Infantry_Helmet_##classname : Base_Inf_Name\
		{\
			scope = 2;\
			displayName = Clonetrooper helmet (501st '##displayname##');\
			hiddenSelectionsTextures[] = {TEXTURE_PATH##\infantry\##texture};\
		};


	#define NEW_501_Inf_Helm_Hide(classname,displayname,texture)\
		class MODNAME##_501st_Infantry_Helmet_##classname : Base_Inf_Name\
		{\
			scope = 2;\
			scopeArsenal=0;\
			displayName = Clonetrooper helmet (501st '##displayname##');\
			hiddenSelectionsTextures[] = {TEXTURE_PATH##\infantry\##texture};\
		};

//ARC
	#define NEW_501_ARC_Helm(classname,displayname,texture)\
		class MODNAME##_501st_Infantry_Helmet_##classname : Base_Inf_Name\
		{\
			scope = 2;\
			displayName = Clonetrooper helmet (501st '##displayname##');\
			hiddenSelectionsTextures[] = {TEXTURE_PATH##\arc\##texture};\
		};	

//Lumanated Visor
	#define NEW_501_Lumanated_Visor_Helm(classname,displayname,texture)\
		class MODNAME##_501st_Lumanated_Visor_##classname : Base_Inf_Lumanated_Name\
		{\
			scope = 2;\
			displayName = Clonetrooper helmet (501st '##displayname##');\
			hiddenSelectionsTextures[] = {TEXTURE_PATH##\infantry\##texture};\
		};

	#define NEW_501_Lumanated_Visor_Helm_Hide(classname,displayname,texture)\
		class MODNAME##_501st_Lumanated_Visor_##classname : Base_Inf_Lumanated_Name\
		{\
			scope = 2;\
			scopeArsenal=0;\
			displayName = Clonetrooper helmet (501st '##displayname##');\
			hiddenSelectionsTextures[] = {TEXTURE_PATH##\infantry\##texture};\
		};
		

	#define NEW_501_Lumanated_Visor_Alt_Texture_Path_Hide(classname,displayname,texture)\
		class MODNAME##_501st_Infantry_Helmet_##classname : Base_Inf_Lumanated_Name\
		{\
			scope = 2;\
			scopeArsenal=0;\
			displayName = Clonetrooper helmet (501st '##displayname##');\
			hiddenSelectionsTextures[] = {TEXTURE_PATH##\##texture};\
		};