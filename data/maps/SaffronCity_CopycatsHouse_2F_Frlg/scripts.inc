SaffronCity_CopycatsHouse_2F_Frlg_MapScripts::
	.byte 0


SaffronCity_CopycatsHouse_2F_EventScript_Doduo::
# 4 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	waitse
# 6 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
# 7 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_Doduo
# 8 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	waitmoncry
	release_end


SaffronCity_CopycatsHouse_2F_EventScript_Doll::
# 13 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	lock
# 14 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll
	release_end


SaffronCity_CopycatsHouse_2F_EventScript_Copycat::
# 19 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	lock_faceplayer
	checkitem ITEM_POKE_DOLL
# 0 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_CopycatsHouse_2F_EventScript_Copycat_2
SaffronCity_CopycatsHouse_2F_EventScript_Copycat_1:
	checkplayergender
# 0 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SaffronCity_CopycatsHouse_2F_EventScript_Copycat_5
# 26 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale
SaffronCity_CopycatsHouse_2F_EventScript_Copycat_4:
	release_end

SaffronCity_CopycatsHouse_2F_EventScript_Copycat_2:
# 21 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	goto EventScript_MimicTutor
	goto SaffronCity_CopycatsHouse_2F_EventScript_Copycat_1

SaffronCity_CopycatsHouse_2F_EventScript_Copycat_5:
# 24 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale
	goto SaffronCity_CopycatsHouse_2F_EventScript_Copycat_4


SaffronCity_CopycatsHouse_2F_EventScript_Computer::
# 32 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MySecrets, MSGBOX_SIGN
	end


SaffronCity_CopycatsHouse_2F_EventScript_Game::
# 37 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket, MSGBOX_SIGN
	end


SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale::
# 41 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Hi!\n"
	.string "Do you like POKéMON?\p"
	.string "{PLAYER}: Uh, no, I just asked you.\p"
	.string "{PLAYER}: Huh?\n"
	.string "You're strange!\p"
	.string "COPYCAT: Hmm? Quit mimicking?\n"
	.string "But, that's my favorite hobby!$"

SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale::
# 54 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Hi.\n"
	.string "You must like POKéMON.\p"
	.string "{PLAYER}: No, not me.\n"
	.string "I asked you.\p"
	.string "{PLAYER}: Pardon?\n"
	.string "You're weird!\p"
	.string "COPYCAT: Hmm? Quit mimicking?\n"
	.string "But that's my favorite hobby!$"

Text_MimicTeach::
# 68 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Oh wow!\n"
	.string "A POKé DOLL!\p"
	.string "For me?\n"
	.string "Thank you!\p"
	.string "You know what?\n"
	.string "I can teach the move MIMIC.$"

Text_MimicDeclined::
# 79 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Don't you like MIMIC?$"

Text_MimicWhichMon::
# 83 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "I really love MIMIC!\n"
	.string "Who's going to learn it?$"

Text_MimicTaughtMale::
# 88 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Hi!\n"
	.string "Thanks for earlier!\p"
	.string "{PLAYER}: Pardon?\p"
	.string "{PLAYER}: Is it that fun to mimic my\n"
	.string "every move?\p"
	.string "COPYCAT: You bet!\n"
	.string "It's a scream!$"

Text_MimicTaughtFemale::
# 101 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Hi!\n"
	.string "Thanks for what you did for us.\p"
	.string "{PLAYER}: Pardon?\p"
	.string "{PLAYER}: Is it really that fun to\n"
	.string "copy what I say and do?\p"
	.string "COPYCAT: You bet!\n"
	.string "It's a scream!$"

SaffronCity_CopycatsHouse_2F_Text_Doduo::
# 114 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "DODUO: Giiih!\p"
	.string "PRETTY MIRROR LOOK AT ME,\n"
	.string "SEE HOW PRETTY I CAN BE?$"

SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll::
# 121 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "This is a rare POKéMON!\n"
	.string "Huh? It's only a doll!$"

SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket::
# 126 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "A game with MARIO wearing a bucket\n"
	.string "on his head!$"

SaffronCity_CopycatsHouse_2F_Text_MySecrets::
# 131 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "…\p"
	.string "My Secrets!\p"
	.string "Skill: Mimicry!\n"
	.string "Hobby: Collecting dolls!\l"
	.string "Favorite POKéMON: CLEFAIRY!$"
