
class SWOP_resistance_back_DV_b: Bag_Base
{
	scope = 2;
	maximumload = 600;
};
class SWOP_B_ITdv_Base: Bag_Base
{
	author = "RD501";
	scope = 2;
	maximumload = 600;
};
class RD501_LR_Base: Bag_Base
{
	scope = 0;
	author = "RD501";
	maximumload = 600;
	mass = 30;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "anprc155_radio_dialog";//"anprc155_radio_dialog";
	tf_subtype = "digital_lr";
	tf_range = 25000;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
};


//POOPY INFANTRY RTO BACKPACK
//Why is infantry so weird.
class RD501_SWOP_B_BlackBackpack_RTdv_Base: RD501_LR_Base
{
	scope = 2;
	picture = "\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_black.paa";
	model = "\SWOP_rebels\RebBackpack\Rtdv.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_rebels\RebBackpack\data\rtdv_black_co.paa"};
	displayName = "RTdv-700 (Black)";
};
class RD501_SWOP_B_BrownBackpack_RTdv_Base: RD501_LR_Base
{
	scope = 2;
	picture = "\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_sand.paa";
	model = "\SWOP_rebels\RebBackpack\Rtdv.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_rebels\RebBackpack\data\rtdv_brown_co.paa"};
	displayName = "RTdv-700 (Brown)";
};
class RD501_SWOP_B_CloudBackpack_RTdv_Base: RD501_LR_Base
{
	scope = 2;
	picture = "\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_cloud.paa";
	model = "\SWOP_rebels\RebBackpack\Rtdv.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_rebels\RebBackpack\data\rtdv_cloud_co.paa"};
	displayName = "RTdv-700 (Cloud)";
};
class RD501_SWOP_B_magmaBackpack_RTdv_Base: RD501_LR_Base
{
	scope = 2;
	picture = "\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_magma.paa";
	model = "\SWOP_rebels\RebBackpack\Rtdv.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_rebels\RebBackpack\data\rtdv_magma_co.paa"};
	displayName = "RTdv-700 (Orange)";
};
class RD501_SWOP_B_SandBackpack_RTdv_Base: RD501_LR_Base
{
	scope = 2;
	picture = "\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_sand.paa";
	model = "\SWOP_rebels\RebBackpack\Rtdv.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_rebels\RebBackpack\data\rtdv_sand_co.paa"};
	displayName = "RTdv-700 (Sand)";
};
class RD501_SWOP_B_SnowBackpack_RTdv_Base: RD501_LR_Base
{
	scope = 2;
	picture = "\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_snow.paa";
	model = "\SWOP_rebels\RebBackpack\Rtdv.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_rebels\RebBackpack\data\rtdv_snow_co.paa"};
	displayName = "RTdv-700 (White)";
};
class RD501_SWOP_B_WoodBackpack_RTdv_Base: RD501_LR_Base
{
	scope = 2;
	picture = "\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_wood.paa";
	model = "\SWOP_rebels\RebBackpack\Rtdv.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_rebels\RebBackpack\data\rtdv_co.paa"};
	displayName = "RTdv-700 (Woodland)";
};

//base backpacks
class B_Carryall_base;
class CAA_InvisBag: B_Carryall_base
{
	scope = 0;
	maximumload = 1;
	mass = 5;
};
class EG_InvisBag: CAA_InvisBag
{
	scope = 0;
	maximumload = 1;
	mass = 30;
};
class EG_InvisBagMain: CAA_InvisBag
{
	scope = 0;
	maximumload = 1;
	mass = 30;
};
class RD501_InvisBag: Bag_Base
{
	scope = 2;
	author = "RD501";
	picture = "SWOP_clones\data\backpack\ico\Ico_backpack.paa";
	model = "CAA_InvisBag\CAA_InvisBag.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {""};
	displayName = "Clonetrooper backpack Invisible #2";
	maximumload = 600;
	mass = 30;
};
// class RD501_AT_Droid_backpack: Bag_Base
// {
// 	scope = 2;
// 	author = "SWOP + RD501";
// 	picture = "\SWOP_droids\data\ico\ico_backpack.paa";
// 	model = "SWOP_Droids\Pack.p3d";
// 	hiddenSelections[] = {"Camo1"};
// 	hiddenSelectionsTextures[] = {"501st_Republic_Asset_Modification\textures\CIS\B1\AT_Droids_Back_Pack_co.paa"};
// 	displayName = "Droid control backpack (AT)";
// 	maximumload = 600;
// 	mass = 30;
// };
// class RD501_Spec_Droid_backpack: RD501_AT_Droid_backpack
// {
// 	scope = 2;
// 	author = "SWOP + RD501";
// 	picture = "\SWOP_droids\data\ico\ico_backpack.paa";
// 	model = "SWOP_Droids\Pack.p3d";
// 	hiddenSelections[] = {"Camo1"};
// 	hiddenSelectionsTextures[] = {"501st_Republic_Asset_Modification\textures\CIS\B1\S_Droids_Back_Pack_co.paa"};
// 	displayName = "Droid control backpack (Spec ops)";
// 	maximumload = 600;
// 	mass = 30;
// };
// class RD501_Aqua_Droid_backpack: RD501_AT_Droid_backpack
// {
// 	scope = 2;
// 	author = "SWOP + RD501";
// 	picture = "\SWOP_droids\data\ico\ico_backpack.paa";
// 	model = "SWOP_Droids\Pack.p3d";
// 	hiddenSelections[] = {"Camo1"};
// 	hiddenSelectionsTextures[] = {"\501st_Republic_Asset_Modification\textures\CIS\Aqua\ReskinB2_chest_camo.paa"};
// 	displayName = "Droid control backpack (Underwater)";
// 	maximumload = 600;
// 	mass = 30;
// };
	
