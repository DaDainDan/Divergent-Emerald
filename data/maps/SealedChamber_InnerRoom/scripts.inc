SealedChamber_InnerRoom_MapScripts::
	.byte 0


SealedChamber_InnerRoom_EventScript_BrailleBackWall::
# 4 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 5 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth
# 6 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, SealedChamber_InnerRoom_EventScript_BrailleBackWall_3
SealedChamber_InnerRoom_EventScript_BrailleBackWall_1:
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	end

SealedChamber_InnerRoom_EventScript_BrailleBackWall_2:
# 7 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeoutbgm 0
# 8 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_MOVE
# 9 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 10 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 11 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 12 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 13 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 14 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeinbgm 0
# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
	goto SealedChamber_InnerRoom_EventScript_BrailleBackWall_1

SealedChamber_InnerRoom_EventScript_BrailleBackWall_3:
	specialvar VAR_RESULT, CheckRelicanthWailord
# 0 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_InnerRoom_EventScript_BrailleBackWall_2
	goto SealedChamber_InnerRoom_EventScript_BrailleBackWall_1


SealedChamber_InnerRoom_EventScript_BrailleStoryPart1::
# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	end


SealedChamber_InnerRoom_EventScript_BrailleStoryPart2::
# 37 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 38 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	end


SealedChamber_InnerRoom_EventScript_BrailleStoryPart3::
# 44 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 45 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
# 46 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	end


SealedChamber_InnerRoom_EventScript_BrailleStoryPart4::
# 51 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeFearedIt
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	end


SealedChamber_InnerRoom_EventScript_BrailleStoryPart5::
# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 59 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	end


SealedChamber_InnerRoom_EventScript_BrailleStoryPart6::
# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
# 67 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
	end

