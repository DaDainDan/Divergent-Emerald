BattleFrontier_OutsideEast_MapScripts::
# 2 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME
# 11 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME_2
BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME_5
BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 7 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME_1

BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 5 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_RESUME_4

BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 13 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 14 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
	goto BattleFrontier_OutsideEast_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


BattleFrontier_OutsideEast_EventScript_BattleTowerSign::
# 22 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideEast_EventScript_BattlePalaceSign::
# 27 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePalaceSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideEast_EventScript_BattleArenaSign::
# 32 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleArenaSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideEast_EventScript_BattlePyramidSign::
# 37 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePyramidSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideEast_EventScript_NinjaBoy::
# 42 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Man1::
# 47 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Hiker::
# 52 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PyramidTooHarsh, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_HexManiac::
# 57 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ThriveInDarkness, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_BlackBelt1::
# 62 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Cook::
# 67 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 68 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BelieveInYouBuddy, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideEast_EventScript_Zigzagoon::
# 73 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock_faceplayer
# 74 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 75 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 76 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant, MSGBOX_DEFAULT
# 77 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
	release_end


BattleFrontier_OutsideEast_EventScript_RichBoy::
# 82 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_ExpertF::
# 87 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceBeatGymLeader, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_TriathleteF::
# 92 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Twin::
# 97 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Man2::
# 102 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 103 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideEast_EventScript_TriathleteM::
# 108 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_DidScottBringYouHere, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Sudowoodo::
# 113 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock_faceplayer
# 114 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 115 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 116 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 117 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
	release_end


BattleFrontier_OutsideEast_EventScript_WaterSudowoodo::
# 122 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock_faceplayer
# 123 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	special DoWateringBerryTreeAnim
# 124 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 125 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 126 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 127 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
# 128 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
# 129 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	closemessage
# 130 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 131 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 132 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay 40
# 133 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 134 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FRONTIER_SUDOWOODO
# 135 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 40
# 136 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 137 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	dowildbattle
# 138 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 139 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 140 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	case B_OUTCOME_WON, BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_3
# 142 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	case B_OUTCOME_RAN, BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_3
# 143 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_3
# 148 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
	release_end

BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_3:
# 144 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 145 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


# 152 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Movement_SudowoodoShake:
# 153 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 154 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 155 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 156 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 157 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 158 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 159 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 160 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 161 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 162 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 163 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 164 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 165 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 166 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 167 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
	step_end

BattleFrontier_OutsideEast_EventScript_Maniac1::
# 171 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Girl::
# 176 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_PsychicM::
# 181 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Man3::
# 186 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GotWipedOut, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Woman1::
# 191 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Woman2::
# 196 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_BlackBelt2::
# 201 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_Maniac2::
# 206 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 207 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideEast_EventScript_Woman3::
# 212 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 213 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideEast_EventScript_RankingHallSign::
# 218 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_RankingHallSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideEast_EventScript_ExchangeCornerSign::
# 223 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ExchangeCornerSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideEast_EventScript_Gentleman::
# 228 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_EventScript_OldWoman::
# 233 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock_faceplayer
# 234 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWoman_2
# 238 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
	release_end

BattleFrontier_OutsideEast_EventScript_OldWoman_2:
# 235 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideEast_EventScript_Camper::
# 243 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_StickyMonWithLongTail, MSGBOX_NPC
	end


BattleFrontier_OutsideEast_Text_BattleTowerSign::
# 247 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the BATTLE TOWER!\n"
	.string "Keep the win streak as the toughest\l"
	.string "TRAINER!$"

BattleFrontier_OutsideEast_Text_BattlePalaceSign::
# 253 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the BATTLE PALACE!\n"
	.string "Keep your eyes on POKéMON battles!$"

BattleFrontier_OutsideEast_Text_BattleArenaSign::
# 258 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the BATTLE ARENA!\n"
	.string "Let the toughest teams gather!$"

BattleFrontier_OutsideEast_Text_BattlePyramidSign::
# 263 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the BATTLE PYRAMID!\n"
	.string "Advance through the Battle Quest!$"

BattleFrontier_OutsideEast_Text_RankingHallSign::
# 268 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "BATTLE FRONTIER RANKING HALL\n"
	.string "Set your sights on new records!$"

BattleFrontier_OutsideEast_Text_ExchangeCornerSign::
# 273 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "BATTLE POINT EXCHANGE SERVICE CORNER\n"
	.string "Exchange your Battle Points!$"

BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial::
# 278 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wow!\n"
	.string "It's huge!\p"
	.string "The BATTLE TOWER feels special.\n"
	.string "It's different from the others.$"

BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier::
# 286 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "My grand ambition is to conquer both\n"
	.string "the BATTLE FRONTIER and the POKéMON\l"
	.string "LEAGUE.\p"
	.string "And if my dream comes true…\p"
	.string "I… I'm going to ask MIMI next door\n"
	.string "if she will be friends with me!$"

BattleFrontier_OutsideEast_Text_PyramidTooHarsh::
# 297 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The BATTLE PYRAMID's too harsh!\n"
	.string "I just can't make it to the top!\p"
	.string "Since I'm out of options, maybe I can\n"
	.string "climb the outside…$"

BattleFrontier_OutsideEast_Text_ThriveInDarkness::
# 305 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I thrive in darkness…\n"
	.string "Yes… What is worthy of me?\l"
	.string "None other than the BATTLE PYRAMID…\p"
	.string "What say you to wandering in darkness\n"
	.string "and in utter and total desperation?$"

BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam::
# 314 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I didn't sleep for a week, but then\n"
	.string "I put together the ultimate team!\p"
	.string "I can't see myself losing, no joke.\n"
	.string "We're storming the BATTLE ARENA!$"

BattleFrontier_OutsideEast_Text_DidScottBringYouHere::
# 322 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Did SCOTT bring you here, too?\n"
	.string "What is it with that guy?\p"
	.string "It sounds like he really does know\n"
	.string "how to spot talented TRAINERS, but…\p"
	.string "I've never seen him battling in person\n"
	.string "ever.$"

BattleFrontier_OutsideEast_Text_BelieveInYouBuddy::
# 333 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ZIGG!\n"
	.string "I believe in you, little buddy!\p"
	.string "I'll make my little ZIGG any favorite\n"
	.string "tasty treats you like if you win!$"

BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant::
# 341 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ZIGZAGOON looks vacant…$"

BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody::
# 345 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "People call me a busybody,\n"
	.string "but I can't help it.\p"
	.string "Your hat's on crooked!\n"
	.string "Oh, no, trash on the ground!\l"
	.string "Oops, it's almost dinnertime!\p"
	.string "I don't know if I can stand to just\n"
	.string "watch at the BATTLE PALACE…$"

BattleFrontier_OutsideEast_Text_OnceBeatGymLeader::
# 357 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I may not look that impressive now,\n"
	.string "but I once beat a GYM LEADER.\p"
	.string "Who knows, maybe I should give it\n"
	.string "another shot at glory.$"

BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles::
# 365 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'm fast on my BIKE, and that goes for\n"
	.string "the way I battle, too.\p"
	.string "I win matches in the blink of\n"
	.string "an eye!$"

BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon::
# 373 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'm better than my daddy\n"
	.string "at POKéMON.$"

BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy::
# 378 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Go on, my baby sweetie!\n"
	.string "Go rack up some wins for Daddy!\p"
	.string "You're just like your mother,\n"
	.string "so you'll be dominating!$"

BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena::
# 386 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It wasn't easy getting here,\n"
	.string "but I'd heard about this knockout\l"
	.string "pretty girl at the BATTLE ARENA.\p"
	.string "Instead of her, do you know what\n"
	.string "I found?\p"
	.string "A whole teeming mob of sweaty,\n"
	.string "stinky, and primitive martial artists!$"

BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere::
# 398 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I sometimes see this really important-\n"
	.string "looking old man going in there.\p"
	.string "He has these really awesome POKéMON.\n"
	.string "He seems really nice, though.$"

BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid::
# 406 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Do you know it?\n"
	.string "The legend of the BATTLE PYRAMID?\p"
	.string "When there comes a confident TRAINER\n"
	.string "reaching for the golden pinnacle,\l"
	.string "there shall appear a man among men.\p"
	.string "Don't know that legend?\n"
	.string "Well, of course not!\l"
	.string "I just made it up!\p"
	.string "What's it supposed to mean?\n"
	.string "That, my friend, I can't say!$"

BattleFrontier_OutsideEast_Text_GotWipedOut::
# 422 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Man! Oh man!\n"
	.string "I've never lost once before!\p"
	.string "But I got wiped out with no saving\n"
	.string "grace at all!\p"
	.string "And then I'm told I don't have any\n"
	.string "talent?! Man!$"

BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower::
# 433 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This guy ran into a horribly tough\n"
	.string "TRAINER while he was on the BATTLE\l"
	.string "TOWER challenge.\p"
	.string "Now look at him…\p"
	.string "You need to be cautious if you ever\n"
	.string "decide to go to the BATTLE TOWER.$"

BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll::
# 444 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Yes!\n"
	.string "I've finally got enough Battle Points!\p"
	.string "I guess I'll trade for another giant\n"
	.string "plush DOLL!$"

BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere::
# 452 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oh, yeah, okay!\n"
	.string "So this is the RANKING HALL!\p"
	.string "I'd like to go down in history as\n"
	.string "a super champ and have my name\l"
	.string "recorded here for posterity.$"

BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou::
# 461 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "With you by my side, I can do anything.$"

BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome::
# 465 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ooh, darling, you are so wonderful!\p"
	.string "Ooh, I just can't wait anymore!\p"
	.string "Let's go to a MULTI BATTLE ROOM\n"
	.string "right this instant!\p"
	.string "If we get together in the BATTLE SALON,\n"
	.string "the power of our love will overcome\l"
	.string "everyone we meet.\p"
	.string "Why, before us, darling, everything\n"
	.string "will topple like dominoes!$"

BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers::
# 481 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The BATTLE FRONTIER isn't exclusively\n"
	.string "for tough TRAINERS.\p"
	.string "Many people with special abilities\n"
	.string "have been invited, it seems.\p"
	.string "That man SCOTT…\p"
	.string "He may have built this place to serve\n"
	.string "a bigger objective…$"

BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle::
# 494 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Excuse me, young one.\n"
	.string "Have you good eyesight?\p"
	.string "There is an odd tree past here, and to\n"
	.string "my tired eyes it seems to wiggle.$"

BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere::
# 502 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Excuse me, young one.\n"
	.string "Have you a good memory?\p"
	.string "I have this feeling there once was\n"
	.string "an odd tree past here.$"

BattleFrontier_OutsideEast_Text_StickyMonWithLongTail::
# 510 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I…\n"
	.string "I saw it!\p"
	.string "There was a sticky sort of a POKéMON\n"
	.string "with a long tail up ahead!\p"
	.string "It was hiding under a boulder, and\n"
	.string "it kept staring at me!$"
