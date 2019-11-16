class macro_new_mag(flare_white,3): CA_Magazine
{
    author = "RD501";
    scope = 2;
    type = 16;
    displayName = "Flare 3 Rounds (White)";
    displayNameShort = "White Flare";
    picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    ammo = macro_new_ammo(40mm_flare_white)
    initSpeed = 80;
    count = 3;
    nameSound = "";
    descriptionShort = "Type: Flare 3 Rounds - White <br />Rounds: 3";
    weaponPoolAvailable = 1;
    mass = 4;
};

class macro_new_mag(flare_cir,3): macro_new_mag(flare_white,3)
{
    author = "RD501";
    displayName = "Flare 3 Rounds (IR)";
    ammo = macro_new_ammo(40mm_flare_cir)
    picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_purple_CA.paa";
    descriptionShort = "Type: Flare - IR<br />Rounds: 3<br />";
    displayNameShort = "IR";
};

class macro_new_mag(flare_green,3): macro_new_mag(flare_white,3)
{
    author = "RD501";
    displayName = "Flare 3 Rounds (Green)";
    displayNameShort = "Green Flare";
    ammo = macro_new_ammo(40mm_flare_green)
    picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
    descriptionShort = "Type: Flare - Green<br />Rounds: 3<br />";
};

class macro_new_mag(flare_red,3): macro_new_mag(flare_white,3)
{
    author = "RD501";
    displayName = "Flare 3 Rounds (Red)";
    ammo = macro_new_ammo(40mm_flare_red)
    picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
    descriptionShort = "Type: Flare - Red<br />Rounds: 3";
    displayNameShort = "Red Flare";
};

class macro_new_mag(flare_yellow,3): macro_new_mag(flare_white,3)
{
    author = "RD501";
    displayName = "Flare 3 Rounds (Yellow)";
    ammo = macro_new_ammo(40mm_flare_yellow)
    picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
    descriptionShort = "Type: Flare - Yellow<br />Rounds: 3";
    displayNameShort = "Yellow Flare";
};

class macro_new_mag(flare_blue,3): macro_new_mag(flare_white,3)
{
    author = "RD501";
    displayName = "Flare 3 Rounds (Blue)";
    ammo = macro_new_ammo(40mm_flare_blue)
    picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
    descriptionShort = "Type: Flare - Purple<br />Rounds: 3";
    displayNameShort = "Blue Flare";
};

class macro_new_mag(flare_cyan,3): macro_new_mag(flare_white,3)
{
    author = "RD501";
    displayName = "Flare 3 Rounds (Cyan)";
    ammo = macro_new_ammo(40mm_flare_cyan)
    picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
    descriptionShort = "Type: Flare - Cyan<br />Rounds: 3";
    displayNameShort = "Cyan Flare";
};

class macro_new_mag(flare_purple,3): macro_new_mag(flare_white,3)
{
    author = "RD501";
    displayName = "Flare 3 Rounds (Purple)";
    ammo = macro_new_ammo(40mm_flare_purple)
    picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
    descriptionShort = "Type: Flare - Purple<br />Rounds: 3";
    displayNameShort = "Purple Flare";
};

class macro_new_mag(flare_orange,3): macro_new_mag(flare_white,3)
{
    author = "RD501";
    displayName = "Flare 3 Rounds (Orange)";
    ammo = macro_new_ammo(40mm_flare_orange)
    picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
    descriptionShort = "Type: Flare - Orange<br />Rounds: 3";
    displayNameShort = "Orange Flare";
};