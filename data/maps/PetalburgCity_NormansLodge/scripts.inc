PetalburgCity_NormansLodge_MapScripts::
# 2 "data/maps/PetalburgCity_NormansLodge/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_NormansLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PetalburgCity_NormansLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PetalburgCity_NormansLodge/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 5
	goto_if_eq PetalburgCity_NormansLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PetalburgCity_NormansLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

PetalburgCity_NormansLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/PetalburgCity_NormansLodge/scripts.pory"
	clearflag FLAG_HIDE_LODGE_NORMAN
	goto PetalburgCity_NormansLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


PetalburgCity_NormansLodge_EventScript_NormanThreeBadges::
# 11 "data/maps/PetalburgCity_NormansLodge/scripts.pory"
	msgbox PetalburgCity_NormansLodge_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
	release_end


PetalburgCity_NormansLodge_Text_YouHaveGottenStronger::
# 15 "data/maps/PetalburgCity_NormansLodge/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
	.string "stronger.\p"
	.string "I can tell by the number of BADGES\n"
	.string "that you've earned.$"
