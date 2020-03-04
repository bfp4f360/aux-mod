	class macro_new_ammo(generic_aircraft_laser_cannon_purple)  : macro_new_ammo(generic_aircraft_laser_gun_purple) 
	{
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0;
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_plasma_red) : macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 45;
		indirecthit = 20;
		indirecthitrange = 1;
		caliber = 1;
		explosive = 0.7;
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_plasma_blue) : macro_new_ammo(generic_aircraft_laser_gun_blue)
	{
		hit = 45;
		indirecthit = 20;
		indirecthitrange = 0;
		ExplosionEffects = "SWOP_LaserExploSmall";
		caliber = 1;
		explosive = 0;
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_blue) : macro_new_ammo(generic_aircraft_laser_gun_blue)
	{
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0;
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_red) : macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0;
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_green) : macro_new_ammo(generic_aircraft_laser_gun_green)
	{
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0;
	};