SaffronCity_Dojo_Frlg_MapScripts::
	.byte 0


SaffronCity_Dojo_EventScript_TriggerMasterBattleLeft::
# 4 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lockall
# 5 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 6 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_StepFasterLeft
# 7 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 8 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	releaseall
	end


SaffronCity_Dojo_EventScript_TriggerMasterBattleRight::
# 13 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lockall
# 14 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 15 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_StepFasterRight
# 16 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 17 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	releaseall
	end


SaffronCity_Dojo_EventScript_HitmonleeBall::
# 22 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lock_faceplayer
# 23 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_HitmonleeBall_2
SaffronCity_Dojo_EventScript_HitmonleeBall_1:
# 26 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HITMONLEE
# 27 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_GiveHitmon
	end

SaffronCity_Dojo_EventScript_HitmonleeBall_2:
# 24 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_AlreadyGotHitmon
	goto SaffronCity_Dojo_EventScript_HitmonleeBall_1


SaffronCity_Dojo_EventScript_AlreadyGotHitmon::
# 32 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_BetterNotGetGreedy
	release_end


SaffronCity_Dojo_EventScript_HitmonchanBall::
# 37 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lock_faceplayer
# 38 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_HitmonchanBall_2
SaffronCity_Dojo_EventScript_HitmonchanBall_1:
# 41 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HITMONCHAN
# 42 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_GiveHitmon
	end

SaffronCity_Dojo_EventScript_HitmonchanBall_2:
# 39 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_AlreadyGotHitmon
	goto SaffronCity_Dojo_EventScript_HitmonchanBall_1


SaffronCity_Dojo_EventScript_GiveHitmon::
# 47 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	showmonpic VAR_TEMP_TRANSFERRED_SPECIES, 10, 3
# 48 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_StepFasterUp
# 49 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 51 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	switch VAR_TEMP_TRANSFERRED_SPECIES
# 52 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	case SPECIES_HITMONLEE, SaffronCity_Dojo_EventScript_GiveHitmon_3
# 53 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	case SPECIES_HITMONCHAN, SaffronCity_Dojo_EventScript_GiveHitmon_4
SaffronCity_Dojo_EventScript_GiveHitmon_1:
# 55 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 56 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_6
# 60 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	hidemonpic
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 25
# 0 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_9
SaffronCity_Dojo_EventScript_GiveHitmon_8:
# 64 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 65 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 66 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 67 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 68 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 69 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmessage
# 70 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitfanfare
# 71 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 72 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 73 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	switch VAR_0x8007
# 74 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	case MON_GIVEN_TO_PARTY, SaffronCity_Dojo_EventScript_GiveHitmon_13
# 79 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	case MON_GIVEN_TO_PC, SaffronCity_Dojo_EventScript_GiveHitmon_14
SaffronCity_Dojo_EventScript_GiveHitmon_11:
	release_end

SaffronCity_Dojo_EventScript_GiveHitmon_3:
# 52 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonlee, MSGBOX_YESNO
	goto SaffronCity_Dojo_EventScript_GiveHitmon_1

SaffronCity_Dojo_EventScript_GiveHitmon_4:
# 53 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonchan, MSGBOX_YESNO
	goto SaffronCity_Dojo_EventScript_GiveHitmon_1

SaffronCity_Dojo_EventScript_GiveHitmon_6:
# 57 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	hidemonpic
	release_end

SaffronCity_Dojo_EventScript_GiveHitmon_9:
# 62 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto SaffronCity_Dojo_EventScript_GiveHitmon_8

SaffronCity_Dojo_EventScript_GiveHitmon_13:
# 75 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_15
	goto SaffronCity_Dojo_EventScript_GiveHitmon_11

SaffronCity_Dojo_EventScript_GiveHitmon_14:
# 80 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_18
SaffronCity_Dojo_EventScript_GiveHitmon_17:
# 83 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto SaffronCity_Dojo_EventScript_GiveHitmon_11

SaffronCity_Dojo_EventScript_GiveHitmon_15:
# 76 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 77 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SaffronCity_Dojo_EventScript_GiveHitmon_11

SaffronCity_Dojo_EventScript_GiveHitmon_18:
# 81 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto SaffronCity_Dojo_EventScript_GiveHitmon_17


