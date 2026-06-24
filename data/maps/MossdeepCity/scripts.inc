MossdeepCity_MapScripts::
# 2 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 4 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 5 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 6 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 7 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/MossdeepCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MossdeepCity_EventScript_PokefanF::
# 15 "data/maps/MossdeepCity/scripts.pory"
	lock_faceplayer
# 16 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanF_2
# 20 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
	release_end

MossdeepCity_EventScript_PokefanF_2:
# 17 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
	release_end


MossdeepCity_EventScript_Sailor::
# 25 "data/maps/MossdeepCity/scripts.pory"
	lock_faceplayer
# 26 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_Sailor_2
# 30 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
	release_end

MossdeepCity_EventScript_Sailor_2:
# 27 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
	release_end


MossdeepCity_EventScript_NinjaBoy::
# 35 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
	end


MossdeepCity_EventScript_ExpertM::
# 40 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
	end


MossdeepCity_EventScript_Girl::
# 45 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
	end


MossdeepCity_EventScript_Woman::
# 50 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
	end


MossdeepCity_EventScript_WhiteRock::
# 55 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
	end


MossdeepCity_EventScript_GymSign::
# 60 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
	end


MossdeepCity_EventScript_CitySign::
# 65 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
	end


MossdeepCity_EventScript_SpaceCenterSign::
# 70 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
	end


MossdeepCity_EventScript_VisitedMossdeep::
# 75 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 76 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 81 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 82 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_0
# 83 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_1
# 85 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_1
# 86 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_1
# 87 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_1
# 88 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_2
# 90 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 91 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 92 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 93 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_3
# 94 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_MAXIE
# 96 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_1
# 97 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_2
# 98 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_3
# 99 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_4
# 100 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 101 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 102 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 103 "data/maps/MossdeepCity/scripts.pory"
	releaseall
	end


# 107 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 109 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 110 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 111 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 111 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 111 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 112 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 112 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 112 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 113 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 113 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 113 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 114 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 114 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 114 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 114 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 114 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 114 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 114 "data/maps/MossdeepCity/scripts.pory"
	walk_right
	step_end

# 117 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 119 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 120 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 121 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 121 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 122 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 122 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 122 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 123 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 123 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 123 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
	step_end

# 127 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 129 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 130 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 131 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
	step_end

MossdeepCity_EventScript_Man::
# 138 "data/maps/MossdeepCity/scripts.pory"
	lock_faceplayer
# 139 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 140 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 141 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
	release_end


MossdeepCity_EventScript_KingsRockBoy::
# 146 "data/maps/MossdeepCity/scripts.pory"
	lock_faceplayer
# 147 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_KingsRockBoy_2
# 151 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 152 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_EventScript_KingsRockBoy_5
# 156 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
	giveitem ITEM_KINGS_ROCK
# 0 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_EventScript_KingsRockBoy_8
MossdeepCity_EventScript_KingsRockBoy_7:
# 160 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
	release_end

MossdeepCity_EventScript_KingsRockBoy_2:
# 148 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
	release_end

MossdeepCity_EventScript_KingsRockBoy_5:
# 153 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
	release_end

MossdeepCity_EventScript_KingsRockBoy_8:
# 158 "data/maps/MossdeepCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MossdeepCity_EventScript_KingsRockBoy_7


MossdeepCity_EventScript_BlackBelt::
# 165 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
	end


MossdeepCity_EventScript_Scott::
# 170 "data/maps/MossdeepCity/scripts.pory"
	lock_faceplayer
# 171 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 172 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 173 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_EventScript_Scott_Movement_0
# 174 "data/maps/MossdeepCity/scripts.pory"
	switch VAR_FACING
# 175 "data/maps/MossdeepCity/scripts.pory"
	case DIR_NORTH, MossdeepCity_EventScript_Scott_3
# 176 "data/maps/MossdeepCity/scripts.pory"
	case DIR_EAST, MossdeepCity_EventScript_Scott_4
MossdeepCity_EventScript_Scott_1:
# 178 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 179 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 180 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_SCOTT
	release_end

MossdeepCity_EventScript_Scott_3:
# 175 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_EventScript_Scott_Movement_1
	goto MossdeepCity_EventScript_Scott_1

MossdeepCity_EventScript_Scott_4:
# 176 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_EventScript_Scott_Movement_2
	goto MossdeepCity_EventScript_Scott_1


# 82 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_0:
# 82 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 82 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 82 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 82 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 82 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 82 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 82 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 82 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 82 "data/maps/MossdeepCity/scripts.pory"
	delay_16
	step_end

# 84 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_1:
# 84 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 84 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 84 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 84 "data/maps/MossdeepCity/scripts.pory"
	delay_16
	step_end

# 89 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_2:
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 89 "data/maps/MossdeepCity/scripts.pory"
	walk_right
	step_end

