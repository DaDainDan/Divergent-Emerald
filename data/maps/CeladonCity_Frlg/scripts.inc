CeladonCity_Frlg_MapScripts::
# 2 "data/maps/CeladonCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CeladonCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CeladonCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
	end


CeladonCity_EventScript_LittleGirl::
# 9 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
	end


CeladonCity_EventScript_OldMan1::
# 14 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 15 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
	release_end


CeladonCity_EventScript_Woman::
# 20 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
	end


CeladonCity_EventScript_OldMan2::
# 25 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
	end


CeladonCity_EventScript_SoftboiledTutor::
# 30 "data/maps/CeladonCity_Frlg/scripts.pory"
	goto EventScript_SoftboiledTutor
	end


CeladonCity_EventScript_FatMan::
# 35 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock_faceplayer
# 36 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
# 37 "data/maps/CeladonCity_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


CeladonCity_EventScript_Poliwrath::
# 42 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock_faceplayer
# 43 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitse
# 44 "data/maps/CeladonCity_Frlg/scripts.pory"
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
# 45 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_Poliwrath
# 46 "data/maps/CeladonCity_Frlg/scripts.pory"
	closemessage
# 47 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmoncry
# 48 "data/maps/CeladonCity_Frlg/scripts.pory"
	applymovement LOCALID_CELADON_POLIWRATH, Common_Movement_FaceOriginalDirection
# 49 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmovement 0
	release_end


CeladonCity_EventScript_RocketGrunt1::
# 54 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
	end


CeladonCity_EventScript_RocketGrunt2::
# 59 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
	end


CeladonCity_EventScript_Boy::
# 64 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
	end


CeladonCity_EventScript_SilphCoScientist::
# 69 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
	end


CeladonCity_EventScript_TrainerTips1::
# 74 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
	end


CeladonCity_EventScript_CitySign::
# 79 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
	end


CeladonCity_EventScript_GymSign::
# 84 "data/maps/CeladonCity_Frlg/scripts.pory"
	lockall
# 85 "data/maps/CeladonCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 0
# 86 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GymSign
# 87 "data/maps/CeladonCity_Frlg/scripts.pory"
	releaseall
	end


CeladonCity_EventScript_MansionSign::
# 92 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
	end


CeladonCity_EventScript_DeptStoreSign::
# 97 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
	end


CeladonCity_EventScript_TrainerTips2::
# 102 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
	end


CeladonCity_EventScript_PrizeExchangeSign::
# 107 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
	end


CeladonCity_EventScript_GameCornerSign::
# 112 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
	end


CeladonCity_Text_GotMyKoffingInCinnabar::
# 116 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I got my KOFFING in CINNABAR.\p"
	.string "It's usually nice, but it breathes\n"
	.string "poison when it's angry.$"

CeladonCity_Text_GymIsGreatFullOfWomen::
# 123 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Heheh! This GYM is great!\n"
	.string "It's full of women!$"

CeladonCity_Text_GameCornerIsBadForCitysImage::
# 128 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON takes pride in its efforts\n"
	.string "to keep the city beautiful.\p"
	.string "That's why the new GAME CORNER is\n"
	.string "bad for our city's image.$"

CeladonCity_Text_BlewItAllAtSlots::
# 136 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Moan…\n"
	.string "I blew it all at the slots!\p"
	.string "I knew I should have cashed in my\n"
	.string "COINS for prizes!$"

CeladonCity_Text_MyTrustedPalPoliwrath::
# 144 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "This is my trusted pal, POLIWRATH.\p"
	.string "It evolved from a POLIWHIRL when\n"
	.string "I used a WATER STONE.$"

CeladonCity_Text_Poliwrath::
# 151 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "POLIWRATH: Ribi ribit!$"

CeladonCity_Text_GetLostOrIllPunchYou::
# 155 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "What are you staring at?\n"
	.string "Get lost, or I'll punch you.$"

CeladonCity_Text_KeepOutOfTeamRocketsWay::
# 160 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Keep out of TEAM ROCKET's way!$"

CeladonCity_Text_ExplainXAccuracyDireHit::
# 164 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "X ACCURACY boosts the accuracy of\n"
	.string "techniques.\p"
	.string "DIRE HIT jacks up the likelihood\n"
	.string "of critical hits.\p"
	.string "Get your items at the CELADON\n"
	.string "DEPT. STORE!$"

CeladonCity_Text_CitySign::
# 177 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON CITY\n"
	.string "The City of Rainbow Dreams$"

CeladonCity_Text_GymSign::
# 182 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON CITY POKéMON GYM\n"
	.string "LEADER: ERIKA\l"
	.string "The Nature-Loving Princess!$"

CeladonCity_Text_MansionSign::
# 188 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON MANSION$"

CeladonCity_Text_DeptStoreSign::
# 192 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Find what you need at the\n"
	.string "CELADON DEPT. STORE!$"

CeladonCity_Text_GuardSpecProtectsFromStatus::
# 197 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "GUARD SPEC. protects POKéMON\n"
	.string "from status-reduction moves during\l"
	.string "battle.\p"
	.string "Get your items at the\n"
	.string "CELADON DEPT. STORE!$"

CeladonCity_Text_PrizeExchangeSign::
# 208 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "COINS exchanged for prizes!\n"
	.string "PRIZE EXCHANGE$"

CeladonCity_Text_GameCornerSign::
# 213 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "ROCKET GAME CORNER\n"
	.string "The playground for grown-ups!$"

CeladonCity_Text_ScaldedTongueOnTea::
# 218 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Aaaagh, ow…\n"
	.string "I scalded my tongue!\p"
	.string "This nice old lady in the MANSION\n"
	.string "gave me some TEA.\p"
	.string "But it was boiling hot!\n"
	.string "Gotta cool it to drink it.$"

Text_SoftboiledTeach::
# 229 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Hello, there!\p"
	.string "I've seen you about, but I never\n"
	.string "had a chance to chat.\p"
	.string "It must be good luck that brought\n"
	.string "us together finally.\p"
	.string "I'd like to celebrate by teaching\n"
	.string "you the move SOFTBOILED.$"

Text_SoftboiledDeclined::
# 242 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I'll always be keeping an eye out\n"
	.string "for you.\p"
	.string "I hope we can chat again.$"

Text_SoftboiledWhichMon::
# 249 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "So, who's the POKéMON that gets\n"
	.string "the chance to learn SOFTBOILED?$"

Text_SoftboiledTaught::
# 254 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I wish you the best of luck!$"

CeladonCity_Text_SomeoneStoleSilphScope::
# 258 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Oh, what am I to do…\p"
	.string "Someone stole our SILPH SCOPE.\p"
	.string "The thief came running this way,\n"
	.string "I'm sure of it.\p"
	.string "But I lost sight of him!\n"
	.string "Where'd he go?$"
