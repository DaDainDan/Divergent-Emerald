Route12_Frlg_MapScripts::
# 2 "data/maps/Route12_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route12_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route12_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route12_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
Route12_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

Route12_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Route12_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Route12_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1


Route12_EventScript_Snorlax::
# 11 "data/maps/Route12_Frlg/scripts.pory"
	lock_faceplayer
# 12 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route12_EventScript_Snorlax_2
# 16 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
# 17 "data/maps/Route12_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route12_EventScript_Snorlax_5
Route12_EventScript_Snorlax_4:
	release_end

Route12_EventScript_Snorlax_2:
# 13 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Route12_Text_MonSprawledOutInSlumber
	release_end

Route12_EventScript_Snorlax_5:
# 18 "data/maps/Route12_Frlg/scripts.pory"
	call EventScript_AwakenSnorlax
# 19 "data/maps/Route12_Frlg/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 20 "data/maps/Route12_Frlg/scripts.pory"
	waitse
# 21 "data/maps/Route12_Frlg/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 22 "data/maps/Route12_Frlg/scripts.pory"
	delay 40
# 23 "data/maps/Route12_Frlg/scripts.pory"
	waitmoncry
# 24 "data/maps/Route12_Frlg/scripts.pory"
	setflag FLAG_HIDE_ROUTE_12_SNORLAX
# 25 "data/maps/Route12_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 26 "data/maps/Route12_Frlg/scripts.pory"
	setflag FLAG_WOKE_UP_ROUTE_12_SNORLAX
# 27 "data/maps/Route12_Frlg/scripts.pory"
	dowildbattle
# 28 "data/maps/Route12_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 29 "data/maps/Route12_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/Route12_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route12_EventScript_Snorlax_7
# 30 "data/maps/Route12_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route12_EventScript_Snorlax_7
# 30 "data/maps/Route12_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route12_EventScript_Snorlax_7
	goto Route12_EventScript_Snorlax_4

Route12_EventScript_Snorlax_7:
# 31 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Text_SnorlaxReturnedToMountains
	goto Route12_EventScript_Snorlax_4


Route12_EventScript_RouteSign::
# 38 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Route12_Text_RouteSign, MSGBOX_SIGN
	end


Route12_EventScript_FishingSign::
# 43 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Route12_Text_SportfishingArea, MSGBOX_SIGN
	end


Route12_Text_MonSprawledOutInSlumber::
# 47 "data/maps/Route12_Frlg/scripts.pory"
	.string "A POKéMON is sprawled out in\n"
	.string "a deep and comfortable slumber.$"

Text_SnorlaxWokeUp::
# 52 "data/maps/Route12_Frlg/scripts.pory"
	.string "SNORLAX woke up!\p"
	.string "It attacked in a grumpy rage!$"

Text_SnorlaxReturnedToMountains::
# 58 "data/maps/Route12_Frlg/scripts.pory"
	.string "SNORLAX calmed down.\n"
	.string "It gave a huge yawn…\l"
	.string "And returned to the mountains.$"

Text_WantToUsePokeFlute::
# 64 "data/maps/Route12_Frlg/scripts.pory"
	.string "Want to use the POKé FLUTE?$"

Text_PlayedPokeFlute::
# 68 "data/maps/Route12_Frlg/scripts.pory"
	.string "{PLAYER} played the POKé FLUTE.$"

Route12_Text_NedIntro::
# 72 "data/maps/Route12_Frlg/scripts.pory"
	.string "Yeah!\n"
	.string "I got a bite here!$"

Route12_Text_NedDefeat::
# 77 "data/maps/Route12_Frlg/scripts.pory"
	.string "Tch!\n"
	.string "Just a small fry…$"

Route12_Text_NedPostBattle::
# 82 "data/maps/Route12_Frlg/scripts.pory"
	.string "Hang on!\n"
	.string "My line's snagged!$"

Route12_Text_ChipIntro::
# 87 "data/maps/Route12_Frlg/scripts.pory"
	.string "Be patient.\n"
	.string "Fishing is a waiting game.$"

Route12_Text_ChipDefeat::
# 92 "data/maps/Route12_Frlg/scripts.pory"
	.string "That one got away!$"

Route12_Text_ChipPostBattle::
# 96 "data/maps/Route12_Frlg/scripts.pory"
	.string "With a better ROD, I could catch\n"
	.string "better POKéMON…$"

