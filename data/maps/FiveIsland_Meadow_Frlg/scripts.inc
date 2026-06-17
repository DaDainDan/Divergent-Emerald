FiveIsland_Meadow_Frlg_MapScripts::
# 2 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

FiveIsland_Meadow_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
FiveIsland_Meadow_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

FiveIsland_Meadow_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
	goto FiveIsland_Meadow_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


FiveIsland_Meadow_EventScript_WarehouseDoor::
# 11 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	lockall
# 12 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoor_2
# 15 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_WarehouseDoor_3
# 26 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
FiveIsland_Meadow_EventScript_WarehouseDoor_1:
# 28 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	releaseall
	end

FiveIsland_Meadow_EventScript_WarehouseDoor_2:
# 13 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
	goto FiveIsland_Meadow_EventScript_WarehouseDoor_1

FiveIsland_Meadow_EventScript_WarehouseDoor_3:
# 16 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
# 17 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
# 18 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	waitmessage
# 19 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	delay 60
# 20 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
# 21 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	special DrawWholeMapView
# 22 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	playse SE_PIN
# 23 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	waitse
	goto FiveIsland_Meadow_EventScript_WarehouseDoor_1


FiveIsland_Meadow_EventScript_Rocket1::
# 33 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
# 34 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_Meadow_EventScript_Rocket2::
# 39 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
# 40 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_Meadow_EventScript_Rocket3::
# 45 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
# 46 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_Meadow_Text_DoorNeedsTwoPasswords::
# 51 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "とびらを　あけるには\n"
	.string "パスワードが　2つ　いるようだ$"

FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded::
# 56 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "{PLAYER} entered a password.\p"
	.string "“GOLDEEN need log.”\p"
	.string "… …  … …  … …\p"
	.string "Another password is needed to\n"
	.string "open the door…$"

FiveIsland_Meadow_Text_EnteredPasswordDoorOpened::
# 67 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "{PLAYER} entered two passwords.\p"
	.string "“GOLDEEN need log.”\n"
	.string "“Yes, nah, CHANSEY.”\p"
	.string "… …  … …  … …\p"
	.string "The WAREHOUSE's door opened!$"

FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen::
# 78 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "The WAREHOUSE's door is already\n"
	.string "open.$"

FiveIsland_Meadow_Text_Rocket1Intro::
# 83 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "This area's strictly off-limits!\n"
	.string "Out, out!$"

FiveIsland_Meadow_Text_Rocket1Defeat::
# 88 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Is this for real?$"

FiveIsland_Meadow_Text_Rocket1PostBattle::
# 92 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You don't have any business here!\n"
	.string "Go home!$"

FiveIsland_Meadow_Text_Rocket2Intro::
# 97 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "There's nothing past here except\n"
	.string "our WAREHOUSE.\p"
	.string "So what brings you here?$"

FiveIsland_Meadow_Text_Rocket2Defeat::
# 104 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "That wasn't supposed to happen…$"

FiveIsland_Meadow_Text_Rocket2PostBattle::
# 108 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You're wanting to know what's inside\n"
	.string "this WAREHOUSE?\p"
	.string "It's better you didn't know.\n"
	.string "For your own sake, I mean.$"

FiveIsland_Meadow_Text_Rocket3Intro::
# 116 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You'd be wasting time even if you\n"
	.string "were to get by me.$"

FiveIsland_Meadow_Text_Rocket3Defeat::
# 121 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Oh, that makes me furious!$"

FiveIsland_Meadow_Text_Rocket3PostBattle::
# 125 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You won't be able to get in without\n"
	.string "the passwords anyway.$"
