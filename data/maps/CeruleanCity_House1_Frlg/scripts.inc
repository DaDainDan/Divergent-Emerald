CeruleanCity_House1_Frlg_MapScripts::
	.byte 0


CeruleanCity_House1_EventScript_BadgeGuy::
# 4 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_BadgesHaveAmazingSecrets
# 6 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeAnotherBadge::
# 11 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	message CeruleanCity_House1_Text_DescribeWhichBadge
# 12 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	waitmessage
# 13 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BADGES
# 14 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 15 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 0, CeruleanCity_House1_EventScript_DescribeAnotherBadge_3
# 17 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 1, CeruleanCity_House1_EventScript_DescribeAnotherBadge_4
# 18 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 2, CeruleanCity_House1_EventScript_DescribeAnotherBadge_5
# 19 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 3, CeruleanCity_House1_EventScript_DescribeAnotherBadge_6
# 20 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 4, CeruleanCity_House1_EventScript_DescribeAnotherBadge_7
# 21 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 5, CeruleanCity_House1_EventScript_DescribeAnotherBadge_8
# 22 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 6, CeruleanCity_House1_EventScript_DescribeAnotherBadge_9
# 23 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 7, CeruleanCity_House1_EventScript_DescribeAnotherBadge_10
# 24 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 8, CeruleanCity_House1_EventScript_DescribeAnotherBadge_11
# 25 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case MULTI_B_PRESSED, CeruleanCity_House1_EventScript_DescribeAnotherBadge_11
CeruleanCity_House1_EventScript_DescribeAnotherBadge_1:
# 29 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeAnotherBadge_3:
# 16 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AttackStatFlash
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_4:
# 17 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv30Cut
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_5:
# 18 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpeedStatFly
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_6:
# 19 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv50Strength
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_7:
# 20 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_DefenseStatSurf
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_8:
# 21 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv70RockSmash
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_9:
# 22 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpStatsWaterfall
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_10:
# 23 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AllMonsWillObeyYou
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_11:
# 26 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ComeVisitAnytime
	release_end


CeruleanCity_House1_Text_BadgesHaveAmazingSecrets::
# 33 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Only skilled TRAINERS can collect\n"
	.string "POKéMON BADGES.\p"
	.string "I see you have at least one.\p"
	.string "Those BADGES have amazing secrets,\n"
	.string "did you know?$"

CeruleanCity_House1_Text_DescribeWhichBadge::
# 43 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Now then…\p"
	.string "Which of the eight BADGES should\n"
	.string "I describe?$"

CeruleanCity_House1_Text_ComeVisitAnytime::
# 50 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Come visit me anytime you wish.$"

CeruleanCity_House1_Text_AttackStatFlash::
# 54 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The ATTACK stat of all your\n"
	.string "POKéMON increases a little bit.\p"
	.string "It also lets you use the move\n"
	.string "FLASH outside of battle.$"

CeruleanCity_House1_Text_ObeyLv30Cut::
# 62 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 30 will obey\n"
	.string "you.\p"
	.string "That includes even outsiders you\n"
	.string "obtain in trades.\p"
	.string "POKéMON of higher levels will\n"
	.string "be unruly in battle, however.\p"
	.string "It also lets you use the move\n"
	.string "CUT outside of battle.$"

CeruleanCity_House1_Text_SpeedStatFly::
# 76 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SPEED stat of all your\n"
	.string "POKéMON increases a little bit.\p"
	.string "It also lets you use the move\n"
	.string "FLY outside of battle.$"

CeruleanCity_House1_Text_ObeyLv50Strength::
# 84 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 50 will obey\n"
	.string "you.\p"
	.string "That includes even outsiders you\n"
	.string "obtain in trades.\p"
	.string "POKéMON of higher levels will\n"
	.string "be unruly in battle, however.\p"
	.string "It also lets you use the move\n"
	.string "STRENGTH outside of battle.$"

CeruleanCity_House1_Text_DefenseStatSurf::
# 98 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The DEFENSE stat of all your\n"
	.string "POKéMON increases a little bit.\p"
	.string "It also lets you use the move\n"
	.string "SURF outside of battle.$"

CeruleanCity_House1_Text_ObeyLv70RockSmash::
# 106 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 70 will obey\n"
	.string "you.\p"
	.string "That includes even outsiders you\n"
	.string "obtain in trades.\p"
	.string "POKéMON of higher levels will\n"
	.string "be unruly in battle, however.\p"
	.string "It also lets you use the move\n"
	.string "ROCK SMASH outside of battle.$"

CeruleanCity_House1_Text_SpStatsWaterfall::
# 120 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SP. ATK and SP. DEF stats of\n"
	.string "all your POKéMON rise a little bit.\p"
	.string "It also lets you use the move\n"
	.string "WATERFALL outside of battle.$"

CeruleanCity_House1_Text_AllMonsWillObeyYou::
# 128 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "All POKéMON will obey you!$"