Route12_Text_JustinIntro::
# 101 "data/maps/Route12_Frlg/scripts.pory"
	.string "I'm searching for a MOON STONE.\n"
	.string "Have you found one?$"

Route12_Text_JustinDefeat::
# 106 "data/maps/Route12_Frlg/scripts.pory"
	.string "Oww!$"

Route12_Text_JustinPostBattle::
# 110 "data/maps/Route12_Frlg/scripts.pory"
	.string "I could have made my POKéMON\n"
	.string "evolve with a MOON STONE.\p"
	.string "I would have won then, I bet.$"

Route12_Text_LucaIntro::
# 117 "data/maps/Route12_Frlg/scripts.pory"
	.string "Electricity is my specialty.\p"
	.string "I don't know a thing about POKéMON\n"
	.string "of the sea, though.$"

Route12_Text_LucaDefeat::
# 124 "data/maps/Route12_Frlg/scripts.pory"
	.string "Unplugged!$"

Route12_Text_LucaPostBattle::
# 128 "data/maps/Route12_Frlg/scripts.pory"
	.string "Water conducts electricity, so you\n"
	.string "should zap sea POKéMON.$"

Route12_Text_HankIntro::
# 133 "data/maps/Route12_Frlg/scripts.pory"
	.string "The FISHING FOOL versus POKéMON\n"
	.string "KID!$"

Route12_Text_HankDefeat::
# 138 "data/maps/Route12_Frlg/scripts.pory"
	.string "Touch too much!$"

Route12_Text_HankPostBattle::
# 142 "data/maps/Route12_Frlg/scripts.pory"
	.string "I guess you get to be good at\n"
	.string "what you like.\p"
	.string "Well, you beat me at POKéMON,\n"
	.string "but you can't top me at fishing.$"

Route12_Text_ElliotIntro::
# 150 "data/maps/Route12_Frlg/scripts.pory"
	.string "I love fishing, don't get me wrong.\p"
	.string "But it'd be best if I also had more\n"
	.string "work.$"

Route12_Text_ElliotDefeat::
# 157 "data/maps/Route12_Frlg/scripts.pory"
	.string "It's not easy…$"

Route12_Text_ElliotPostBattle::
# 161 "data/maps/Route12_Frlg/scripts.pory"
	.string "It's all right.\n"
	.string "Losing doesn't bug me anymore.$"

Route12_Text_AndrewIntro::
# 166 "data/maps/Route12_Frlg/scripts.pory"
	.string "What's catching?\p"
	.string "You never know what you could\n"
	.string "catch!$"

Route12_Text_AndrewDefeat::
# 173 "data/maps/Route12_Frlg/scripts.pory"
	.string "Lost it!$"

Route12_Text_AndrewPostBattle::
# 177 "data/maps/Route12_Frlg/scripts.pory"
	.string "What, MAGIKARP?\p"
	.string "I catch them all the time, sure.\n"
	.string "But, boy are they wimpy.$"

Route12_Text_RouteSign::
# 184 "data/maps/Route12_Frlg/scripts.pory"
	.string "ROUTE 12 \n"
	.string "North to LAVENDER$"

Route12_Text_SportfishingArea::
# 189 "data/maps/Route12_Frlg/scripts.pory"
	.string "SPORTFISHING AREA$"

Route12_Text_JesIntro::
# 193 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: If I win, I'm going to\n"
	.string "propose to GIA.$"

Route12_Text_JesDefeat::
# 198 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: Oh, please, why couldn't you\n"
	.string "let us win?$"

Route12_Text_JesPostBattle::
# 203 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: Oh, GIA, forgive me,\n"
	.string "my love!$"

Route12_Text_JesNotEnoughMons::
# 208 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: GIA and I, we'll be\n"
	.string "together forever.\p"
	.string "We won't battle unless you have\n"
	.string "two POKéMON of your own.$"

Route12_Text_GiaIntro::
# 216 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: Hey, JES…\p"
	.string "If we win, I'll marry you!$"

Route12_Text_GiaDefeat::
# 222 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: Oh, but why?$"

Route12_Text_GiaPostBattle::
# 226 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: JES, you silly!\n"
	.string "You ruined this!$"

Route12_Text_GiaNotEnoughMons::
# 231 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: I can't bear to battle\n"
	.string "without my JES!\p"
	.string "Don't you have one more POKéMON?$"
