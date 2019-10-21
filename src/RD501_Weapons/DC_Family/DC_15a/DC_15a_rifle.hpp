class macro_new_weapon(DC,15a_base):SWOP_DC15ABlasterRifle // RD501_DC_15a_base
{
    weaponPoolAvailable = 1;
    displayName="rd501 DC15A base";
    scope=0;
    scopeArsenal=0;

    class Secondary:Secondary
    {
        class Single;
    };
    dlc = "RD501";

    author= "RD501";
    baseWeapon = macro_new_weapon(DC,15a_base);

    DC_Family_Flashlight

    ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
    ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
    ACE_Overheating_JamChance = DC15a_Overheat_JamChance
    ACE_overheating_mrbs = DC15a_Overheat_mrbs
    ACE_overheating_allowSwapBarrel = 1;
    ACE_clearJamAction = "ReloadMagazine";

    canShootInWater = 1;
    magazines[] = {};
    magazineWell[] += {macro_new_magwell(DC_15a_energy)};
    class Single:Single
    {
        reloadTime = DC15A_reloadtime_single
        dispersion = DC15A_accuracy
        recoil = "recoil_single_mx";
        recoilProne = "recoil_single_prone_mx";

    };

    class Burst:Burst
    {
        reloadTime = DC15A_reloadtime_burst
        dispersion = DC15A_accuracy
        recoil = "recoil_auto_primary_3outof10";
        recoilProne = "recoil_auto_primary_prone_3outof10";

    };

    class FullAuto:FullAuto
    {
        reloadTime = DC15A_reloadtime_full
        dispersion = DC15A_accuracy
    };

    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 30;
        class CowsSlot: CowsSlot
        {
            compatibleItems[] = {
                macro_new_weapon(scope,dc_15a_acog)
            };
        };
    };

};

class macro_new_weapon(DC,15a):macro_new_weapon(DC,15a_base)
{
    displayname = "DC-15A Rifle";
    scope=2;
    scopeArsenal=2;
    baseWeapon = macro_new_weapon(DC,15a);
    // class Secondary:Secondary
    // {

    // };
};