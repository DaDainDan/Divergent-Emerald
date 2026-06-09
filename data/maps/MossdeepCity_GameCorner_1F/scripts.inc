MossdeepCity_GameCorner_1F_MapScripts::
# 8 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 2 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_GameCorner_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MossdeepCity_GameCorner_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

MossdeepCity_GameCorner_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
	.2byte 0

MossdeepCity_GameCorner_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_CheckTurnAttendant
	.2byte 0


MossdeepCity_GameCorner_1F_EventScript_InfoMan::
# 13 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock_faceplayer
# 14 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_InfoMan2
	release_end


MossdeepCity_GameCorner_1F_EventScript_OldMan::
# 20 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock_faceplayer
# 21 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_OldMan2
	release_end


RS_MysteryEventsHouse_EventScript_Door::
# 30 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox RS_MysteryEventsHouse_Text_DoorIsLocked, MSGBOX_SIGN
	end


RS_MysteryEventsHouse_Text_OldManGreeting::
# 34 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "When I was young, I traveled the world\n"
	.string "as a POKéMON TRAINER.\p"
	.string "Now that I've become an old buzzard,\n"
	.string "my only amusement is watching young\l"
	.string "TRAINERS battle.$"

RS_MysteryEventsHouse_Text_DoorIsLocked::
# 43 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "The door appears to be locked.$"

RS_MysteryEventsHouse_Text_ChallengeVisitingTrainer::
# 47 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "A TRAINER named {STR_VAR_1} is\n"
	.string "visiting my home.\p"
	.string "Would you like to challenge\n"
	.string "{STR_VAR_1}?$"

RS_MysteryEventsHouse_Text_YouWontBattle::
# 55 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "You won't battle? I'm disappointed\n"
	.string "that I can't see you battle…$"

RS_MysteryEventsHouse_Text_KeepItToA3On3::
# 60 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Oh, good, good!\p"
	.string "But my house isn't all that sturdy.\p"
	.string "Could I ask you to keep it down to\n"
	.string "a 3-on-3 match?$"

RS_MysteryEventsHouse_Text_SaveYourProgress::
# 69 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Before you two battle, you should\n"
	.string "save your progress.$"

RS_MysteryEventsHouse_Text_HopeToSeeAGoodMatch::
# 74 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "I hope to see a good match!$"

RS_MysteryEventsHouse_Text_BattleTie::
# 78 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "So, it became a standoff.\p"
	.string "It was a brilliant match in which\n"
	.string "neither side conceded a step!$"

RS_MysteryEventsHouse_Text_BattleWon::
# 85 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "That was superlative!\p"
	.string "Why, it was like seeing myself in\n"
	.string "my youth again!$"

RS_MysteryEventsHouse_Text_BattleLost::
# 92 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Ah, too bad for you!\p"
	.string "But it was a good match.\n"
	.string "I hope you can win next time.$"
