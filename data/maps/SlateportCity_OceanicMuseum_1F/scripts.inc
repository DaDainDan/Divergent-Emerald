SlateportCity_OceanicMuseum_1F_MapScripts::
	.byte 0


SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
# 4 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
# 9 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 10 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 11 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
	end


SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
# 17 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 18 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 19 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
	end


SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
# 25 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	showmoneybox 0, 0
# 26 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
# 27 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee_2
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee_1:
# 30 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 31 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 32 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 33 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee_2:
# 28 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee_1


SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
	checkmoney 50
# 0 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_2
# 52 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_SHOP
# 53 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removemoney 50
# 54 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	updatemoneybox
# 55 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 56 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 57 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_1:
# 59 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_2:
# 40 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_5
# 45 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 46 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 47 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 48 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 49 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_1

SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_5:
# 41 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
# 42 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 43 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
	goto SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee_1


SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
# 64 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
# 69 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
# 74 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
# 79 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
# 84 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
# 89 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
# 94 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
# 99 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
# 104 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
# 109 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
# 114 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
# 119 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
# 124 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
# 129 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
# 134 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
# 139 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
# 144 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
# 149 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
# 154 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
# 159 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lock_faceplayer
# 160 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 8
# 161 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_PIN
# 162 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
# 163 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 164 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_Delay48
# 165 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 166 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_THIEF
# 0 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_2
# 171 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_THIEF
# 172 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
# 173 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 174 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	switch VAR_FACING
# 175 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	case DIR_NORTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_6
# 178 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	case DIR_SOUTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_7
# 180 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	case DIR_WEST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_8
# 181 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	case DIR_EAST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_8
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_4:
# 185 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
# 187 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_EXIT
# 188 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT
	release_end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_2:
# 168 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_DEFAULT
	release_end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_6:
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_Movement_0
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_Movement_1
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_4

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_7:
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_Movement_2
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_4

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_8:
# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_Movement_3
# 183 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_Movement_2
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_4


# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_Movement_0:
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_4
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_faster_down
	step_end

# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_Movement_1:
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	run_right
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	run_down
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	run_down
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	run_down
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	run_down
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
	step_end

# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_Movement_2:
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	face_down
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	run_down
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	run_down
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	run_down
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	run_down
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
	step_end

# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt_Movement_3:
# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_faster_down
	step_end

SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter::
# 192 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Welcome to the OCEANIC MUSEUM.\p"
	.string "The entrance fee is ¥50.\n"
	.string "Would you like to enter?$"

SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself::
# 199 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Please enjoy yourself.$"

SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney::
# 203 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Oh? I'm sorry, but you don't seem to\n"
	.string "have enough money.$"

SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup::
# 208 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Oh? You're with that group that\n"
	.string "went in earlier?\p"
	.string "You're the only one who's late.\n"
	.string "You'd better go catch up to them!$"

SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll::
# 216 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "We, TEAM AQUA, exist for the good\n"
	.string "of all!$"

SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere::
# 221 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "We were told to assemble here,\n"
	.string "so we did, but…\p"
	.string "Our BOSS, the linchpin, isn't here.$"

SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich::
# 228 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "If I ripped off the stuff here,\n"
	.string "would it make me rich?$"

SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds::
# 233 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "What I learn here, I can put to use on\n"
	.string "nefarious deeds…$"

SlateportCity_OceanicMuseum_1F_Text_RustboroBungled::
# 238 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "If our goons didn't bungle things\n"
	.string "in RUSTBORO, we wouldn't be here!$"

SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney::
# 243 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I didn't have ¥50, so it took a long\n"
	.string "time getting by the receptionist.$"

SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling::
# 248 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I want to learn about the sea and\n"
	.string "use that knowledge for battling.$"

SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel::
# 253 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I get all giddy and gooey when\n"
	.string "I see the sea!\p"
	.string "For me, CAPT. STERN is the number\n"
	.string "one role model!$"

SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow::
# 261 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "The sea is vast without end, and\n"
	.string "infinitely deep…\p"
	.string "There must be many POKéMON that\n"
	.string "we don't know about.$"

SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon::
# 269 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "I want a sea POKéMON.\p"
	.string "I think it would feel cool and nice\n"
	.string "to hug.$"

SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis::
# 276 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Aiyeeeh!\n"
	.string "What are you doing here?\p"
	.string "Me? I'm the TEAM AQUA member\n"
	.string "you thumped before, remember?\l"
	.string "Back in RUSTURF TUNNEL?\p"
	.string "Here, take this!\n"
	.string "You have to forgive me!$"

SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain::
# 288 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "That TM, it suits you more than it\n"
	.string "does me.\p"
	.string "Hope I never see you again!\n"
	.string "Wahahaha!$"

SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis::
# 296 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Awww, come on!\n"
	.string "You have to take this and let me go!$"

SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment::
# 301 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A blue fluid is spiraling inside\n"
	.string "a glass vessel.\p"
	.string "“This is an experiment to create a\n"
	.string "WHIRLPOOL artificially using wind.”$"

SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment::
# 309 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A red ball is bobbing up and down\n"
	.string "inside a glass vessel.\p"
	.string "“This is an experiment simulating a\n"
	.string "WATERFALL using the ball's buoyancy.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay::
# 317 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of soil from the ocean\n"
	.string "floor.\p"
	.string "“Over many years, the remains of\n"
	.string "life-forms settle at the bottom of\l"
	.string "the sea, making sedimentary layers.\p"
	.string "“By analyzing these layers, the\n"
	.string "ancient past is revealed.”$"

SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay::
# 329 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of beach sand.\p"
	.string "“Stones from mountains are washed\n"
	.string "down by rivers where they are\l"
	.string "chipped and ground down.\p"
	.string "“They are reduced to grains and end\n"
	.string "up as sand on beaches.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1::
# 340 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 1\n"
	.string "Why is seawater blue?\p"
	.string "“Light is composed of many colors.\p"
	.string "“When light passes through water,\n"
	.string "most kinds of light lose color.\p"
	.string "“However, blue light retains its\n"
	.string "color, making the sea appear blue.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2::
# 353 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 2\n"
	.string "Why is the sea salty?\p"
	.string "“Seawater contains dissolved salt in\n"
	.string "the form of sodium and chlorine ions.\p"
	.string "“These ions leech out of rocks\n"
	.string "and are carried out to sea by rain.\p"
	.string "“The concentration of dissolved salt\n"
	.string "makes the sea salty.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3::
# 367 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 3\n"
	.string "Which is bigger? The sea or land?\p"
	.string "“The sea covers about 70% of\n"
	.string "the planet, and the rest is land.\p"
	.string "“The sea is therefore more than twice\n"
	.string "the size of land.”$"

SlateportCity_OceanicMuseum_1F_Text_FossilDisplay::
# 378 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a fossil with wavy ridges on it.\p"
	.string "“Soil on the ocean floor gets scoured\n"
	.string "by the tide.\p"
	.string "“The flowing seawater marks the soil\n"
	.string "with small ridges and valleys.\p"
	.string "“If this soil becomes fossilized, it is\n"
	.string "called a ripple mark.”$"

SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine::
# 391 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A strange machine is rotating under\n"
	.string "a glass dome.\p"
	.string "Maybe it's for measuring the depth\n"
	.string "of something…$"
