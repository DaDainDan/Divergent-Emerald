FiveIsland_WaterLabyrinth_Frlg_MapScripts::
	.byte 0


FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
# 4 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_EggGentleman_2
FiveIsland_WaterLabyrinth_EventScript_EggGentleman_1:
# 8 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_EggGentleman_5
FiveIsland_WaterLabyrinth_EventScript_EggGentleman_4:
# 11 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
	specialvar VAR_RESULT, GetLeadMonFriendship
# 0 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_EggGentleman_8
FiveIsland_WaterLabyrinth_EventScript_EggGentleman_7:
# 16 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
	release_end

FiveIsland_WaterLabyrinth_EventScript_EggGentleman_2:
# 6 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
	goto FiveIsland_WaterLabyrinth_EventScript_EggGentleman_1

FiveIsland_WaterLabyrinth_EventScript_EggGentleman_5:
# 9 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
	goto FiveIsland_WaterLabyrinth_EventScript_EggGentleman_4

FiveIsland_WaterLabyrinth_EventScript_EggGentleman_8:
# 13 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 14 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
	goto FiveIsland_WaterLabyrinth_EventScript_EggGentleman_7


FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
	getpartysize
# 0 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg_2
# 26 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 27 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	giveegg SPECIES_TOGEPI
# 28 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 29 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 30 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 31 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	waitfanfare
# 32 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	waitmessage
# 33 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 34 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
	end

FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg_2:
# 22 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 23 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
	release_end


FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
# 41 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
# 42 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGEPI
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 0 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_PostEggComment_2
FiveIsland_WaterLabyrinth_EventScript_PostEggComment_1:
# 46 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
# 47 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGETIC
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 0 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_PostEggComment_5
FiveIsland_WaterLabyrinth_EventScript_PostEggComment_4:
# 51 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
	release_end

FiveIsland_WaterLabyrinth_EventScript_PostEggComment_2:
# 44 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment_1

FiveIsland_WaterLabyrinth_EventScript_PostEggComment_5:
# 49 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment_4


FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
# 56 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 2
# 57 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
	release_end


FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons::
# 61 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You travel all over the place,\n"
	.string "don't you?\p"
	.string "You're not driving your POKéMON\n"
	.string "too harshly, are you?\p"
	.string "Let me take a look.\n"
	.string "… … …   … … …$"

FiveIsland_WaterLabyrinth_Text_HmmISeeIsee::
# 72 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Ah, hmm…\n"
	.string "I see, I see…$"

FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis::
# 77 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Oh, impressive.\n"
	.string "You treat your POKéMON right.\p"
	.string "I think you can be entrusted with\n"
	.string "this.\p"
	.string "Please, I'd like you to have this.$"

FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan::
# 87 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "{PLAYER} received an EGG\n"
	.string "from the man!$"

FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty::
# 92 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "…Unfortunately, you don't have\n"
	.string "space for this in your party.\p"
	.string "You'd better come back for it\n"
	.string "another time.$"

FiveIsland_WaterLabyrinth_Text_YouveComeBackForTheEgg::
# 101 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "やあ\n"
	.string "タマゴを　もらいに\l"
	.string "きて　くれたんだね$"

FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou::
# 107 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I received that EGG while I was\n"
	.string "traveling.\p"
	.string "I'm glad I met someone like you.$"

FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy::
# 114 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Oh, hello.\n"
	.string "That's a cute {STR_VAR_2}.\p"
	.string "Seeing it reminds me of a sweet \n"
	.string "little girl I met while traveling.\p"
	.string "She was gently grooming POKéMON…\n"
	.string "She was a little angel.\p"
	.string "That little girl's name…\n"
	.string "I think it was DAISY.$"

FiveIsland_WaterLabyrinth_Text_AlizeIntro::
# 128 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "This is an excellent environment\n"
	.string "for raising POKéMON.$"

FiveIsland_WaterLabyrinth_Text_AlizeDefeat::
# 133 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Your POKéMON are growing up\n"
	.string "admirably well!$"

FiveIsland_WaterLabyrinth_Text_AlizePostBattle::
# 138 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You know, I think you have the\n"
	.string "talent to be a good BREEDER.$"
