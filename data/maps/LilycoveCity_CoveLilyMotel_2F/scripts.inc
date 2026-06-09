LilycoveCity_CoveLilyMotel_2F_MapScripts::
	.byte 0


LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner::
# 4 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_2
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_1:
# 13 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
# 14 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitmessage
# 15 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 16 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	special Special_ShowDiploma
	release_end

LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_2:
# 6 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
	specialvar VAR_RESULT, HasAllHoennMons
# 0 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_4
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_1

LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_4:
# 8 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitfanfare
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_1


LilycoveCity_CoveLilyMotel_2F_EventScript_Programmer::
# 21 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_GraphicArtist::
# 26 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_FatMan::
# 31 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_Woman::
# 36 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_GameBoyKid::
# 41 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_Scott::
# 46 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock_faceplayer
# 47 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_2
# 51 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles, MSGBOX_DEFAULT
# 52 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 53 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
	release_end

LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_2:
# 48 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy, MSGBOX_DEFAULT
	release_end


LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex::
# 57 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the GAME DESIGNER.\p"
	.string "Oh, is that right?\n"
	.string "You're working on a POKéDEX?\p"
	.string "It's tough trying to complete it,\n"
	.string "but don't give up.\p"
	.string "If you do complete it, please come\n"
	.string "show me.$"

LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis::
# 70 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wow! That's awesome!\n"
	.string "Yep, it's totally awesome!\p"
	.string "This POKéDEX is completely filled!\n"
	.string "You really must love POKéMON!\p"
	.string "I'm so impressed!\p"
	.string "Let me give you something in\n"
	.string "recognition of your feat!$"

LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer::
# 83 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Me? You're talking to me?\n"
	.string "I'm the PROGRAMMER.\p"
	.string "I wonder what the SLOTS are\n"
	.string "like here.$"

LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist::
# 91 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the GRAPHIC ARTIST! Aren't the\n"
	.string "POKéMON of HOENN interesting?$"

LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute::
# 96 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The girl TUBERS, they're cute, hey?\n"
	.string "To battle against a cute TUBER…\p"
	.string "Whoop, it's so awesome!\p"
	.string "And the TWINS! Aren't they cute?\n"
	.string "A 2-on-2 battle with TWINS…\p"
	.string "Whoop, it's unbearably fun!$"

LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart::
# 108 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The sea breeze tickles my heart.\n"
	.string "It feels wonderful here!$"

LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy::
# 113 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "You never know when and where\n"
	.string "people will challenge you.\p"
	.string "That's why I never leave home without\n"
	.string "my GAME BOY ADVANCE.$"

LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles::
# 121 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "SCOTT: … … … … …\n"
	.string "… … … … … Zzz…\p"
	.string "… … … … … Huh?!\n"
	.string "Oh, sorry, sorry! I was snoozing!\p"
	.string "I came to check out this POKéMON\n"
	.string "CONTEST thing.\p"
	.string "I have to admit, it does look quite\n"
	.string "entertaining, but…\p"
	.string "Consider me a purist--I prefer\n"
	.string "battles and tough TRAINERS.\p"
	.string "But that's just me.\p"
	.string "{PLAYER}{KUN}, I hope you'll enjoy everything\n"
	.string "like the GYMS, CONTESTS, BATTLE TENT,\l"
	.string "the whole works!$"

LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy::
# 144 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "SCOTT: I think it does take strategy\n"
	.string "to win a CONTEST.\p"
	.string "Devising CONTEST strategies is one way\n"
	.string "of becoming a better TRAINER, I'd say.$"
