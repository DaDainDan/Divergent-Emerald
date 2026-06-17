FiveIsland_MemorialPillar_Frlg_MapScripts::
	.byte 0


FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 4 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	lock
# 5 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialMan_2
# 8 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialMan_3
# 13 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 14 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	closemessage
# 15 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 16 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 17 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	delay 45
# 18 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 19 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_StepFasterUp
# 20 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 21 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
FiveIsland_MemorialPillar_EventScript_MemorialMan_1:
	release_end

FiveIsland_MemorialPillar_EventScript_MemorialMan_2:
# 6 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
	goto FiveIsland_MemorialPillar_EventScript_MemorialMan_1

FiveIsland_MemorialPillar_EventScript_MemorialMan_3:
# 9 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 10 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_GiveTM42
	goto FiveIsland_MemorialPillar_EventScript_MemorialMan_1


FiveIsland_MemorialPillar_EventScript_Memorial::
# 27 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	lockall
# 28 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_Memorial_2
# 28 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_Memorial_2
# 33 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
	checkitem ITEM_LEMONADE
# 0 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FiveIsland_MemorialPillar_EventScript_Memorial_7
FiveIsland_MemorialPillar_EventScript_Memorial_6:
# 50 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_Memorial_2:
# 29 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 30 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_Memorial_7:
# 35 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 36 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FiveIsland_MemorialPillar_EventScript_Memorial_9
	goto FiveIsland_MemorialPillar_EventScript_Memorial_6

FiveIsland_MemorialPillar_EventScript_Memorial_9:
# 37 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	removeitem ITEM_LEMONADE
# 38 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 39 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	closemessage
# 40 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_StepFasterRight
# 41 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 42 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	delay 45
# 43 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 44 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 46 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 47 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_GiveTM42
	goto FiveIsland_MemorialPillar_EventScript_Memorial_6


FiveIsland_MemorialPillar_EventScript_GiveTM42::
	giveitem ITEM_TM42
# 0 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FiveIsland_MemorialPillar_EventScript_GiveTM42_2
# 61 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 62 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_StepFasterUp
# 63 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 64 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
	return

FiveIsland_MemorialPillar_EventScript_GiveTM42_2:
# 56 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 57 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 58 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
	end


FiveIsland_MemorialPillar_Text_MiloIntro::
# 68 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the eldest of the BIRD\n"
	.string "BROTHERS.\p"
	.string "The best thing about birds…\n"
	.string "It has to be the beak.$"

FiveIsland_MemorialPillar_Text_MiloDefeat::
# 76 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Oh, so sharp!$"

FiveIsland_MemorialPillar_Text_MiloPostBattle::
# 80 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "You can fly to FOUR ISLAND from\n"
	.string "here.$"

FiveIsland_MemorialPillar_Text_ChazIntro::
# 85 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the middle kid of the BIRD\n"
	.string "BROTHERS.\p"
	.string "The best thing about birds…\n"
	.string "It has to be the wings.$"

FiveIsland_MemorialPillar_Text_ChazDefeat::
# 93 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Flap, flap!$"

FiveIsland_MemorialPillar_Text_ChazPostBattle::
# 97 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "There was a really somber guy\n"
	.string "over that way.$"

FiveIsland_MemorialPillar_Text_HaroldIntro::
# 102 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the youngest of the BIRD\n"
	.string "BROTHERS.\p"
	.string "The best thing about birds…\n"
	.string "It has to be the down.$"

FiveIsland_MemorialPillar_Text_HaroldDefeat::
# 110 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Down is so comfy…\n"
	.string "It makes me drowsy…$"

FiveIsland_MemorialPillar_Text_HaroldPostBattle::
# 115 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It fills me with happiness when\n"
	.string "bird POKéMON beg playfully…$"

FiveIsland_MemorialPillar_Text_ScrubScrub::
# 120 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Scrub, scrub…$"

FiveIsland_MemorialPillar_Text_YourMonsLookHealthy::
# 124 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Hello…\n"
	.string "Your POKéMON look healthy…$"

FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix::
# 129 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "This is where I buried my ONIX…\n"
	.string "It was named TECTONIX…$"

FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering::
# 134 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "“Here lies TECTONIX” is engraved\n"
	.string "on a boulder.\p"
	.string "There is a LEMONADE placed as an\n"
	.string "offering in front of the grave.$"

FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering::
# 142 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Would you like to leave another\n"
	.string "LEMONADE as an offering?$"

FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade::
# 147 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "{PLAYER} placed a can of LEMONADE\n"
	.string "in front of the grave.$"

FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis::
# 152 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Th-thank you…\p"
	.string "That was my TECTONIX's favorite\n"
	.string "drink…\p"
	.string "I don't even know you, but your\n"
	.string "act of kindness…\p"
	.string "It's uplifted me a little.\p"
	.string "Can you please take this as my\n"
	.string "thanks?$"

FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo::
# 167 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Please be good to your POKéMON,\n"
	.string "too.$"

FiveIsland_MemorialPillar_Text_DontHaveRoomForIt::
# 172 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "If you don't have room for it,\n"
	.string "I'll hold it for you till next time.$"

FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks::
# 177 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Oh, it's you from that time…\p"
	.string "I still have that thing I wanted\n"
	.string "you to have as my thanks.$"

FiveIsland_MemorialPillar_Text_ScrubScrubTectonix::
# 184 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Scrub, scrub…\p"
	.string "… … …\n"
	.string "TECTONIX…$"

FiveIsland_MemorialPillar_Text_HereLiesTectonix::
# 191 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Boulders and rocks are neatly piled\n"
	.string "up as a cairn.\p"
	.string "“Here lies TECTONIX” is engraved\n"
	.string "on a boulder.$"
