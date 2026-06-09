LilycoveCity_House3_MapScripts::
# 2 "data/maps/LilycoveCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_House3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LilycoveCity_House3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LilycoveCity_House3/scripts.pory"
	random 4
# 4 "data/maps/LilycoveCity_House3/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
	end


LilycoveCity_House3_EventScript_PokefanF::
# 10 "data/maps/LilycoveCity_House3/scripts.pory"
	lock_faceplayer
# 11 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks, MSGBOX_YESNO
# 12 "data/maps/LilycoveCity_House3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_House3_EventScript_PokefanF_2
# 15 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_ExplainPokeblocks, MSGBOX_DEFAULT
LilycoveCity_House3_EventScript_PokefanF_1:
# 17 "data/maps/LilycoveCity_House3/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

LilycoveCity_House3_EventScript_PokefanF_2:
# 13 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_OhAreYouSure, MSGBOX_DEFAULT
	goto LilycoveCity_House3_EventScript_PokefanF_1


LilycoveCity_House3_EventScript_Man::
# 22 "data/maps/LilycoveCity_House3/scripts.pory"
	lock_faceplayer
# 23 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_HappyToHaveQuadruplets, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_House3/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


LilycoveCity_House3_EventScript_GameBoyKid1::
# 29 "data/maps/LilycoveCity_House3/scripts.pory"
	lock_faceplayer
# 30 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKidMain
	end


LilycoveCity_House3_EventScript_GameBoyKid2::
# 35 "data/maps/LilycoveCity_House3/scripts.pory"
	lock_faceplayer
# 36 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKidMain
	end


LilycoveCity_House3_EventScript_GameBoyKid3::
# 41 "data/maps/LilycoveCity_House3/scripts.pory"
	lock_faceplayer
# 42 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKidMain
	end


LilycoveCity_House3_EventScript_GameBoyKid4::
# 47 "data/maps/LilycoveCity_House3/scripts.pory"
	lock_faceplayer
# 48 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_GameBoyKidMain
	end


LilycoveCity_House3_EventScript_GameBoyKidMain::
# 53 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 54 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_GameBoyKidMain_3
# 55 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_GameBoyKidMain_4
# 56 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_GameBoyKidMain_5
# 57 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_GameBoyKidMain_6
LilycoveCity_House3_EventScript_GameBoyKidMain_1:
	release_end

LilycoveCity_House3_EventScript_GameBoyKidMain_3:
# 54 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToWinMultiBattles, MSGBOX_DEFAULT
	goto LilycoveCity_House3_EventScript_GameBoyKidMain_1

LilycoveCity_House3_EventScript_GameBoyKidMain_4:
# 55 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LikeMixingAtRecordCorner, MSGBOX_DEFAULT
	goto LilycoveCity_House3_EventScript_GameBoyKidMain_1

LilycoveCity_House3_EventScript_GameBoyKidMain_5:
# 56 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender, MSGBOX_DEFAULT
	goto LilycoveCity_House3_EventScript_GameBoyKidMain_1

LilycoveCity_House3_EventScript_GameBoyKidMain_6:
# 57 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToEnterContest, MSGBOX_DEFAULT
	goto LilycoveCity_House3_EventScript_GameBoyKidMain_1


LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks::
# 62 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh, my, my! Are you traveling alone?\n"
	.string "But you're so young! Good for you!\p"
	.string "I'm sure my kids could learn a thing\n"
	.string "or two from you!\p"
	.string "Me? I'm a master of {POKEBLOCK}S.\p"
	.string "If I get serious just a little, why,\n"
	.string "I can concoct great {POKEBLOCK}S.\p"
	.string "Would you like to learn from me,\n"
	.string "a master of {POKEBLOCK}S?$"

LilycoveCity_House3_Text_OhAreYouSure::
# 78 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh? Are you sure?\p"
	.string "You shouldn't always try to do\n"
	.string "everything by yourself, dear!$"

LilycoveCity_House3_Text_ExplainPokeblocks::
# 85 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh, good! You're a smart soul!\n"
	.string "This is a bit long, so listen up!\p"
	.string "Are you ready?\p"
	.string "If you look at {POKEBLOCK}S, you should see\n"
	.string "that they are rated on how they feel.\p"
	.string "The lower the feel rating,\n"
	.string "the better it is. Don't forget this!\p"
	.string "A good {POKEBLOCK} has a low feel\n"
	.string "rating and a high level.\p"
	.string "A POKéMON can eat more good\n"
	.string "{POKEBLOCK}S than ordinary ones, too.\p"
	.string "And this is important.\p"
	.string "If you want to make smooth {POKEBLOCK}S,\n"
	.string "use different kinds of BERRIES.\p"
	.string "Don't be stingy--the kinds of BERRIES\n"
	.string "affect the smoothness of {POKEBLOCK}S.\p"
	.string "And another thing.\p"
	.string "The more people blending BERRIES,\n"
	.string "the smoother the {POKEBLOCK}S.\p"
	.string "That's why you should talk to other\n"
	.string "people and make {POKEBLOCK}S together.\p"
	.string "That's about all you need to know to\n"
	.string "make good {POKEBLOCK}S.\p"
	.string "If everyone had POKéMON they love,\n"
	.string "smooth {POKEBLOCK}S, and a loving family,\l"
	.string "the world would be a happier place.\p"
	.string "Don't give up, dear!$"

LilycoveCity_House3_Text_HappyToHaveQuadruplets::
# 129 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "When my wife gave birth to quadruplets,\n"
	.string "you bet I was shocked.\p"
	.string "But, now, seeing them play together,\n"
	.string "it makes me happy.$"

LilycoveCity_House3_Text_GoingToWinMultiBattles::
# 137 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We're having MULTI BATTLES, but I know\n"
	.string "I'm going to win.$"

LilycoveCity_House3_Text_LikeMixingAtRecordCorner::
# 142 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We like mixing stuff at\n"
	.string "the RECORD CORNER.\p"
	.string "But what gets mixed up?$"

LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender::
# 149 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We're going to make super {POKEBLOCK}S\n"
	.string "with a BERRY BLENDER!$"

LilycoveCity_House3_Text_GoingToEnterContest::
# 154 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "I want to brag about how tough my\n"
	.string "POKéMON is, so we're going to enter\l"
	.string "a CONTEST together.$"
