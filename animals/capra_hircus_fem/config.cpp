class CfgPatches
{
	class DZ_Animals_capra_hircus_fem
	{
		units[]=
		{
			"Animal_CapraHircusF"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Animals"
		};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_CapraHircusF: AnimalBase
	{
		simulation="dayzanimal";
		scope=2;
		model="\dz\animals\capra_hircus_fem\capra_hircus_fem.p3d";
		displayName="$STR_CfgVehicles_Animal_CapraHircusF0";
		descriptionShort="$STR_CfgVehicles_Animal_CapraHircusF1";
		aiAgentTemplate="Herbivores_CapraHircus";
		injuryLevels[]={1,0.5,0.2,0};
		varTemperatureFreezeTime=6600;
		varTemperatureThawTime=6600;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
				class Blood
				{
					hitpoints=5000;
				};
				class Shock
				{
					hitpoints=100;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[]=
					{
						"Zone_Head"
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					fatalInjuryCoef=0.15000001;
					canBleed=0;
					class Health
					{
						hitpoints=80;
						transferToGlobalCoef=1;
					};
					class Blood: Health
					{
						hitpoints=0;
					};
					class Shock: Health
					{
						hitpoints=0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Neck"
					};
					transferToZonesNames[]=
					{
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.2};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=150;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Chest"
					};
					transferToZonesNames[]=
					{
						"Zone_Neck",
						"Zone_Belly"
					};
					transferToZonesCoefs[]={0.15000001,0.15000001};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=120;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Belly"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.15000001,0.15000001};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=100;
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Spine"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.1,0.1,0.1};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=120;
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Pelvis"
					};
					transferToZonesNames[]=
					{
						"Zone_Spine",
						"Zone_Belly"
					};
					transferToZonesCoefs[]={0.15000001,0.15000001};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=120;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Legs"
					};
					transferToZonesNames[]=
					{
						"Zone_Pelvis",
						"Zone_Belly",
						"Zone_Chest"
					};
					transferToZonesCoefs[]={0.1,0.1,0.1};
					fatalInjuryCoef=0;
					class Health: Health
					{
						hitpoints=50;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="GoatSteakMeat";
				count=10;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[]={3,2,4};
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedPelt
			{
				item="GoatPelt";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Guts";
				count=2;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
			class ObtainedLard
			{
				item="Lard";
				count=1;
				quantityMinMaxCoef[]={0.30000001,6};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.80000001,1};
				transferToolDamageCoef=1;
			};
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.40000001;
				};
			};
		};
		class enfanimsys
		{
			meshObject="dz\animals\capra_hircus\Data\capra_hircus_skeleton.xob";
			graphname="dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance="dz\animals\animations\!graph_files\Herbivores\GoatSkeleton_AnimInstance.asi";
			startnode="Master_GoatAndSheep_SM";
			skeletonName="capra_hircus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="HoofSmallWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=1;
				};
				class Walk2
				{
					soundLookupTable="HoofSmallWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=2;
				};
				class Walk3
				{
					soundLookupTable="HoofSmallWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=3;
				};
				class Walk4
				{
					soundLookupTable="HoofSmallWalk_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=4;
				};
				class Run1
				{
					soundLookupTable="HoofSmallRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=5;
				};
				class Run2
				{
					soundLookupTable="HoofSmallRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=6;
				};
				class Run3
				{
					soundLookupTable="HoofSmallRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=7;
				};
				class Run4
				{
					soundLookupTable="HoofSmallRun_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=8;
				};
				class Grazing1
				{
					soundLookupTable="HoofSmallGrazing_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=9;
				};
				class Grazing2
				{
					soundLookupTable="HoofSmallGrazing_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=10;
				};
				class Bodyfall
				{
					soundLookupTable="HoofSmallBodyfall_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=11;
				};
				class Settle
				{
					soundLookupTable="HoofSmallSettle_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=12;
				};
				class Rest2standA
				{
					soundLookupTable="HoofSmallRest2standA_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=13;
				};
				class Rest2standB
				{
					soundLookupTable="HoofSmallRest2standB_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=14;
				};
				class Stand2restA
				{
					soundLookupTable="HoofSmallStand2restA_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=15;
				};
				class Stand2restB
				{
					soundLookupTable="HoofSmallStand2restB_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=16;
				};
				class Stand2restC
				{
					soundLookupTable="HoofSmallStand2restC_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=17;
				};
				class Rub1
				{
					soundLookupTable="HoofSmallRub1_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=18;
				};
				class Rub2
				{
					soundLookupTable="HoofSmallRub2_LookupTable";
					noise="DeerStepNoise";
					effectSet[]=
					{
						"DeerStepEffect1",
						"DeerStepEffect2"
					};
					id=19;
				};
			};
			class Sounds
			{
				class GoatBleat_A
				{
					soundSet="GoatBleat_A_SoundSet";
					noise="DeerRoarNoise";
					id=1;
				};
				class GoatBleat_B
				{
					soundSet="GoatBleat_B_SoundSet";
					noise="DeerRoarNoise";
					id=2;
				};
				class GoatBleat_C
				{
					soundSet="GoatBleat_C_SoundSet";
					noise="DeerRoarNoise";
					id=3;
				};
				class GoatBleat_D
				{
					soundSet="GoatBleat_D_SoundSet";
					noise="DeerRoarNoise";
					id=4;
				};
				class GoatBleat_E
				{
					soundSet="GoatBleat_E_SoundSet";
					noise="DeerRoarNoise";
					id=5;
				};
				class GoatBleat_F
				{
					soundSet="GoatBleat_F_SoundSet";
					noise="DeerRoarNoise";
					id=6;
				};
				class GoatBleatX1
				{
					soundSet="GoatBleatX1_SoundSet";
					noise="DeerRoarNoise";
					id=14;
				};
				class GoatBleatX2
				{
					soundSet="GoatBleatX2_SoundSet";
					noise="DeerRoarNoise";
					id=16;
				};
				class GoatBleatX3
				{
					soundSet="GoatBleatX3_SoundSet";
					noise="DeerRoarNoise";
					id=18;
				};
				class GoatBleatX4
				{
					soundSet="GoatBleatX4_SoundSet";
					noise="DeerRoarNoise";
					id=20;
				};
				class GoatBleatX5
				{
					soundSet="GoatBleatX5_SoundSet";
					noise="DeerRoarNoise";
					id=22;
				};
			};
			class Damages
			{
				class Bite
				{
					damage="DeerBiteDamage";
					id=1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping=1;
			movementSpeedMapping[]={0,0.11,0.41,2.0999999,4.5599999,10.44};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout=0.5;
			lookAtFilterSpeed=1.5700001;
		};
	};
};
