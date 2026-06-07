RustboroCity_Flat1_2F_MapScripts::
	.byte 0


RustboroCity_Flat1_2F_EventScript_WaldasDad::
# 4 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	lock_faceplayer
	specialvar VAR_RESULT, TryBufferWaldaPhrase
# 0 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Flat1_2F_EventScript_WaldasDad_2
# 8 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
RustboroCity_Flat1_2F_EventScript_WaldasDad_1:
# 10 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_Flat1_2F_EventScript_WaldasDad_6
# 14 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 15 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
	return

RustboroCity_Flat1_2F_EventScript_WaldasDad_2:
# 6 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
	goto RustboroCity_Flat1_2F_EventScript_WaldasDad_1

RustboroCity_Flat1_2F_EventScript_WaldasDad_6:
# 11 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
	release_end


RustboroCity_Flat1_2F_EventScript_GivePhrase::
# 19 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	special DoWaldaNamingScreen
# 20 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	switch VAR_0x8004
# 21 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	case 1, RustboroCity_Flat1_2F_EventScript_GivePhrase_3
# 24 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	case 2, RustboroCity_Flat1_2F_EventScript_GivePhrase_4
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
# 0 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_Flat1_2F_EventScript_GivePhrase_6
# 38 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 40 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
RustboroCity_Flat1_2F_EventScript_GivePhrase_5:
	release_end

RustboroCity_Flat1_2F_EventScript_GivePhrase_3:
# 22 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
	release_end

RustboroCity_Flat1_2F_EventScript_GivePhrase_4:
# 25 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
# 26 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 27 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
	release_end

RustboroCity_Flat1_2F_EventScript_GivePhrase_6:
# 31 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 33 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
# 35 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase_5


RustboroCity_Flat1_2F_EventScript_WaldasMom::
# 46 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
	end


RustboroCity_Flat1_2F_EventScript_PokeDoll::
# 51 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
	end


RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard::
# 55 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, it's so hard every day…\p"
	.string "What's hard?\n"
	.string "You need to ask?\p"
	.string "It's trying to figure out what to\n"
	.string "make for meals every day.\p"
	.string "It really isn't easy coming up with\n"
	.string "meals every day.$"

RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase::
# 68 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, hello!\n"
	.string "Welcome to the PEPPER household.\p"
	.string "I have a question for you.\n"
	.string "Have you ever baby-sat?\p"
	.string "You see, I'm a new father, so raising\n"
	.string "a child is all new to me.\p"
	.string "And I have a problem. My daughter\n"
	.string "WALDA doesn't laugh enough.\p"
	.string "I think she'd laugh for me if I told\n"
	.string "her something funny.\p"
	.string "Do you know of a funny word or\n"
	.string "phrase you can tell me?$"

RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase::
# 88 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I've been saying “{STR_VAR_1}”\n"
	.string "to amuse her lately.\p"
	.string "Do you know of a better word or\n"
	.string "a phrase that might work?$"

RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion::
# 96 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, that's wonderful.\n"
	.string "So, let's hear it, your suggestion.$"

RustboroCity_Flat1_2F_Text_OhIsThatRight::
# 101 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, is that right?\p"
	.string "Well, if you come up with a good\n"
	.string "suggestion, I'm all ears.$"

RustboroCity_Flat1_2F_Text_LetsGiveItATry2::
# 108 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, I see.\n"
	.string "Well, let's give it a try, shall we?$"

RustboroCity_Flat1_2F_Text_OhShesLaughing::
# 113 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Oh, yes! She's laughing!\n"
	.string "Oh, I am as delighted as she!$"

RustboroCity_Flat1_2F_Text_LetsGiveItATry::
# 121 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, I see.\n"
	.string "Well, let's give it a try, shall we?$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll::
# 126 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Hmmm… She's not smiling at all.\n"
	.string "Maybe WALDA is one serious child…$"

RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase::
# 134 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, so you don't know any good words.\n"
	.string "I'd better think for myself, then.\p"
	.string "Hmm…\n"
	.string "How about “{STR_VAR_1}”?\l"
	.string "Let's see if that will work.$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2::
# 143 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Hmmm… She's not smiling at all.\n"
	.string "Maybe WALDA is one serious child…$"

RustboroCity_Flat1_2F_Text_OhYouDontKnowAny::
# 151 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, so you don't know any good words.\n"
	.string "I guess I'll try to amuse her with\l"
	.string "the saying I used before.\p"
	.string "Anyways, if you have a good suggestion,\n"
	.string "don't hesitate in telling me, okay?$"

RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper::
# 160 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Thank you!\p"
	.string "Thanks to you, my darling WALDA\n"
	.string "laughed for me!\p"
	.string "Actually, I may not look all that\n"
	.string "special, but I'm one of DEVON\l"
	.string "CORPORATION's top researchers.\p"
	.string "So, how about I do something in return\n"
	.string "for you?\p"
	.string "I know, I'll add some new wallpaper\n"
	.string "patterns for the BOXES in the PC\l"
	.string "POKéMON Storage System.\p"
	.string "In the wallpaper pattern menu,\n"
	.string "select “FRIENDS.”\p"
	.string "That will give you access to the new\n"
	.string "wallpaper patterns.$"

RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll::
# 184 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "It's a POKéMON plush DOLL!$"
