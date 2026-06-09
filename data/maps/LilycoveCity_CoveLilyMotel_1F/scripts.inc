LilycoveCity_CoveLilyMotel_1F_MapScripts::
	.byte 0


LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
# 4 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 5 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_2
# 11 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_3
# 18 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 20 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_1:
# 23 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 24 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 25 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_2:
# 6 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
# 7 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 8 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 9 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_1

LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_3:
# 12 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 14 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_1


LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
# 31 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 32 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	playse SE_PIN
# 33 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_ExclamationMark
# 34 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_Delay48
# 36 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 38 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
# 40 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV_Movement_0
# 42 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_WalkUp
# 43 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV_Movement_1
# 45 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
	release_end


# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV_Movement_0:
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_right
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lock_look
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_left
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	unlock_look
	step_end

# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV_Movement_1:
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_down
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_down
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_up
	step_end

LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot::
# 49 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, so they doubled the guests by\n"
	.string "using POKéMON as attractions?\p"
	.string "Hm, well, maybe I should make a cute\n"
	.string "POKéMON our inn's mascot.\p"
	.string "I wonder if that will attract more\n"
	.string "guests to stay with us?$"

LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua::
# 60 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
	.string "I was too involved in watching TV!\p"
	.string "Since that TEAM AQUA came to town,\n"
	.string "the tourists have been staying away.$"

LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV::
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hey, down in front!\n"
	.string "I can't see the TV!$"

LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem::
# 73 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! You're telling me a POKéMON\n"
	.string "found someone's lost item?\p"
	.string "That's something. If we had some smart\n"
	.string "POKéMON like that…\p"
	.string "We could recover anything that our\n"
	.string "guests mislaid…$"

LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted::
# 84 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
	.string "I was too involved in watching TV!\p"
	.string "I heard that someone busted\n"
	.string "the TEAM AQUA HIDEOUT.\p"
	.string "Thanks to that, we just booked\n"
	.string "a reservation from a big group.\p"
	.string "It was a company called… Uh…\n"
	.string "GAME something…$"

LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar::
# 98 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! A house-sitting POKéMON\n"
	.string "caught a burglar?\p"
	.string "That's something. If we had a tough\n"
	.string "POKéMON as a security guard…\p"
	.string "We would be able to provide our guests\n"
	.string "with greater safety.$"

LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner::
# 109 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
	.string "I was too involved in watching TV.\p"
	.string "Oh, yes. A big group of guests arrived\n"
	.string "a little while ago.\p"
	.string "They booked in as GAME FREAK,\n"
	.string "so I guess they must make games.\p"
	.string "Uh-oh, I'd better get working on\n"
	.string "their dinner!$"