# 93 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter_Movement_3:
# 93 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 93 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 93 "data/maps/MossdeepCity/scripts.pory"
	walk_right
	step_end

# 173 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott_Movement_0:
# 173 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 173 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 173 "data/maps/MossdeepCity/scripts.pory"
	step_faster_left
	step_end

# 175 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott_Movement_1:
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_left
	step_end

# 176 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott_Movement_2:
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_left
	step_end

MossdeepCity_Text_WantKingsRockStevenGaveMe::
# 184 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
	.string "know what it's good for.\p"
	.string "I think it's called KING'S ROCK.\n"
	.string "Do you want it?$"

MossdeepCity_Text_YouCanKeepIt::
# 192 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
	.string "You're weird.\p"
	.string "You can keep it, but keep it a secret\n"
	.string "from STEVEN.$"

MossdeepCity_Text_StevensHouseOverThere::
# 200 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"

MossdeepCity_Text_WhatToDoWithWeirdRock::
# 204 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
	.string "supposed to do with some weird rock?$"

MossdeepCity_Text_WailmerWatching::
# 209 "data/maps/MossdeepCity/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\n"
	.string "WAILMER.\p"
	.string "It's called, uh…\n"
	.string "What was it now…\p"
	.string "WAI, WAI, WAI…\p"
	.string "WAILMER watching!$"

MossdeepCity_Text_SpaceCenterReceivedLetter::
# 221 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
	.string "launching huge rockets.\p"
	.string "There's been some kind of an uproar\n"
	.string "over a letter they received recently.$"

MossdeepCity_Text_SpaceCenterLaunchingRockets::
# 229 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
	.string "launching huge rockets.$"

MossdeepCity_Text_MossdeepTargetedByMagma::
# 234 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
	.string "I also heard that someone came along\n"
	.string "and wiped the floor with them!\p"
	.string "But MOSSDEEP here's been targeted\n"
	.string "by that TEAM MAGMA.\p"
	.string "If you want to know what they're up to,\n"
	.string "go visit the SPACE CENTER.$"

MossdeepCity_Text_FeelReliefOnLand::
# 248 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
	.string "more important to me.\p"
	.string "But you know? When I get back on land\n"
	.string "after a long voyage, I do feel relief!$"

MossdeepCity_Text_NiceIfWorldCoveredByFlowers::
# 256 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
	.string "If the whole world was covered in\n"
	.string "plants and flowers like this island?$"

MossdeepCity_Text_LifeNeedsSeaToLive::
# 263 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
	.string "though it makes its home on the land.\p"
	.string "Life, having run its course, becomes\n"
	.string "soil and returns to the land.\p"
	.string "And the sea is always connected to\n"
	.string "the land.\p"
	.string "Yes, like the very shoreline here.$"

MossdeepCity_Text_SurfExhilarating::
# 276 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
	.string "But crossing the sea with POKéMON\n"
	.string "using SURF…\p"
	.string "Now that's an exhilarating trip!\n"
	.string "Wouldn't you agree, youngster?$"

MossdeepCity_Text_SpecialSpaceCenterRock::
# 286 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
	.string "the people at the SPACE CENTER.\p"
	.string "They put it here as their wish for\n"
	.string "their rockets to fly safely.\p"
	.string "When you make a wish, what do you use?\n"
	.string "Do you wish upon a star?\p"
	.string "I use a wish tag to make it happen.\n"
	.string "That's what I do.$"

MossdeepCity_Text_ItsAWhiteRock::
# 300 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"

MossdeepCity_Text_GymSign::
# 304 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
	.string "LEADERS: LIZA & TATE\p"
	.string "“The mystic combination!”$"

MossdeepCity_Text_CitySign::
# 311 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
	.string "“Our slogan: Cherish POKéMON!”$"

MossdeepCity_Text_SpaceCenterSign::
# 316 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n"
	.string "“The closest place to space.”$"

MossdeepCity_Text_ScottSomethingWrongWithTown::
# 321 "data/maps/MossdeepCity/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}{PLAYER}{KUN}, feeling good?\n"
	.string "I'm doing great!\p"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
	.string "pretty strong, so I decided to come\l"
	.string "take a look-see for myself.\p"
	.string "But there's something wrong about\n"
	.string "this town.\p"
	.string "People are going on about a warning\n"
	.string "letter and the SPACE CENTER…\p"
	.string "I don't think it concerns me in any\n"
	.string "way, though.$"

MossdeepCity_Text_SootopolisNewGymLeader::
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
	.string "wash over my feet…\p"
	.string "Speaking of the waves, you know that\n"
	.string "island city SOOTOPOLIS?\p"
	.string "I think the GYM there had a new\n"
	.string "LEADER come in.\p"
	.string "People tell me the new LEADER once\n"
	.string "mentored WALLACE.$"
