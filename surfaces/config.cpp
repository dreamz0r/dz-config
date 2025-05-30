class CfgPatches
{
	class DZ_Surfaces
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgWorlds
{
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class DefaultClutter;
		class Clutter
		{
			class Anthoxanthum: DefaultClutter
			{
				model="dz\plants\clutter\c_Anthoxanthum.p3d";
				scaleMin=0.34999999;
				scaleMax=0.69999999;
				noSatColor=0;
			};
			class Anthoxanthum_bended: DefaultClutter
			{
				model="dz\plants\clutter\c_Anthoxanthum_bended.p3d";
				scaleMin=0.34999999;
				scaleMax=0.69999999;
				noSatColor=0;
			};
			class Calamagrostis: DefaultClutter
			{
				model="dz\plants\clutter\c_Calamagrostis.p3d";
				scaleMin=0.80000001;
				scaleMax=1.1;
				noSatColor=1;
			};
			class Carduus: DefaultClutter
			{
				model="dz\plants\clutter\c_Carduus.p3d";
				scaleMin=0.60000002;
				scaleMax=0.89999998;
				noSatColor=0;
			};
			class Carduus_f: DefaultClutter
			{
				model="dz\plants\clutter\c_Carduus_f.p3d";
				scaleMin=0.60000002;
				scaleMax=0.89999998;
				noSatColor=1;
			};
			class Elytrigia: DefaultClutter
			{
				model="dz\plants\clutter\c_Elytrigia.p3d";
				scaleMin=0.69999999;
				scaleMax=1.2;
				noSatColor=0;
			};
			class ElytrigiaGreen: DefaultClutter
			{
				model="dz\plants\clutter\c_Elytrigia_green.p3d";
				scaleMin=0.69999999;
				scaleMax=1.2;
				noSatColor=0;
			};
			class ElytrigiaTall: DefaultClutter
			{
				model="dz\plants\clutter\c_ElytrigiaTall.p3d";
				scaleMin=0.80000001;
				scaleMax=1.3;
				noSatColor=0;
			};
			class Hypericum: DefaultClutter
			{
				model="dz\plants\clutter\c_Hypericum.p3d";
				scaleMin=0.60000002;
				scaleMax=0.89999998;
				noSatColor=0;
			};
			class Hypericum_f: DefaultClutter
			{
				model="dz\plants\clutter\c_Hypericum_f.p3d";
				scaleMin=0.60000002;
				scaleMax=0.89999998;
				noSatColor=1;
			};
			class Lolium: DefaultClutter
			{
				model="dz\plants\clutter\c_Lolium.p3d";
				scaleMin=0.88;
				scaleMax=1.1;
				noSatColor=1;
			};
			class Taraxacum: DefaultClutter
			{
				model="dz\plants\clutter\c_Taraxacum.p3d";
				scaleMin=0.80000001;
				scaleMax=0.89999998;
				noSatColor=1;
			};
			class ConcreteGrass: DefaultClutter
			{
				model="DZ\plants\clutter\c_ConcreteGrass_bunch.p3d";
				scaleMin=0.40000001;
				scaleMax=1.2;
				noSatColor=1;
			};
			class DirtGrass: DefaultClutter
			{
				model="DZ\plants\clutter\c_DirtGrass_bunch.p3d";
				scaleMin=0.40000001;
				scaleMax=1.2;
				noSatColor=0;
			};
			class ElytrigiaDirt: DefaultClutter
			{
				model="dz\plants\clutter\c_ElytrigiaDirt.p3d";
				scaleMin=0.80000001;
				scaleMax=1.3;
				noSatColor=0;
			};
			class Cones: DefaultClutter
			{
				model="DZ\plants\clutter\c_Cones.p3d";
				scaleMin=0.80000001;
				scaleMax=0.89999998;
				noSatColor=1;
			};
			class ElytrigiaForest: DefaultClutter
			{
				model="dz\plants\clutter\c_ElytrigiaForest.p3d";
				scaleMin=0.80000001;
				scaleMax=1.3;
				noSatColor=1;
			};
			class Leafs_spread: DefaultClutter
			{
				model="dz\plants\clutter\c_leafs_spread.p3d";
				scaleMin=0.80000001;
				scaleMax=0.89999998;
				noSatColor=0;
			};
			class Broadleaf_Undergrowth: DefaultClutter
			{
				model="dz\plants\clutter\c_undergrowth.p3d";
				scaleMin=0.30000001;
				scaleMax=0.75;
				noSatColor=1;
			};
			class Broadleaf_Undergrowth_Red: DefaultClutter
			{
				model="dz\plants\clutter\c_undergrowth_red.p3d";
				scaleMin=0.30000001;
				scaleMax=0.75;
				noSatColor=1;
			};
			class c_Broadleaf_Sprouts: DefaultClutter
			{
				model="dz\plants\clutter\c_broadleaf_sprouts.p3d";
				affectedByWind=0.0099999998;
				scaleMin=0.40000001;
				noSatColor=1;
				scaleMax=0.80000001;
			};
			class c_Broadleaf_Sprouts_Tall: DefaultClutter
			{
				model="dz\plants\clutter\c_broadleaf_sprouts_tall.p3d";
				scaleMin=0.5;
				scaleMax=1;
				noSatColor=1;
			};
			class SmallPicea: DefaultClutter
			{
				model="DZ\plants\clutter\c_Pines.p3d";
				scaleMin=0.5;
				scaleMax=1.1;
				noSatColor=1;
			};
			class Polypodiophyta: DefaultClutter
			{
				model="DZ\plants\clutter\c_Polypodiophyta.p3d";
				scaleMin=0.5;
				scaleMax=1.2;
				noSatColor=1;
			};
			class Polypodiophyta_b: DefaultClutter
			{
				model="DZ\plants\clutter\c_Polypodiophyta_b.p3d";
				scaleMin=0.5;
				scaleMax=1.2;
				noSatColor=1;
			};
			class Polypodiophyta_c: DefaultClutter
			{
				model="DZ\plants\clutter\c_Polypodiophyta_c.p3d";
				scaleMin=0.5;
				scaleMax=1.2;
				noSatColor=1;
			};
			class PolypodiophytaTall: DefaultClutter
			{
				model="DZ\plants\clutter\c_Polypodiophyta_tall.p3d";
				scaleMin=0.60000002;
				scaleMax=1;
				noSatColor=1;
			};
			class Vaccinium: DefaultClutter
			{
				model="dz\plants\clutter\c_Vaccinium.p3d";
				scaleMin=0.80000001;
				scaleMax=1.6;
				noSatColor=1;
			};
			class VacciniumGreen: DefaultClutter
			{
				model="dz\plants\clutter\c_Vaccinium_green.p3d";
				scaleMin=0.80000001;
				scaleMax=1.2;
				noSatColor=1;
			};
			class VacciniumRed: DefaultClutter
			{
				model="dz\plants\clutter\c_Vaccinium_red.p3d";
				scaleMin=0.80000001;
				scaleMax=1.2;
				noSatColor=1;
			};
			class VacciniumTall: DefaultClutter
			{
				model="dz\plants\clutter\c_Vaccinium_tall.p3d";
				scaleMin=0.5;
				scaleMax=1.1;
				noSatColor=1;
			};
			class Twigs: DefaultClutter
			{
				model="DZ\plants\clutter\c_Twigs.p3d";
				scaleMin=0.80000001;
				scaleMax=1.2;
				noSatColor=1;
			};
			class Twigs_b: DefaultClutter
			{
				model="DZ\plants\clutter\c_Twigs_b.p3d";
				scaleMin=0.80000001;
				scaleMax=1.8;
				noSatColor=1;
			};
		};
	};
};
class CfgSurfaceCharacters
{
	class cp_grass
	{
		probability[]={0.15000001,0.050000001,0,0,0,0.69999999,0.1};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Carduus",
			"Hypericum",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall"
		};
	};
	class cp_grass_tall
	{
		probability[]={0,0,0.050000001,0.15000001,0.5,0,0.30000001};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Carduus",
			"Hypericum",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall"
		};
	};
	class cp_broadleaf_sparse1
	{
		probability[]={0,0,0,0.025,0,0,0,0,0.025,0.1,0.1,0,0.15000001,0.02,0.02,0,0,0.28299999,0.16599999,0,0,0,0.1};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Calamagrostis",
			"Carduus_f",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall",
			"ElytrigiaForest",
			"Hypericum_f",
			"Lolium",
			"Taraxacum",
			"DirtGrass",
			"Leafs_spread",
			"Broadleaf_Undergrowth",
			"Broadleaf_Undergrowth_Red",
			"Polypodiophyta",
			"PolypodiophytaTall",
			"c_Broadleaf_Sprouts",
			"c_Broadleaf_Sprouts_Tall",
			"VacciniumTall",
			"Cones",
			"SmallPicea",
			"Twigs_b"
		};
	};
	class cp_broadleaf_sparse2
	{
		probability[]={0,0,0,0.025,0,0,0,0.25,0.025,0,0.1,0,0,0,0,0.15000001,0,0.050000001,0.15000001,0,0,0,0.1};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Calamagrostis",
			"Carduus_f",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall",
			"ElytrigiaForest",
			"Hypericum_f",
			"Lolium",
			"Taraxacum",
			"DirtGrass",
			"Leafs_spread",
			"Broadleaf_Undergrowth",
			"Broadleaf_Undergrowth_Red",
			"Polypodiophyta_b",
			"PolypodiophytaTall",
			"Vaccinium",
			"VacciniumGreen",
			"VacciniumTall",
			"Cones",
			"SmallPicea",
			"Twigs_b"
		};
	};
	class cp_broadleaf_dense1
	{
		probability[]={0,0,0,0.001,0,0,0,0.015,0,0,0.15000001,0,0.40000001,0.0099999998,0.0099999998,0,0,0.2,0.029999999,0,0,0,0.1};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Calamagrostis",
			"Carduus_f",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall",
			"ElytrigiaForest",
			"Hypericum_f",
			"Lolium",
			"Taraxacum",
			"DirtGrass",
			"Leafs_spread",
			"Broadleaf_Undergrowth",
			"Broadleaf_Undergrowth_Red",
			"Polypodiophyta",
			"PolypodiophytaTall",
			"c_Broadleaf_Sprouts",
			"c_Broadleaf_Sprouts_tall",
			"VacciniumTall",
			"Cones",
			"SmallPicea",
			"Twigs_b"
		};
	};
	class cp_broadleaf_dense2
	{
		probability[]={0,0,0.02,0.0099999998,0,0,0,0.2,0,0.0099999998,0.2,0,0.30000001,0.050000001,0.050000001,0,0,0,0,0,0,0,0.1};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Calamagrostis",
			"Carduus_f",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall",
			"ElytrigiaForest",
			"Hypericum_f",
			"Lolium",
			"Taraxacum",
			"DirtGrass",
			"Leafs_spread",
			"Broadleaf_Undergrowth",
			"Broadleaf_Undergrowth_Red",
			"Polypodiophyta",
			"PolypodiophytaTall",
			"Vaccinium",
			"VacciniumGreen",
			"VacciniumTall",
			"Cones",
			"SmallPicea",
			"Twigs_b"
		};
	};
	class cp_conifer_common1
	{
		probability[]={0,0,0,0,0,0,0,0.1,0,0,0,0,0,0,0,0,0,0.066,0.2,0,0.30000001,0.015,0.1};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Calamagrostis",
			"Carduus",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall",
			"ElytrigiaForest",
			"Hypericum",
			"Lolium",
			"Taraxacum",
			"DirtGrass",
			"Leafs_spread",
			"Broadleaf_Undergrowth",
			"Broadleaf_Undergrowth_Red",
			"Polypodiophyta",
			"PolypodiophytaTall",
			"Vaccinium",
			"VacciniumGreen",
			"VacciniumTall",
			"Cones",
			"SmallPicea",
			"Twigs"
		};
	};
	class cp_conifer_common2
	{
		probability[]={0,0,0,0,0,0,0,0.1,0,0,0,0,0,0,0,0,0.1,0.1,0.25,0.075000003,0.30000001,0.015,0.1};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Calamagrostis",
			"Carduus",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall",
			"ElytrigiaForest",
			"Hypericum",
			"Lolium",
			"Taraxacum",
			"DirtGrass",
			"Leafs_spread",
			"Broadleaf_Undergrowth",
			"Broadleaf_Undergrowth_Red",
			"Polypodiophyta",
			"VacciniumGreen",
			"VacciniumRed",
			"Vaccinium",
			"VacciniumTall",
			"Cones",
			"SmallPicea",
			"Twigs"
		};
	};
	class cp_conifer_moss1
	{
		probability[]={0,0,0,0,0,0,0,0.059999999,0,0,0,0,0,0,0,0.2,0,0.050000001,0.15000001,0,0.30000001,0.015,0.1};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Calamagrostis",
			"Carduus",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall",
			"ElytrigiaForest",
			"Hypericum",
			"Lolium",
			"Taraxacum",
			"DirtGrass",
			"Leafs_spread",
			"Broadleaf_Undergrowth",
			"Broadleaf_Undergrowth_Red",
			"Polypodiophyta",
			"PolypodiophytaTall",
			"Vaccinium",
			"VacciniumGreen",
			"VacciniumTall",
			"Cones",
			"SmallPicea",
			"Twigs"
		};
	};
	class cp_conifer_moss2
	{
		probability[]={0,0,0,0,0,0,0,0.029999999,0,0,0,0,0,0,0,0.1,0.025,0.025,0.050000001,0,0.2,0.0099999998,0.1};
		names[]=
		{
			"Anthoxanthum",
			"Anthoxanthum_bended",
			"Calamagrostis",
			"Carduus",
			"Elytrigia",
			"ElytrigiaGreen",
			"ElytrigiaTall",
			"ElytrigiaForest",
			"Hypericum",
			"Lolium",
			"Taraxacum",
			"DirtGrass",
			"Leafs_spread",
			"Broadleaf_Undergrowth",
			"Broadleaf_Undergrowth_Red",
			"Polypodiophyta_c",
			"PolypodiophytaTall",
			"Vaccinium",
			"Polypodiophyta",
			"VacciniumTall",
			"Cones",
			"SmallPicea",
			"Twigs"
		};
	};
	class cp_concrete_grass
	{
		probability[]={0.025,0,0,0.1};
		names[]=
		{
			"ElytrigiaDirt",
			"Lolium",
			"Taraxacum",
			"ConcreteGrass"
		};
	};
	class cp_dirt_grass
	{
		probability[]={0.02,0,0.0099999998,0.175};
		names[]=
		{
			"ElytrigiaDirt",
			"Lolium",
			"Taraxacum",
			"DirtGrass"
		};
	};
};
class CfgVehicleSurfaces
{
	class Asphalt
	{
		friction=0.94999999;
	};
	class Dirt
	{
		noiseSteer=0.015;
		noiseFrequency=0.5;
		roughness=0.029999999;
		drag=0.07;
		friction=0.88;
	};
	class Gravel
	{
		noiseSteer=0.064999998;
		noiseFrequency=2;
		roughness=0.079999998;
		drag=0.1;
		friction=0.75;
	};
	class Grass
	{
		noiseSteer=0.050000001;
		noiseFrequency=1;
		roughness=0.079999998;
		drag=0.31999999;
		friction=0.82999998;
	};
	class Forest
	{
		noiseSteer=0.090000004;
		noiseFrequency=0.80000001;
		roughness=0.12;
		drag=0.34999999;
		friction=0.81;
	};
	class Snow
	{
		noiseSteer=0.039999999;
		noiseFrequency=0.1;
		roughness=0.1;
		drag=0.44999999;
		friction=0.61000001;
	};
	class Ice
	{
		noiseSteer=0.001;
		noiseFrequency=0.079999998;
		roughness=0.02;
		drag=0.34999999;
		friction=0.2;
	};
};
class CfgSurfaces
{
	class Default;
	class Water
	{
		access=0;
		files="more_anim*";
		rough=0;
		dust=0;
		soundEnviron="water";
		friction=0.89999998;
		restitution=0;
		isLiquid=1;
		character="Empty";
		impact="Hit_Water";
	};
	class DZ_SurfacesInt: Default
	{
		interior=1;
		deflection=0.1;
		friction=0.80000001;
		restitution=0.30000001;
		footDamage=0.023;
		isDigable=0;
		isFertile=0;
		chanceForCatch=0;
		windModifier=0;
		class Visible
		{
			prone=1;
			kneel=1;
			stand=1;
		};
	};
	class DZ_SurfacesExt: Default
	{
		interior=0;
		deflection=0.1;
		friction=0.5;
		restitution=0.1;
		footDamage=0.023;
		isDigable=1;
		isFertile=1;
		chanceForCatch=1;
		windModifier=1;
		digPile="UndergroundStash";
		toolDamage=1;
		class Visible
		{
			prone=1;
			kneel=1;
			stand=1;
		};
	};
	class cp_concrete1: DZ_SurfacesExt
	{
		files="cp_concrete1*";
		deflection=0.1;
		friction=0.98000002;
		restitution=0.55000001;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="cp_concrete_grass";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class cp_concrete2: DZ_SurfacesExt
	{
		files="cp_concrete2*";
		deflection=0.1;
		friction=0.98000002;
		restitution=0.55000001;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="empty";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class cp_dirt: DZ_SurfacesExt
	{
		files="cp_dirt*";
		deflection=0.1;
		friction=0.75;
		restitution=0.34;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="soft_ground";
		character="cp_dirt_grass";
		footDamage=0.057999998;
		audibility=0.69999999;
		impact="Hit_Dirt";
		isDigable=1;
		isFertile=1;
		toolDamage=0.80000001;
		vpSurface="Dirt";
	};
	class cp_broadleaf_dense1: DZ_SurfacesExt
	{
		files="cp_broadleaf_dense1*";
		deflection=0.1;
		friction=0.69999999;
		restitution=0.34;
		soundEnviron="forest";
		soundHit="soft_ground";
		character="cp_broadleaf_dense1";
		footDamage=0.057999998;
		audibility=0.69999999;
		class Visible
		{
			prone=0.30000001;
			kneel=0.5;
			stand=0.60000002;
		};
		impact="Hit_Foliage";
		isDigable=1;
		isFertile=1;
		toolDamage=1.2;
		windModifier=0.75;
		vpSurface="Forest";
	};
	class cp_broadleaf_dense2: cp_broadleaf_dense1
	{
		files="cp_broadleaf_dense2*";
		character="cp_broadleaf_dense2";
	};
	class cp_broadleaf_sparse1: cp_broadleaf_dense1
	{
		files="cp_broadleaf_sparse1*";
		character="cp_broadleaf_sparse1";
	};
	class cp_broadleaf_sparse2: cp_broadleaf_dense1
	{
		files="cp_broadleaf_sparse2*";
		character="cp_broadleaf_sparse2";
	};
	class cp_conifer_common1: DZ_SurfacesExt
	{
		files="cp_conifer_common1*";
		deflection=0.1;
		friction=0.75;
		restitution=0.25999999;
		soundEnviron="forest";
		soundHit="soft_ground";
		character="cp_conifer_common1";
		footDamage=0.057999998;
		audibility=0.60000002;
		class Visible
		{
			prone=0.1;
			kneel=0.30000001;
			stand=0.5;
		};
		impact="Hit_Foliage";
		isDigable=1;
		isFertile=1;
		toolDamage=1.2;
		windModifier=0.75;
		vpSurface="Forest";
	};
	class cp_conifer_common2: cp_conifer_common1
	{
		files="cp_conifer_common2*";
		character="cp_conifer_common2";
	};
	class cp_conifer_moss1: cp_conifer_common1
	{
		files="cp_conifer_moss1*";
		character="cp_conifer_moss1";
	};
	class cp_conifer_moss2: cp_conifer_common1
	{
		files="cp_conifer_moss2*";
		character="cp_conifer_moss2";
	};
	class cp_grass: DZ_SurfacesExt
	{
		files="cp_grass_ca*";
		deflection=0.1;
		friction=0.85000002;
		restitution=0.40000001;
		soundEnviron="grass";
		soundHit="soft_ground";
		character="cp_grass";
		audibility=0.40000001;
		footDamage=0.023;
		class Visible
		{
			prone=0.2;
			kneel=0.60000002;
			stand=0.80000001;
		};
		impact="Hit_Grass";
		isDigable=1;
		isFertile=1;
		vpSurface="Grass";
	};
	class cp_grass_tall: DZ_SurfacesExt
	{
		files="cp_grass_tall*";
		deflection=0.1;
		friction=0.80000001;
		restitution=0.38;
		soundEnviron="grass";
		soundHit="soft_ground";
		character="cp_grass_tall";
		audibility=0.5;
		footDamage=0.023;
		class Visible
		{
			prone=0.1;
			kneel=0.40000001;
			stand=0.75;
		};
		impact="Hit_Grass";
		isDigable=1;
		isFertile=1;
		vpSurface="Grass";
	};
	class cp_gravel: DZ_SurfacesExt
	{
		files="cp_gravel*";
		deflection=0.40000001;
		friction=0.89999998;
		restitution=0.38999999;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		audibility=1.2;
		footDamage=0.234;
		impact="Hit_Gravel";
		isDigable=1;
		isFertile=0;
		toolDamage=1.2;
		vpSurface="Gravel";
	};
	class cp_rock: DZ_SurfacesExt
	{
		files="cp_rock*";
		deflection=0.89999998;
		friction=0.86000001;
		restitution=0.60000002;
		soundEnviron="rock";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.50199997;
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
	};
	class asphalt_ext: DZ_SurfacesExt
	{
		files="asphalt_ext*";
		friction=0.98000002;
		restitution=0.55000001;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.117;
		audibility=0.69999999;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class asphalt_int: DZ_SurfacesInt
	{
		files="asphalt_int*";
		friction=0.98000002;
		restitution=0.55000001;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.117;
		audibility=0.69999999;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class asphalt_destroyed_ext: DZ_SurfacesExt
	{
		files="asphalt_destroyed_ext*";
		friction=0.95999998;
		restitution=0.5;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=0.89999998;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class asphalt_destroyed_int: DZ_SurfacesInt
	{
		files="asphalt_destroyed_int*";
		friction=0.95999998;
		restitution=0.5;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=0.89999998;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class concrete_ext: DZ_SurfacesExt
	{
		files="concrete_ext*";
		friction=0.97000003;
		restitution=0.47999999;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class concrete_int: DZ_SurfacesInt
	{
		files="concrete_int*";
		friction=0.95999998;
		restitution=0.47999999;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class stone_ext: DZ_SurfacesExt
	{
		files="stone_ext*";
		friction=0.93000001;
		restitution=0.68000001;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.50199997;
		audibility=0.69999999;
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class stone_int: DZ_SurfacesInt
	{
		files="stone_int*";
		friction=0.93000001;
		restitution=0.68000001;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.50199997;
		audibility=0.69999999;
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class gravel_large_ext: DZ_SurfacesExt
	{
		files="gravel_large_ext*";
		friction=0.91000003;
		restitution=0.47999999;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=0.80000001;
		class Visible
		{
			prone=0.94999999;
			kneel=1;
			stand=1;
		};
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
		vpSurface="Gravel";
	};
	class gravel_large_int: DZ_SurfacesInt
	{
		files="gravel_large_int*";
		friction=0.91000003;
		restitution=0.47999999;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=0.80000001;
		class Visible
		{
			prone=0.94999999;
			kneel=1;
			stand=1;
		};
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
		vpSurface="Gravel";
	};
	class gravel_small_ext: DZ_SurfacesExt
	{
		files="gravel_small_ext*";
		friction=0.89999998;
		restitution=0.40000001;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=1;
		class Visible
		{
			prone=0.94999999;
			kneel=1;
			stand=1;
		};
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
		vpSurface="Gravel";
	};
	class gravel_small_int: DZ_SurfacesInt
	{
		files="gravel_small_int*";
		friction=0.89999998;
		restitution=0.40000001;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=1;
		class Visible
		{
			prone=0.94999999;
			kneel=1;
			stand=1;
		};
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
		vpSurface="Gravel";
	};
	class sand_ext: DZ_SurfacesExt
	{
		files="sand_ext*";
		friction=0.38999999;
		restitution=0.14;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="sand";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.057999998;
		audibility=0.40000001;
		impact="Hit_Sand";
		isDigable=1;
		isFertile=0;
		toolDamage=0.80000001;
	};
	class sand_int: DZ_SurfacesInt
	{
		files="sand_int*";
		friction=0.38999999;
		restitution=0.14;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="sand";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.057999998;
		audibility=0.40000001;
		impact="Hit_Sand";
		isDigable=1;
		isFertile=0;
		toolDamage=0.80000001;
	};
	class dirt_ext: DZ_SurfacesExt
	{
		files="dirt_ext*";
		friction=0.94;
		restitution=0.36000001;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="dirt";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.057999998;
		audibility=0.40000001;
		impact="Hit_Dirt";
		isDigable=1;
		isFertile=0;
		vpSurface="Dirt";
	};
	class dirt_int: DZ_SurfacesInt
	{
		files="dirt_int*";
		friction=0.34;
		restitution=0.12;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="dirt";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.057999998;
		audibility=0.40000001;
		impact="Hit_Dirt";
		isDigable=1;
		isFertile=0;
		vpSurface="Dirt";
	};
	class rubble_large_ext: DZ_SurfacesExt
	{
		files="rubble_large_ext*";
		friction=0.64999998;
		restitution=0.28;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.50199997;
		audibility=1;
		class Visible
		{
			prone=0.94999999;
			kneel=1;
			stand=1;
		};
		impact="Hit_Gravel";
		isDigable=1;
		isFertile=0;
		toolDamage=1.5;
	};
	class rubble_large_int: DZ_SurfacesInt
	{
		files="rubble_large_int*";
		friction=0.64999998;
		restitution=0.28;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.50199997;
		audibility=1;
		class Visible
		{
			prone=0.94999999;
			kneel=1;
			stand=1;
		};
		impact="Hit_Gravel";
		isDigable=1;
		isFertile=0;
		toolDamage=1.5;
	};
	class rubble_small_ext: DZ_SurfacesExt
	{
		files="rubble_small_ext*";
		friction=0.57999998;
		restitution=0.22;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=1;
		class Visible
		{
			prone=0.94999999;
			kneel=1;
			stand=1;
		};
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
	};
	class rubble_small_int: DZ_SurfacesInt
	{
		files="rubble_small_int*";
		friction=0.57999998;
		restitution=0.22;
		wheelParticle="vehicle_wheel_gravel";
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=1;
		class Visible
		{
			prone=0.94999999;
			kneel=1;
			stand=1;
		};
		impact="Hit_Gravel";
		isDigable=1;
		isFertile=0;
		toolDamage=1.5;
	};
	class trash_ext: DZ_SurfacesExt
	{
		files="trash_ext*";
		friction=0.79000002;
		restitution=0.1;
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=0.80000001;
		class Visible
		{
			prone=0.89999998;
			kneel=1;
			stand=1;
		};
		impact="Hit_Metal";
		isDigable=1;
		isFertile=0;
		toolDamage=1.5;
	};
	class trash_int: DZ_SurfacesInt
	{
		files="trash_int*";
		friction=0.79000002;
		restitution=0.1;
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		footDamage=0.234;
		audibility=0.80000001;
		class Visible
		{
			prone=0.89999998;
			kneel=1;
			stand=1;
		};
		impact="Hit_Metal";
		isDigable=1;
		isFertile=0;
		toolDamage=1.5;
	};
	class grass_dry_ext: DZ_SurfacesExt
	{
		files="grass_dry_ext*";
		friction=0.40000001;
		restitution=0.2;
		soundEnviron="grass";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.80000001;
		footDamage=0.057999998;
		class Visible
		{
			prone=0.2;
			kneel=0.60000002;
			stand=0.80000001;
		};
		impact="Hit_Grass";
		isDigable=1;
		isFertile=0;
		vpSurface="Grass";
	};
	class grass_dry_int: DZ_SurfacesInt
	{
		files="grass_dry_int*";
		friction=0.40000001;
		restitution=0.2;
		soundEnviron="grass";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.80000001;
		footDamage=0.057999998;
		class Visible
		{
			prone=0.2;
			kneel=0.60000002;
			stand=0.80000001;
		};
		impact="Hit_Grass";
		isDigable=1;
		isFertile=0;
		vpSurface="Grass";
	};
	class metal_thick_ext: DZ_SurfacesExt
	{
		files="metal_thick_ext*";
		friction=0.75;
		restitution=0.41;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.057999998;
		impact="Hit_Metal";
		isDigable=0;
		isFertile=0;
	};
	class metal_thick_int: DZ_SurfacesInt
	{
		files="metal_thick_int*";
		friction=0.75;
		restitution=0.41;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.057999998;
		impact="Hit_Metal";
		isDigable=0;
		isFertile=0;
	};
	class metal_thin_ext: DZ_SurfacesExt
	{
		files="metal_thin_ext*";
		friction=0.68000001;
		restitution=0.41;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.057999998;
		impact="Hit_Metal";
		isDigable=0;
		isFertile=0;
	};
	class metal_thin_int: DZ_SurfacesInt
	{
		files="metal_thin_int*";
		friction=0.68000001;
		restitution=0.41;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.057999998;
		impact="Hit_Metal";
		isDigable=0;
		isFertile=0;
	};
	class metal_thin_mesh_ext: DZ_SurfacesExt
	{
		files="metal_thin_mesh_ext*";
		friction=0.69999999;
		restitution=0.51999998;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.057999998;
		impact="Hit_Metal";
		isDigable=0;
		isFertile=0;
	};
	class metal_thin_mesh_int: DZ_SurfacesInt
	{
		files="metal_thin_mesh_int*";
		friction=0.69999999;
		restitution=0.51999998;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.057999998;
		impact="Hit_Metal";
		isDigable=0;
		isFertile=0;
	};
	class asphalt_felt_ext: DZ_SurfacesExt
	{
		files="asphalt_felt_ext*";
		friction=0.77999997;
		restitution=0.23999999;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.89999998;
		footDamage=0.057999998;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class asphalt_felt_int: DZ_SurfacesInt
	{
		files="asphalt_felt_int*";
		friction=0.77999997;
		restitution=0.23999999;
		wheelParticle="vehicle_wheel_asphalt";
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.89999998;
		footDamage=0.057999998;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class ceramic_tiles_ext: DZ_SurfacesExt
	{
		files="ceramic_tiles_ext*";
		friction=0.66000003;
		restitution=0.41;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.69999999;
		footDamage=0.057999998;
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
	};
	class ceramic_tiles_int: DZ_SurfacesInt
	{
		files="ceramic_tiles_int*";
		friction=0.66000003;
		restitution=0.41;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.69999999;
		footDamage=0.057999998;
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
	};
	class ceramic_tiles_roof_ext: DZ_SurfacesExt
	{
		files="ceramic_tiles_roof_ext*";
		friction=0.66000003;
		restitution=0.41;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.057999998;
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
	};
	class ceramic_tiles_roof_int: DZ_SurfacesInt
	{
		files="ceramic_tiles_roof_int*";
		friction=0.66000003;
		restitution=0.41;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.057999998;
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
	};
	class lino_ext: DZ_SurfacesExt
	{
		files="lino_ext*";
		friction=0.46000001;
		restitution=0.31999999;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.40000001;
		footDamage=0.023;
		impact="Hit_Rubber";
		isDigable=0;
		isFertile=0;
	};
	class lino_int: DZ_SurfacesInt
	{
		files="lino_int*";
		friction=0.46000001;
		restitution=0.31999999;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.40000001;
		footDamage=0.023;
		impact="Hit_Rubber";
		isDigable=0;
		isFertile=0;
	};
	class textile_carpet_ext: DZ_SurfacesExt
	{
		files="textile_carpet_ext*";
		friction=0.88999999;
		restitution=0.23;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.40000001;
		footDamage=0.057999998;
		impact="Hit_Textile";
		isDigable=0;
		isFertile=0;
	};
	class textile_carpet_int: DZ_SurfacesInt
	{
		files="textile_carpet_int*";
		friction=0.88999999;
		restitution=0.23;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.40000001;
		footDamage=0.057999998;
		impact="Hit_Textile";
		isDigable=0;
		isFertile=0;
	};
	class wood_parquet_ext: DZ_SurfacesExt
	{
		files="wood_parquet_ext*";
		friction=0.56;
		restitution=0.25999999;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.40000001;
		footDamage=0.023;
		impact="Hit_Wood";
		isDigable=0;
		isFertile=0;
	};
	class wood_parquet_int: DZ_SurfacesInt
	{
		files="wood_parquet_int*";
		friction=0.56;
		restitution=0.25999999;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.5;
		footDamage=0.023;
		impact="Hit_Wood";
		isDigable=0;
		isFertile=0;
	};
	class wood_planks_ext: DZ_SurfacesExt
	{
		files="wood_planks_ext*";
		friction=0.72000003;
		restitution=0.28999999;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		impact="Hit_Wood";
		audibility=0.60000002;
		footDamage=0.023;
		isDigable=0;
		isFertile=0;
	};
	class wood_planks_int: DZ_SurfacesInt
	{
		files="wood_planks_int*";
		friction=0.72000003;
		restitution=0.27000001;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.60000002;
		footDamage=0.023;
		impact="Hit_Wood";
		isDigable=0;
		isFertile=0;
	};
	class concrete_stairs_ext: DZ_SurfacesExt
	{
		files="concrete_stairs_ext*";
		isStairs=1;
		friction=0.93000001;
		restitution=0.47999999;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.69999999;
		footDamage=0.117;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
	};
	class concrete_stairs_int: DZ_SurfacesInt
	{
		files="concrete_stairs_int*";
		isStairs=1;
		friction=0.94999999;
		restitution=0.43000001;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.69999999;
		footDamage=0.117;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
	};
	class metal_stairs_ext: DZ_SurfacesExt
	{
		files="metal_stairs_ext*";
		isStairs=1;
		friction=0.60000002;
		restitution=0.19;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.89999998;
		footDamage=0.057999998;
		impact="Hit_Metal";
		isDigable=0;
		isFertile=0;
	};
	class metal_stairs_int: DZ_SurfacesInt
	{
		files="metal_stairs_int*";
		isStairs=1;
		friction=0.55000001;
		restitution=0.18000001;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.89999998;
		footDamage=0.057999998;
		impact="Hit_Metal";
		isDigable=0;
		isFertile=0;
	};
	class wood_planks_stairs_ext: DZ_SurfacesExt
	{
		files="wood_planks_stairs_ext*";
		isStairs=1;
		friction=0.72000003;
		restitution=0.28999999;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.69999999;
		footDamage=0.057999998;
		impact="Hit_Wood";
		isDigable=0;
		isFertile=0;
	};
	class wood_planks_stairs_int: DZ_SurfacesInt
	{
		files="wood_planks_stairs_int*";
		isStairs=1;
		friction=0.56;
		restitution=0.25999999;
		soundEnviron="road";
		soundHit="hard_ground";
		character="Empty";
		audibility=0.69999999;
		footDamage=0.057999998;
		impact="Hit_Wood";
		isDigable=0;
		isFertile=0;
	};
	class fresh_water_ext: DZ_SurfacesExt
	{
		files="water_ext*";
		friction=0.89999998;
		restitution=0;
		isLiquid=1;
		liquidType=524288;
		soundEnviron="water";
		character="Empty";
		impact="Hit_Water";
		isDigable=0;
		isFertile=0;
		audibility=0.69999999;
	};
	class fresh_water_int: DZ_SurfacesInt
	{
		files="water_int*";
		friction=0.89999998;
		restitution=0;
		isLiquid=1;
		liquidType=524288;
		soundEnviron="water";
		character="Empty";
		impact="Hit_Water";
		isDigable=0;
		isFertile=0;
		audibility=0.69999999;
	};
	class still_water_ext: DZ_SurfacesExt
	{
		files="still_water_ext*";
		friction=0.89999998;
		restitution=0;
		isLiquid=1;
		liquidType=512;
		soundEnviron="water";
		character="Empty";
		impact="Hit_Water";
		isDigable=0;
		isFertile=0;
		audibility=0.69999999;
	};
	class still_water_int: DZ_SurfacesInt
	{
		files="still_water_int*";
		friction=0.89999998;
		restitution=0;
		isLiquid=1;
		liquidType=512;
		soundEnviron="water";
		character="Empty";
		impact="Hit_Water";
		isDigable=0;
		isFertile=0;
		audibility=0.69999999;
	};
	class clean_water_ext: DZ_SurfacesExt
	{
		files="clean_water_ext*";
		friction=0.89999998;
		restitution=0;
		isLiquid=1;
		liquidType=4194304;
		soundEnviron="water";
		character="Empty";
		impact="Hit_Water";
		isDigable=0;
		isFertile=0;
		audibility=0.69999999;
	};
};
