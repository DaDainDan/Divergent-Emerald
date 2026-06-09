Underwater_SealedChamber_MapScripts::
# 2 "data/maps/Underwater_SealedChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_DIVE_WARP, Underwater_SealedChamber_MapScripts_MAP_SCRIPT_ON_DIVE_WARP
	.byte 0

Underwater_SealedChamber_MapScripts_MAP_SCRIPT_ON_DIVE_WARP:
# 3 "data/maps/Underwater_SealedChamber/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 4 "data/maps/Underwater_SealedChamber/scripts.pory"
	compare VAR_0x8004, 12
	goto_if_ne Underwater_SealedChamber_MapScripts_MAP_SCRIPT_ON_DIVE_WARP_2
# 4 "data/maps/Underwater_SealedChamber/scripts.pory"
	compare VAR_0x8005, 44
	goto_if_ne Underwater_SealedChamber_MapScripts_MAP_SCRIPT_ON_DIVE_WARP_2
# 7 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_SEALED_CHAMBER_OUTER_ROOM, 10, 19
Underwater_SealedChamber_MapScripts_MAP_SCRIPT_ON_DIVE_WARP_1:
	end

Underwater_SealedChamber_MapScripts_MAP_SCRIPT_ON_DIVE_WARP_2:
# 5 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_ROUTE134, 60, 31
	goto Underwater_SealedChamber_MapScripts_MAP_SCRIPT_ON_DIVE_WARP_1


Underwater_SealedChamber_EventScript_Braille::
# 14 "data/maps/Underwater_SealedChamber/scripts.pory"
	lockall
# 15 "data/maps/Underwater_SealedChamber/scripts.pory"
	braillemsgbox Underwater_SealedChamber_Braille_GoUpHere
# 16 "data/maps/Underwater_SealedChamber/scripts.pory"
	releaseall
	end

