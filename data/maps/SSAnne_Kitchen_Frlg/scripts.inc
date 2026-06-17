SSAnne_Kitchen_Frlg_MapScripts::
	.byte 0


SSAnne_Kitchen_EventScript_Chef1::
# 4 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_BusyOutOfTheWay, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef2::
# 9 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SawOddBerryInTrash, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef3::
# 14 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SoBusyImDizzy, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef4::
# 19 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	lock_faceplayer
# 20 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_IAmLeChefMainCourseIs
# 21 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	random 3
# 22 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 23 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	switch VAR_0x8008
# 24 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	case 0, SSAnne_Kitchen_EventScript_Chef4_3
# 25 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	case 1, SSAnne_Kitchen_EventScript_Chef4_4
# 26 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	case 2, SSAnne_Kitchen_EventScript_Chef4_5
SSAnne_Kitchen_EventScript_Chef4_1:
	release_end

SSAnne_Kitchen_EventScript_Chef4_3:
# 24 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SalmonDuSalad
	goto SSAnne_Kitchen_EventScript_Chef4_1

SSAnne_Kitchen_EventScript_Chef4_4:
# 25 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_EelsAuBarbecue
	goto SSAnne_Kitchen_EventScript_Chef4_1

SSAnne_Kitchen_EventScript_Chef4_5:
# 26 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_PrimeBeefsteak
	goto SSAnne_Kitchen_EventScript_Chef4_1


SSAnne_Kitchen_EventScript_Chef5::
# 32 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_PeelSpudsEveryDay, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef6::
# 37 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef7::
# 42 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_OnlyGetToPeelOnions, MSGBOX_NPC
	end


SSAnne_Kitchen_Text_BusyOutOfTheWay::
# 46 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "You, mon petit!\n"
	.string "We're busy here!\l"
	.string "Out of the way!$"

SSAnne_Kitchen_Text_SawOddBerryInTrash::
# 52 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I saw an odd BERRY in the trash.\n"
	.string "I wonder what that was?$"

SSAnne_Kitchen_Text_SoBusyImDizzy::
# 57 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I'm so busy I'm getting dizzy!\n"
	.string "You have to give me room here!$"

SSAnne_Kitchen_Text_PeelSpudsEveryDay::
# 62 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Hum-de-hum-de-ho…\p"
	.string "I peel spuds every day!\n"
	.string "Hum-hum…$"

SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton::
# 69 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Did you hear about SNORLAX?\n"
	.string "It's a glutton.\p"
	.string "No other POKéMON eats and sleeps\n"
	.string "the way SNORLAX can and does!$"

SSAnne_Kitchen_Text_OnlyGetToPeelOnions::
# 77 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Snivel… Sniff…\p"
	.string "I only get to peel onions…\n"
	.string "Snivel…$"

SSAnne_Kitchen_Text_IAmLeChefMainCourseIs::
# 84 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Er-hem!\n"
	.string "Indeed I am le CHEF!\p"
	.string "Le main course is$"

SSAnne_Kitchen_Text_SalmonDuSalad::
# 91 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Salmon du Salad!\p"
	.string "Les guests may gripe it's fish\n"
	.string "again, however!$"

SSAnne_Kitchen_Text_EelsAuBarbecue::
# 98 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Eels au Barbecue!\p"
	.string "Les guests will mutiny, I fear.$"

SSAnne_Kitchen_Text_PrimeBeefsteak::
# 104 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Prime Beefsteak!\p"
	.string "But, have I enough fillets du\n"
	.string "beef?$"
