MauvilleCity_House1_MapScripts::
	.byte 0


MauvilleCity_House1_EventScript_ReceivedRockSmash::
# 4 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
	release_end


MauvilleCity_House1_EventScript_ProtectDude::
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	lock_faceplayer
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmessage
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	pokemart MauvilleCity_House1_ProtectTMs
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 17 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_ProtectTMs:
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	.2byte ITEM_TM_ENDURE
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	.2byte ITEM_TM_BLOCK_NEW
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 21 "data/maps/MauvilleCity_House1/scripts.pory"
	.2byte ITEM_TM_FEINT
	.2byte ITEM_NONE

MauvilleCity_House1_Text_ImRockSmashDudeTakeThis::
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
	.string "I hear people call me the ROCK SMASH\n"
	.string "GUY, but I find that sort of degrading.\p"
	.string "I think I deserve a bit more respect,\n"
	.string "like maybe the ROCK SMASH DUDE.\p"
	.string "Woohoo!\p"
	.string "Anyways, your POKéMON look pretty\n"
	.string "strong.\p"
	.string "I like that!\n"
	.string "Here, take this HIDDEN MACHINE!$"

MauvilleCity_House1_Text_ExplainRockSmash::
# 42 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "That HM contains ROCK SMASH.\p"
	.string "If you come across large boulders\n"
	.string "that block your path…\p"
	.string "Well, use that HM move and smash\n"
	.string "them right out of your way!\p"
	.string "Yes, sir! Smash rocks aside, I say!\n"
	.string "Woohoo!$"

MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock::
# 55 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, yes, if you smash a rock, a POKéMON\n"
	.string "could come flying out of hiding.\p"
	.string "Woohoo!$"
