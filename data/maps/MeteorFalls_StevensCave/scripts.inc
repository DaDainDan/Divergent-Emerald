MeteorFalls_StevensCave_MapScripts::
	.byte 0


MeteorFalls_StevensCave_EventScript_Steven::
# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lock
# 5 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Steven_2
# 11 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 12 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playse SE_PIN
# 13 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_ExclamationMark
# 14 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 15 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_Delay48
# 16 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 17 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 18 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 19 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
# 20 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
# 21 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 22 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	release_end

MeteorFalls_StevensCave_EventScript_Steven_2:
# 6 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 7 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 8 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release_end


MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst::
# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
	.string "I'm amazed you knew where to find me.\p"
	.string "Do you, uh…maybe think of me as\n"
	.string "just a rock maniac?\p"
	.string "No, that can't be right.\p"
	.string "We battled alongside each other at\n"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
	.string "You should have a very good idea\n"
	.string "about how good I am.\p"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
	.string "a serious challenge, expect the worst!$"

MeteorFalls_StevensCave_Text_StevenDefeat::
# 45 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "You…\n"
	.string "I had no idea you'd become so strong…$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue::
# 50 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "STEVEN: Come to think of it, ever since\n"
	.string "our paths first crossed in GRANITE\l"
	.string "CAVE in DEWFORD, I had this feeling.\p"
	.string "I thought that you would eventually\n"
	.string "become the CHAMPION.\p"
	.string "My predictions usually come true.\p"
	.string "And where will you go from here?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Fufufu, even I couldn't tell you that.$"