SaffronCity_Dojo_EventScript_Statue::
# 89 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_FightingDojo, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_LeftScroll::
# 94 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_EnemiesOnEverySide, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_RightScroll::
# 99 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_GoesAroundComesAround, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_Hitoshi::
# 104 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HITOSHI, SaffronCity_Dojo_Text_HitoshiIntro, SaffronCity_Dojo_Text_HitoshiDefeat
# 105 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Hideki::
# 110 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HIDEKI, SaffronCity_Dojo_Text_HidekiIntro, SaffronCity_Dojo_Text_HidekiDefeat
# 111 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HidekiPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Aaron::
# 116 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_AARON, SaffronCity_Dojo_Text_AaronIntro, SaffronCity_Dojo_Text_AaronDefeat
# 117 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Mike::
# 122 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_MIKE, SaffronCity_Dojo_Text_MikeIntro, SaffronCity_Dojo_Text_MikeDefeat
# 123 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_MasterKoichi::
# 128 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KOICHI, SaffronCity_Dojo_Text_MasterKoichiIntro, SaffronCity_Dojo_Text_MasterKoichiDefeat, SaffronCity_Dojo_EventScript_DefeatedMasterKoichi
# 129 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_MasterKoichi_2
# 133 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_ChoosePrizedFightingMon, MSGBOX_AUTOCLOSE
	end

SaffronCity_Dojo_EventScript_MasterKoichi_2:
# 130 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_StayAndTrainWithUs
	release_end


SaffronCity_Dojo_EventScript_DefeatedMasterKoichi::
# 138 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
	release_end


SaffronCity_Dojo_Text_MasterKoichiIntro::
# 142 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Grunt!\p"
	.string "I am the KARATE MASTER!\n"
	.string "I am the LEADER here!\p"
	.string "You wish to challenge us?\n"
	.string "Expect no mercy!\p"
	.string "Fwaaa!$"

SaffronCity_Dojo_Text_MasterKoichiDefeat::
# 154 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hwa!\n"
	.string "Arrgh! Beaten!$"

SaffronCity_Dojo_Text_ChoosePrizedFightingMon::
# 159 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Indeed, I have lost!\p"
	.string "But, I beseech you, do not take\n"
	.string "our emblem as your trophy!\p"
	.string "In return, I will give you a prized\n"
	.string "FIGHTING POKéMON!\p"
	.string "Choose whichever one you like!$"

SaffronCity_Dojo_Text_StayAndTrainWithUs::
# 171 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Grunt!\n"
	.string "Stay and train at karate with us!$"

SaffronCity_Dojo_Text_MikeIntro::
# 176 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hoargh!\n"
	.string "Take your shoes off!$"

SaffronCity_Dojo_Text_MikeDefeat::
# 181 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I give up!$"

SaffronCity_Dojo_Text_MikePostBattle::
# 185 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You wait 'til you see our MASTER!\n"
	.string "I'm a small fry compared to him!$"

SaffronCity_Dojo_Text_HidekiIntro::
# 190 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I hear you're good!\n"
	.string "Show me!$"

SaffronCity_Dojo_Text_HidekiDefeat::
# 195 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Judge!\n"
	.string "One point!$"

SaffronCity_Dojo_Text_HidekiPostBattle::
# 200 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Our MASTER is a pro fighter.\n"
	.string "Be prepared to lose!$"

SaffronCity_Dojo_Text_AaronIntro::
# 205 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hiyah!\n"
	.string "I have no fear for anything tough!\p"
	.string "I shatter boulders for training\n"
	.string "every day!$"

SaffronCity_Dojo_Text_AaronDefeat::
# 213 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Yow!\n"
	.string "Stubbed fingers!$"

SaffronCity_Dojo_Text_AaronPostBattle::
# 218 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "The only thing that frightens us is\n"
	.string "psychic power!$"

SaffronCity_Dojo_Text_HitoshiIntro::
# 223 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hwaah!\p"
	.string "You're trespassing in our\n"
	.string "FIGHTING DOJO!$"

SaffronCity_Dojo_Text_HitoshiDefeat::
# 230 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Oof!\n"
	.string "I give up!$"

SaffronCity_Dojo_Text_HitoshiPostBattle::
# 235 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "The prime fighters across the land\n"
	.string "train here.$"

SaffronCity_Dojo_Text_YouWantHitmonlee::
# 240 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You want the hard-kicking\n"
	.string "HITMONLEE?$"

SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster::
# 245 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from the KARATE MASTER.$"

SaffronCity_Dojo_Text_YouWantHitmonchan::
# 250 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You want the piston-punching\n"
	.string "HITMONCHAN?$"

SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster2::
# 255 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "{PLAYER}は　カラテ　だいおう　から\n"
	.string "{STR_VAR_1}を　もらった！$"

SaffronCity_Dojo_Text_BetterNotGetGreedy::
# 260 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Better not get greedy…$"

SaffronCity_Dojo_Text_EnemiesOnEverySide::
# 264 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Enemies on every side!$"

SaffronCity_Dojo_Text_GoesAroundComesAround::
# 268 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "What goes around comes around.$"

SaffronCity_Dojo_Text_FightingDojo::
# 272 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "FIGHTING DOJO$"
