JaggedPass_MapScripts::
# 2 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_MapScripts_MAP_SCRIPT_ON_RESUME
# 11 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

JaggedPass_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 4 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_STATE, 0
	goto_if_eq JaggedPass_MapScripts_MAP_SCRIPT_ON_RESUME_2
JaggedPass_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

JaggedPass_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	checkitem ITEM_MAGMA_EMBLEM
# 0 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JaggedPass_MapScripts_MAP_SCRIPT_ON_RESUME_4
	goto JaggedPass_MapScripts_MAP_SCRIPT_ON_RESUME_1

JaggedPass_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 6 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
	goto JaggedPass_MapScripts_MAP_SCRIPT_ON_RESUME_1

JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_ASH_WEATHER, 1
	goto_if_eq JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 14 "data/maps/JaggedPass/scripts.pory"
	doweather
	goto JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JaggedPass_MapScripts_MAP_SCRIPT_ON_LOAD:
# 19 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_STATE, 1
	goto_if_le JaggedPass_MapScripts_MAP_SCRIPT_ON_LOAD_2
JaggedPass_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

JaggedPass_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 20 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 21 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
	goto JaggedPass_MapScripts_MAP_SCRIPT_ON_LOAD_1


JaggedPass_EventScript_OpenMagmaHideout::
# 28 "data/maps/JaggedPass/scripts.pory"
	lockall
# 29 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1
# 30 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1
# 31 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8
# 32 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5
# 33 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 34 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 35 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 36 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 37 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1
# 38 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1
# 39 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16
# 40 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3
# 41 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 42 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 43 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 44 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 45 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 46 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 47 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 48 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 49 "data/maps/JaggedPass/scripts.pory"
	waitse
# 50 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end


JaggedPass_EventScript_MagmaHideoutGuard::
# 55 "data/maps/JaggedPass/scripts.pory"
	lockall
# 56 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_MagmaHideoutGuard_2
# 62 "data/maps/JaggedPass/scripts.pory"
	waitse
# 63 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 64 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 65 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 66 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_Delay48
# 67 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 68 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 69 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 70 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 71 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 72 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
# 73 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
JaggedPass_EventScript_MagmaHideoutGuard_1:
# 75 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 76 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 77 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end

JaggedPass_EventScript_MagmaHideoutGuard_2:
# 57 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 58 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 59 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 60 "data/maps/JaggedPass/scripts.pory"
	closemessage
	goto JaggedPass_EventScript_MagmaHideoutGuard_1


JaggedPass_EventScript_Eric::
# 82 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
# 83 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end


JaggedPass_EventScript_Diana::
# 88 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JaggedPass_EventScript_Diana_2
# 94 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
	release_end

JaggedPass_EventScript_Diana_2:
# 90 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 91 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
	end


JaggedPass_EventScript_RegisterDiana::
# 99 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 100 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 101 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
	release_end


JaggedPass_EventScript_Ethan::
# 106 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JaggedPass_EventScript_Ethan_2
# 112 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
	release_end

JaggedPass_EventScript_Ethan_2:
# 108 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 109 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
	end


JaggedPass_EventScript_RegisterEthan::
# 117 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 118 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 119 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
	release_end


JaggedPass_EventScript_Julio::
# 124 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
# 125 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
	end


JaggedPass_EventScript_Autumn::
# 130 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
# 131 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
	end


JaggedPass_Text_EricIntro::
# 135 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
	.string "Now this is what I've always wanted\n"
	.string "in a mountain.\p"
	.string "This jagged bumpiness…\n"
	.string "It rocks my soul!$"

JaggedPass_Text_EricDefeat::
# 145 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"

JaggedPass_Text_EricPostBattle::
# 149 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
	.string "But, when it comes to the love of\n"
	.string "the mountains, I have you beat!$"

JaggedPass_Text_DianaIntro::
# 156 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
	.string "It's not suited for a picnic.$"

JaggedPass_Text_DianaDefeat::
# 161 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
	.string "The ground is too bumpy…$"

JaggedPass_Text_DianaPostBattle::
# 166 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
	.string "Some people cleverly ride their\n"
	.string "bicycles up this horribly bumpy pass.$"

JaggedPass_Text_DianaRegister::
# 173 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
	.string "If you do return, I'd like a rematch.$"

JaggedPass_Text_DianaRematchIntro::
# 178 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
	.string "Just like POKéMON!$"

JaggedPass_Text_DianaRematchDefeat::
# 183 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
	.string "too bumpy!$"

JaggedPass_Text_DianaPostRematch::
# 188 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
	.string "enjoy this bumpy hike.$"

JaggedPass_Text_EthanIntro::
# 193 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
	.string "It's a good place for training.$"

JaggedPass_Text_EthanDefeat::
# 198 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
	.string "trying to find a good footing…$"

JaggedPass_Text_EthanPostBattle::
# 203 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
	.string "jump ledges.$"

JaggedPass_Text_EthanRegister::
# 208 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
	.string "I'll be sure to win!\p"
	.string "Can you register me in your POKéNAV?$"

JaggedPass_Text_EthanRematchIntro::
# 215 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
	.string "I sing while I climb now.$"

JaggedPass_Text_EthanRematchDefeat::
# 220 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
	.string "bumpy ground…$"

JaggedPass_Text_EthanPostRematch::
# 225 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
	.string "in MAUVILLE CITY…$"

JaggedPass_Text_GruntIntro::
# 230 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
	.string "What are you doing here?\p"
	.string "What am I doing in a place like this?\p"
	.string "What business is it of yours?$"

JaggedPass_Text_GruntDefeat::
# 239 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
	.string "I should've ducked into our HIDEOUT\n"
	.string "right away…$"

JaggedPass_Text_GoWhereverYouWant::
# 246 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
	.string "I admit it--you're strong!\p"
	.string "Don't worry about me.\n"
	.string "Go wherever you want!$"

JaggedPass_Text_BoulderShakingInResponseToEmblem::
# 254 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
	.string "to the MAGMA EMBLEM!$"

JaggedPass_Text_JulioIntro::
# 259 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
	.string "down the mountain in one go!$"

JaggedPass_Text_JulioDefeat::
# 264 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"

JaggedPass_Text_JulioPostBattle::
# 268 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
	.string "my rear end's sore…$"

JaggedPass_Text_AutumnIntro::
# 273 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
	.string "I have confidence in my strength!$"

JaggedPass_Text_AutumnDefeat::
# 278 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
	.string "What went wrong?$"

JaggedPass_Text_AutumnPostBattle::
# 283 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
	.string "a little up the hill from here?$"
