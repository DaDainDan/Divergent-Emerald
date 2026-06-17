FuchsiaCity_Mart_Frlg_MapScripts::
	.byte 0


FuchsiaCity_Mart_EventScript_CooltrainerF::
# 4 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	msgbox FuchsiaCity_Mart_Text_DidYouTryXSpeed, MSGBOX_NPC
	end


FuchsiaCity_Mart_EventScript_Gentleman::
# 9 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	msgbox FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants, MSGBOX_NPC
	end


FuchsiaCity_Mart_EventScript_Clerk::
# 14 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 16 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	waitmessage
# 17 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	pokemart FuchsiaCity_Mart_Items
# 18 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 22 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_Items:
# 23 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 24 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 25 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 26 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 27 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 28 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants::
# 31 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "Don't they have any pennants\n"
	.string "promoting the SAFARI ZONE?\p"
	.string "How about some paper lanterns?\n"
	.string "Aren't there even any calendars?$"

FuchsiaCity_Mart_Text_DidYouTryXSpeed::
# 39 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "Did you try X SPEED?\n"
	.string "It speeds up a POKéMON in battle.$"
