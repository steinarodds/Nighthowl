class CfgPatches
{
	class Nighthowl_Sounds
	{
		author = "Judas";
		name = "Nighthowl";
		url = "";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Effects"};
	};
};
class CfgMods
{
	class Nighthowl
	{
		author = "Judas";
		type = "mod";
		dependencies[] = {"World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Nighthowl/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Nighthowl/scripts/5_Mission"};
			};
		};
	};
};
class CfgSoundShaders
{
	class Nighthowl_NightStarted_Soundshader
	{
		samples[] = {{"\Nighthowl\sounds\Nighthowl",1}};
		volume = 1;
	};
};
class CfgSoundSets
{
	class Nighthowl_NightStarted_SoundSet
	{
		soundShaders[] = {"Nighthowl_NightStarted_Soundshader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 1;
	};
};
