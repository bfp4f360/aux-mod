class macro_new_mag(Republic_Universal_Magazine,30): CA_Magazine
{
    author = "RD501";
    scope = 2;
    model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
    picture = "\z\acex\addons\field_rations\ui\item_canteen_co.paa";
    displayName = "60Rnd Republic Universal Magazine";
    ammo =  macro_new_ammo(Republic_Universal_Ammo);//macro_new_ammo(Republic_Universal_Ammo)
    tracersEvery = 1;
    count = 30;
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
    tracersEvery = 3;
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
    tracersEvery = 3;
};

class macro_new_mag(z6_proto,300): macro_new_mag(Republic_Universal_Magazine,30)
{
    ammo = macro_new_ammo(z6_proto)
    initSpeed = 500;
    displayName = "300Rnd Z6 Drum";
    descriptionShort = "300rnd Drum";
    count = 300;
    mass = 90;
    picture = "\SW_CloneWarsWeapons\SW_Z6\UI\SW_Z6-mag.paa";
    tracersEvery = 4;
};

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