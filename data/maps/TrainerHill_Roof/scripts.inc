TrainerHill_Roof_MapScripts::
# 2 "data/maps/TrainerHill_Roof/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_OnResume
# 3 "data/maps/TrainerHill_Roof/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_OnFrame
	.byte 0


TrainerHill_Roof_EventScript_Owner::
# 7 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_settrainerflags
# 8 "data/maps/TrainerHill_Roof/scripts.pory"
	lock_faceplayer
# 9 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_getownerstate
# 10 "data/maps/TrainerHill_Roof/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/TrainerHill_Roof/scripts.pory"
	case 0, TrainerHill_Roof_EventScript_Owner_3
# 12 "data/maps/TrainerHill_Roof/scripts.pory"
	case 2, TrainerHill_Roof_EventScript_Owner_4
TrainerHill_Roof_EventScript_Owner_1:
# 14 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_GivePrize
	end

TrainerHill_Roof_EventScript_Owner_3:
# 11 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_YouFinallyCameBravo, MSGBOX_DEFAULT
	goto TrainerHill_Roof_EventScript_Owner_1

TrainerHill_Roof_EventScript_Owner_4:
# 12 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_EndSpeakToOwner
	goto TrainerHill_Roof_EventScript_Owner_1


TrainerHill_Roof_EventScript_GivePrize::
# 19 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_giveprize
# 20 "data/maps/TrainerHill_Roof/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/TrainerHill_Roof/scripts.pory"
	case 0, TrainerHill_Roof_EventScript_GivePrize_3
# 27 "data/maps/TrainerHill_Roof/scripts.pory"
	case 1, TrainerHill_Roof_EventScript_GivePrize_4
TrainerHill_Roof_EventScript_GivePrize_1:
# 32 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_CheckFinalTime
	end

TrainerHill_Roof_EventScript_GivePrize_3:
# 22 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
# 23 "data/maps/TrainerHill_Roof/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 24 "data/maps/TrainerHill_Roof/scripts.pory"
	message gText_ObtainedTheItem
# 25 "data/maps/TrainerHill_Roof/scripts.pory"
	waitfanfare
# 26 "data/maps/TrainerHill_Roof/scripts.pory"
	waitmessage
	goto TrainerHill_Roof_EventScript_GivePrize_1

TrainerHill_Roof_EventScript_GivePrize_4:
# 28 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
# 29 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 30 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_FullUpBeBackLaterForThis, MSGBOX_DEFAULT
	goto TrainerHill_Roof_EventScript_GivePrize_1


TrainerHill_Roof_EventScript_CheckFinalTime::
# 37 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_finaltime
# 38 "data/maps/TrainerHill_Roof/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/TrainerHill_Roof/scripts.pory"
	case 0, TrainerHill_Roof_EventScript_CheckFinalTime_3
# 41 "data/maps/TrainerHill_Roof/scripts.pory"
	case 1, TrainerHill_Roof_EventScript_CheckFinalTime_4
TrainerHill_Roof_EventScript_CheckFinalTime_1:
# 44 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_EndSpeakToOwner
	end

TrainerHill_Roof_EventScript_CheckFinalTime_3:
# 40 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_GotHereMarvelouslyQuickly, MSGBOX_DEFAULT
	goto TrainerHill_Roof_EventScript_CheckFinalTime_1

TrainerHill_Roof_EventScript_CheckFinalTime_4:
# 42 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_YouWerentVeryQuick, MSGBOX_DEFAULT
	goto TrainerHill_Roof_EventScript_CheckFinalTime_1


TrainerHill_Roof_EventScript_EndSpeakToOwner::
# 49 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
	release_end