class RD501_Bag_Base: Bag_Base
{
	maximumload = 600;
	author = "RD501";
	scope = 2;
	mass = 30;
	icon = "iconBackpack";
	picture = "SWOP_clones\data\backpack\ico\Ico_backpack.paa";
	model = "SWOP_clones\clonebackpack.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec1_co.paa"};
};
class RD501_SWOP_B_ARCCloneBackpack: RD501_Bag_Base
{
	picture = "\SWOP_empire\ImpBackpack\data\ico\icon_iwhite.paa";
	model = "\SWOP_empire\ImpBackpack\CloneARC.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\backpack\backpack_co.paa"};
	displayName = "Clonetrooper ARC Backpack";
	tf_encryptionCode = "tf_west_radio_code";
	//tf_dialog = "anprc155_radio_dialog";
	tf_dialog = "anarc210_radio_dialog";
	tf_subtype = "digital_lr";
	tf_range = 25000;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
	maximumload = 700;
};
class RD501_SWOP_B_ARCIICloneBackpack: RD501_Bag_Base
{
	picture = "\SWOP_empire\ImpBackpack\data\ico\icon_iwhite.paa";
	model = "SWOP_clones\CloneARC2.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\backpack\backpack_co.paa"};
	displayName = "Clonetrooper ARC Backpack";
	tf_encryptionCode = "tf_west_radio_code";
	//tf_dialog = "anprc155_radio_dialog";
	tf_dialog = "anarc210_radio_dialog";
	tf_subtype = "digital_lr";
	tf_range = 25000;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
	maximumload = 700;
};
class RD501_SWOP_B_CloneBackpack: RD501_Bag_Base
{
	hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec1_co.paa"};
	displayName = "Clonetrooper Backpack";
};
class RD501_SWOP_B_CloneBackpack_dem: RD501_Bag_Base
{
	hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec1_CG_co.paa"};
	displayName = "Clonetrooper Demolition Backpack";
	maximumload = 700;
};
class RD501_SWOP_B_CloneBackpack_med: RD501_Bag_Base
{
	hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec1_501_co.paa"};
	displayName = "Clonetrooper Medical Backpack";
};
class RD501_SWOP_B_CloneBackpack101: RD501_Bag_Base
{
	hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec1_101_co.paa"};
	displayName = "Clonetrooper Backpack (101st)";
};
class RD501_SWOP_B_CloneBackpack41: RD501_Bag_Base
{
	hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec1_41_co.paa"};
	displayName = "Clonetrooper Backpack (41st)";
};
class RD501_SWOP_B_CloneBackpackGeon: RD501_Bag_Base
{
	hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec1_geon_co.paa"};
	displayName = "Clonetrooper Backpack (Geonosis)";
};
class RD501_SWOP_B_CloneDVa: RD501_Bag_Base 
{
	picture = "\SWOP_clones\data\spec\ico\ico_rangeico_range_x_Ca.paa";
	model = "SWOP_clones\clonebackDVa.p3d";
	hiddenSelectionsTextures[] = {"SWOP_clones\data\DVa_co.paa"};
	displayName = "CDV-5s";
	tf_encryptionCode = "tf_west_radio_code";
	//tf_dialog = "anprc155_radio_dialog";
	tf_dialog = "anarc210_radio_dialog";
	tf_subtype = "digital_lr";
	tf_range = 35000;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
	descriptionShort = "CDV-5s long range radio 35km";
};

class SWOP_B_CloneDV: RD501_Bag_Base
{
	scope = 2;
	hiddenSelections[] = {"Camo1"};
	picture = "SWOP_clones\data\backpack\ico\Ico_backDV.paa";
	model = "SWOP_clones\clonebackDV.p3d";
	hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec2_co.paa"};
	displayName = "CDV-19m";
	tf_encryptionCode = "tf_west_radio_code";
	//tf_dialog = "anprc155_radio_dialog";
	tf_dialog = "anarc210_radio_dialog";
	tf_subtype = "digital_lr";
	tf_range = 35000;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
	descriptionShort = "CDV-19m long range radio 35km";
	maximumload = 700;
};