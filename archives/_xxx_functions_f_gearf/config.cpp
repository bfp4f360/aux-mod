class CfgPatches
{
	class functions_f_gearf
	{
		author="Flax";
		name="Gear Functions - Functions";
		requiredAddons[]={};
		requiredVersion=0.2;
		units[]={};
		weapons[]={};
	};
};
class cfgFunctions
{
	class GEARF
	{
		class vectorFunctions
		{
			file="\A3_GEARF\functions_f_gearf\Vectors";
			class rotateObject
			{
			};
		};
		class helmetFunctions
		{
			file="\A3_GEARF\functions_f_gearf\Helmet";
			class slingHelmet
			{
			};
			class unslingHelmet
			{
			};
			class hideSlungHelmet
			{
			};
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class slingHelmet
				{
					displayName="Sling Helmet";
					icon="\A3_GEARF\data_f_gearf\UI_icons\helmet_ca.paa";
					priority=3;
					condition="!(_player getVariable ['GEARF_HelmetAttached', false])";
					class slingLeft
					{
						displayName="Sling Left";
						icon="\A3_GEARF\data_f_gearf\UI_icons\helmet_ca.paa";
						priority=3;
						condition="!(_player getVariable ['GEARF_HelmetAttached', false])";
						statement="[_player, 'left'] call GEARF_fnc_slingHelmet";
					};
					class slingRight
					{
						displayName="Sling Right";
						icon="\A3_GEARF\data_f_gearf\UI_icons\helmet_ca.paa";
						priority=3;
						condition="!(_player getVariable ['GEARF_HelmetAttached', false])";
						statement="[_player, 'right'] call GEARF_fnc_slingHelmet";
					};
				};
				class unslingHelmet
				{
					displayName="Unsling Helmet";
					icon="\A3_GEARF\data_f_gearf\UI_icons\helmet_ca.paa";
					priority=3;
					condition="_player getVariable ['GEARF_HelmetAttached', false]";
					statement="[_player] call GEARF_fnc_unslingHelmet";
				};
			};
		};
		class EventHandlers
		{
			init="(_this select 0) setVariable ['GEARF_HelmetAttached', false]; (_this select 0) setVariable ['GEARF_HelmetAttachedClass','']; (_this select 0) setVariable ['GEARF_HelmetAdditionalClass',''];";
			killed="(_this select 0) setVariable ['GEARF_HelmetAttached', false]; (_this select 0) setVariable ['GEARF_HelmetAttachedClass','']; (_this select 0) setVariable ['GEARF_HelmetAdditionalClass',''];";
			getInMan="[(_this select 0), true] call GEARF_fnc_hideSlungHelmet";
			getOutMan="[(_this select 0), false] call GEARF_fnc_hideSlungHelmet;";
		};
	};
};
class cfgMods
{
	author="76561198018011131";
	timepacked="1468708196";
};
