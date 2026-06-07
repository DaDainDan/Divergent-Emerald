MirageTower_1F_MapScripts::
# 2 "data/maps/MirageTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MirageTower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MirageTower_1F/scripts.pory"
	setflag FLAG_ENTERED_MIRAGE_TOWER
# 4 "data/maps/MirageTower_1F/scripts.pory"
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 5 "data/maps/MirageTower_1F/scripts.pory"
	setflag FLAG_LANDMARK_MIRAGE_TOWER
	end

