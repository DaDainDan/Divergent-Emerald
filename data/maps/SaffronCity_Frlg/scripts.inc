SaffronCity_Frlg_MapScripts::
# 2 "data/maps/SaffronCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SaffronCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SaffronCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
# 4 "data/maps/SaffronCity_Frlg/scripts.pory"
	goto_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SaffronCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

SaffronCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/SaffronCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_SAFFRON_DOOR_GUARD_GRUNT, 33, 31
	goto SaffronCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


SaffronCity_EventScript_RocketGrunt1::
# 12 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt2::
# 17 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt3::
# 22 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt4::
# 27 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt5::
# 32 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt6::
# 37 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt7::
# 42 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
	end


SaffronCity_EventScript_DoorGuardGrunt::
# 47 "data/maps/SaffronCity_Frlg/scripts.pory"
	lock
# 48 "data/maps/SaffronCity_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardGrunt_2
# 53 "data/maps/SaffronCity_Frlg/scripts.pory"
	applymovement LOCALID_SAFFRON_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
# 54 "data/maps/SaffronCity_Frlg/scripts.pory"
	waitmovement 0
# 55 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_ImASecurityGuard
	release_end

SaffronCity_EventScript_DoorGuardGrunt_2:
# 49 "data/maps/SaffronCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 50 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_HesTakingASnooze
	release_end


SaffronCity_EventScript_WorkerM::
# 60 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
	end


SaffronCity_EventScript_Youngster::
# 65 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
	end


SaffronCity_EventScript_Lass::
# 70 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
	end


SaffronCity_EventScript_Boy::
# 75 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
	end


SaffronCity_EventScript_Pidgeot::
# 80 "data/maps/SaffronCity_Frlg/scripts.pory"
	lock_faceplayer
# 81 "data/maps/SaffronCity_Frlg/scripts.pory"
	waitse
# 82 "data/maps/SaffronCity_Frlg/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 83 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_Pidgeot
# 84 "data/maps/SaffronCity_Frlg/scripts.pory"
	waitmoncry
	release_end


SaffronCity_EventScript_Man::
# 89 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
	end


SaffronCity_EventScript_CitySign::
# 94 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
	end


SaffronCity_EventScript_DojoSign::
# 99 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
	end


SaffronCity_EventScript_GymSign::
# 104 "data/maps/SaffronCity_Frlg/scripts.pory"
	lockall
# 105 "data/maps/SaffronCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 0
# 106 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_GymSign
# 107 "data/maps/SaffronCity_Frlg/scripts.pory"
	releaseall
	end


SaffronCity_EventScript_TrainerTips1::
# 112 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
	end


SaffronCity_EventScript_TrainerTips2::
# 117 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
	end


SaffronCity_EventScript_SilphCoSign::
# 122 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
	end


SaffronCity_EventScript_MrPsychicsHouseSign::
# 127 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
	end


SaffronCity_EventScript_SilphProductSign::
# 132 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
	end


SaffronCity_EventScript_TrainerFanClubSign::
# 137 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end


SaffronCity_Text_WhatDoYouWantGetLost::
# 141 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "What do you want?\n"
	.string "Get lost!$"

SaffronCity_Text_BossTakeTownForTeamRocket::
# 146 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "BOSS said he'll take this town\n"
	.string "in the name of TEAM ROCKET!$"

SaffronCity_Text_DontGetDefiantOrIllHurtYou::
# 151 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Don't get defiant!\n"
	.string "Or I'll have to hurt you!$"

SaffronCity_Text_SaffronBelongsToTeamRocket::
# 156 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON belongs to TEAM ROCKET!$"

SaffronCity_Text_CriminalLifeMakesMeFeelAlive::
# 160 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "My life as a criminal makes me feel\n"
	.string "so alive!$"

SaffronCity_Text_WatchWhereYoureWalking::
# 165 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Ow!\n"
	.string "Watch where you're walking!$"

SaffronCity_Text_WeCanExploitMonsAroundWorld::
# 170 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "With SILPH under control, we can\n"
	.string "exploit POKéMON around the world!\p"
	.string "We'll get stinking rich, yeahah!$"

SaffronCity_Text_YouBeatTeamRocket::
# 177 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "You beat TEAM ROCKET all alone?\n"
	.string "That's amazing!$"

SaffronCity_Text_SafeToGoOutAgain::
# 182 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Yeah! TEAM ROCKET is gone!\n"
	.string "It's safe to go out again!$"

SaffronCity_Text_PeopleComingBackToSaffron::
# 187 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "People fled from here in droves\n"
	.string "when those ROCKETS came.\p"
	.string "They should be flocking back to\n"
	.string "SAFFRON now.$"

SaffronCity_Text_FlewHereOnPidgeot::
# 195 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I flew here on my PIDGEOT when\n"
	.string "I read about SILPH.\p"
	.string "It's already over?\n"
	.string "I missed the media action…$"

SaffronCity_Text_Pidgeot::
# 203 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "PIDGEOT: Bi bibii!$"

SaffronCity_Text_SawRocketBossEscaping::
# 207 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I saw the ROCKET BOSS escaping\n"
	.string "SILPH's building.$"

SaffronCity_Text_ImASecurityGuard::
# 212 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I'm a security guard.\p"
	.string "Suspicious kids I don't allow in!$"

SaffronCity_Text_HesTakingASnooze::
# 218 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "…\n"
	.string "Snore…\p"
	.string "Hah! He's taking a snooze!$"

SaffronCity_Text_CitySign::
# 225 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON CITY\n"
	.string "Shining, Golden Land of Commerce$"

SaffronCity_Text_FightingDojo::
# 230 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "FIGHTING DOJO$"

SaffronCity_Text_GymSign::
# 234 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON CITY POKéMON GYM\n"
	.string "LEADER: SABRINA\l"
	.string "The Master of PSYCHIC POKéMON!$"

SaffronCity_Text_FullHealCuresStatus::
# 240 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "FULL HEAL cures all ailments like\n"
	.string "burns, paralysis, poisoning,\l"
	.string "freezing, and sleep.\p"
	.string "It costs a bit more, but it's more\n"
	.string "convenient than buying other items.$"

SaffronCity_Text_GreatBallImprovedCatchRate::
# 251 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The new GREAT BALL offers improved\n"
	.string "catching rates.\p"
	.string "Try it on those hard-to-catch\n"
	.string "POKéMON.$"

SaffronCity_Text_SilphCoSign::
# 261 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SILPH CO. OFFICE BUILDING$"

SaffronCity_Text_MrPsychicsHouse::
# 265 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "MR. PSYCHIC'S HOUSE$"

SaffronCity_Text_SilphsLatestProduct::
# 269 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SILPH's latest product!\n"
	.string "Release to be determined…$"

SaffronCity_Text_TrainerFanClubSign::
# 274 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
	.string "Many TRAINERS have scribbled their\n"
	.string "names on this sign.$"

SaffronCity_Text_HowCanClubNotRecognizeLance::
# 281 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "This FAN CLUB…\n"
	.string "No one here has a clue!\p"
	.string "How could they not recognize\n"
	.string "the brilliance that is LANCE?\p"
	.string "He stands for justice!\n"
	.string "He's cool, and yet passionate!\l"
	.string "He's the greatest, LANCE!$"
