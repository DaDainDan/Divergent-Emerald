GraniteCave_1F_MapScripts::
	.byte 0


GraniteCave_1F_EventScript_Hiker::
# 4 "data/maps/GraniteCave_1F/scripts.pory"
	lock_faceplayer
# 5 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	release_end


GraniteCave_1F_Text_GetsDarkAheadHereYouGo::
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\n"
	.string "It gets awfully dark ahead.\l"
	.string "It'll be tough trying to explore.\p"
	.string "That guy who came by earlier…\n"
	.string "He knew how to use FLASH, so he ought\l"
	.string "to be all right, but…\p"
	.string "I would tread lightly, if I were you.$"

GraniteCave_1F_Text_ExplainFlash::
# 21 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
	.string "a POKéMON and use it.\p"
	.string "It lights up even the inky darkness\n"
	.string "of caves.\p"
	.string "But, to use it, you need the GYM BADGE\n"
	.string "from DEWFORD's POKéMON GYM.$"
