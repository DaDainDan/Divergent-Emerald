OneIsland_KindleRoad_EmberSpa_Frlg_MapScripts::
	.byte 0


OneIsland_KindleRoad_EmberSpa_EventScript_OldMan::
# 4 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore, MSGBOX_NPC
	end


OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan1::
# 9 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder, MSGBOX_NPC
	end


OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan2::
# 14 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic, MSGBOX_NPC
	end


OneIsland_KindleRoad_EmberSpa_EventScript_OldWoman::
# 19 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs, MSGBOX_NPC
	end


OneIsland_KindleRoad_EmberSpa_EventScript_BlackBelt::
# 24 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	lock_faceplayer
# 25 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 3
# 26 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion
	release_end


OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan::
# 31 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	lock_faceplayer
# 32 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM06, OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan_2
# 36 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa
# 37 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	giveitem ITEM_HM06
# 38 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	setflag FLAG_GOT_HM06
# 39 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
	release_end

OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan_2:
# 33 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
	release_end


OneIsland_KindleRoad_EmberSpa_EventScript_SpaHeal::
# 44 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	lockall
# 45 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	fadescreen FADE_TO_WHITE
# 46 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	special HealPlayerParty
# 47 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 48 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed
# 49 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 50 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	releaseall
	end


OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore::
# 54 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Hm!\n"
	.string "Haaaaaaaaaaah!\p"
	.string "Aaaah! This is heavenly!\n"
	.string "The water warms me to my core!\p"
	.string "You should jump in, too.\p"
	.string "Go to the middle, relax, and get\n"
	.string "good and warm!$"

OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder::
# 67 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "My favorite part of bathing comes\n"
	.string "up right after this.\p"
	.string "I enjoy a bowl of chowder to\n"
	.string "warm me from the inside, too!$"

OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed::
# 75 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "The water is perfectly warm.\n"
	.string "It feels exquisite…\p"
	.string "{PLAYER} and the POKéMON were\n"
	.string "fully refreshed!$"

OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic::
# 83 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Soaking in a hot spring pool is\n"
	.string "therapeutic, people say.$"

OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs::
# 88 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Have a look at my face.\n"
	.string "See how smooth my skin is?\p"
	.string "The hot spring's water keeps my\n"
	.string "skin younger than my age.$"

OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion::
# 96 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "After an honest day of training,\n"
	.string "nothing beats a relaxing soak in\l"
	.string "the hot spring pool.\p"
	.string "BRUNO, who's a senior ahead of me,\n"
	.string "visits the SPA on occasion.\p"
	.string "He comes to rehab injuries, both\n"
	.string "his own and his POKéMON's.$"

OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa::
# 108 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Hot springs go hand-in-hand with\n"
	.string "volcanoes.\p"
	.string "The EMBER SPA here, well,\n"
	.string "I made it years ago.\p"
	.string "I hewed the pool right out of a\n"
	.string "gigantic boulder by hand.\p"
	.string "I was using this at the time.\n"
	.string "I suppose I can part with it.$"

OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06::
# 122 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "That shatters boulders as if they\n"
	.string "were made of crackers.$"
