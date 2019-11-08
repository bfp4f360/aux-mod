class UAV_01_base_F;
class O_UAV_01_F:UAV_01_base_F
{
	class Turrets;
}
class B_UAV_01_F;
class swcishoverdroid:O_UAV_01_F
{
	scope=0;
	class Turrets: Turrets
	{
		class MainTurret;
	}
};
class SWOP_interrogationdroid:B_UAV_01_F
{
	scope=0;
};
class SWOP_Dio_Droid:O_UAV_01_F
{
	scope=0;
}
class SWOP_Rebel_Dio_Droid:B_UAV_01_F
{
	scope=0;
};
class swclonerecondroid:B_UAV_01_F
{
	scope=0;
};