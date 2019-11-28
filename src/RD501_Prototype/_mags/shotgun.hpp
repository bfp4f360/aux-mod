class macro_new_mag(shotgun_test,10): 2Rnd_12Gauge_Pellets
{
    author = "RD501";
    scope = 2;
    displayName = "Z6 6 Barrel Blast Mag";
    displayNameShort = "Pellets";
    descriptionShort = "Pellets";
    picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_CA.paa";
    ammo = macro_new_ammo(shotgun_submunition)
    initSpeed = 480;
    count = 10;
    mass = 100;
    modelSpecialIsProxy = 1;
    modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_12ga_hunter_2rnd";
    hiddenSelections[] = {"camo", "cap1"};
    hiddenSelectionsTextures[] = {"\a3\Weapons_F_Enoch\MagazineProxies\data\12GA_Pellets_CO.paa"};
};
class macro_new_mag(shotgun_test,2): macro_new_mag(shotgun_test,10)
{
    count = 2;
    ammo = macro_new_ammo(shotgun_submunition_carbine)
    displayName = "DC-15s Carbine Super Shot Mag";
     mass = 40;
}