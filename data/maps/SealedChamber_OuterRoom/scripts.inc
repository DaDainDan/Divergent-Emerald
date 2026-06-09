SealedChamber_OuterRoom_MapScripts::
# 2 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
# 4 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
	end

SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_LANDMARK_SEALED_CHAMBER
	end

SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto_if_unset FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 13 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_EntranceCover, TRUE
# 14 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 1, METATILE_Cave_EntranceCover, TRUE
# 15 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 1, METATILE_Cave_EntranceCover, TRUE
# 16 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 17 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 18 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	goto SealedChamber_OuterRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1


SealedChamber_OuterRoom_EventScript_BrailleABC::
# 25 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 26 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_ABC
# 27 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleGHI::
# 32 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 33 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_GHI
# 34 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleMNO::
# 39 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 40 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_MNO
# 41 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleTUV::
# 46 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 47 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_TUV
# 48 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleDEF::
# 53 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 54 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DEF
# 55 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleJKL::
# 60 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 61 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_JKL
# 62 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BraillePQRS::
# 67 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 68 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_PQRS
# 69 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BraillePeriod::
# 74 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 75 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Period
# 76 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleWXYZ::
# 81 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 82 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_WXYZ
# 83 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleComma::
# 88 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 89 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Comma
# 90 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall::
# 95 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 96 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_2
# 99 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_1:
# 101 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end

SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_2:
# 97 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	goto SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_1


SealedChamber_OuterRoom_EventScript_BrailleDigHere::
# 106 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 107 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 108 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end

