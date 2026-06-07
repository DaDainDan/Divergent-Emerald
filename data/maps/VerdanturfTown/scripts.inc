VerdanturfTown_MapScripts::
# 2 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VerdanturfTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 4 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
	end


VerdanturfTown_EventScript_Twin::
# 10 "data/maps/VerdanturfTown/scripts.pory"
	lock_faceplayer
# 11 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_Twin_2
# 14 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
VerdanturfTown_EventScript_Twin_1:
# 16 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 17 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
	release_end

VerdanturfTown_EventScript_Twin_2:
# 12 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
	goto VerdanturfTown_EventScript_Twin_1


VerdanturfTown_EventScript_Man::
# 22 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
	end


VerdanturfTown_EventScript_Camper::
# 27 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end


VerdanturfTown_EventScript_Boy::
# 32 "data/maps/VerdanturfTown/scripts.pory"
	lock_faceplayer
# 33 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_Boy_2
# 36 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
VerdanturfTown_EventScript_Boy_1:
	release_end

VerdanturfTown_EventScript_Boy_2:
# 34 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
	goto VerdanturfTown_EventScript_Boy_1


VerdanturfTown_EventScript_TownSign::
# 42 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end


VerdanturfTown_EventScript_WandasHouseSign::
# 47 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
	end


VerdanturfTown_EventScript_BattleTentSign::
# 52 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end


VerdanturfTown_EventScript_RusturfTunnelSign::
# 57 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end


VerdanturfTown_Text_ManTryingToDigTunnel::
# 61 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me.\p"
	.string "He says this tunnel is full of\n"
	.string "timid POKéMON.\p"
	.string "They get all scared of loud noise and\n"
	.string "make a big uproar.\p"
	.string "So they had to stop the big tunnel\n"
	.string "project.\p"
	.string "But there's one man. He's trying to dig\n"
	.string "the tunnel by himself!$"

VerdanturfTown_Text_ManDugTunnelForLove::
# 77 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
	.string "a lady he loved.\p"
	.string "I don't really get it, but hey!$"

VerdanturfTown_Text_AirCleanHere::
# 84 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
	.string "is never blown in this direction.\p"
	.string "The air is clean and delicious here.\n"
	.string "Living here should do wonders for even\l"
	.string "frail and sickly people.$"

VerdanturfTown_Text_MakeBattleTentDebut::
# 93 "data/maps/VerdanturfTown/scripts.pory"
	.string "My POKéMON and I, we've been riding\n"
	.string "a hot winning streak.\p"
	.string "So I decided to make my BATTLE TENT\n"
	.string "debut in this town.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave::
# 101 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
	.string "POKéMON MART?\p"
	.string "There's a guy in there who's trying to\n"
	.string "bust up boulders so he can bust out\l"
	.string "through to the other side.\p"
	.string "It'd be great if we could go through…\n"
	.string "It'll make it easy to visit RUSTBORO.$"

VerdanturfTown_Text_EasyToGetToRustboroNow::
# 113 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the POKéMON MART\n"
	.string "is now a tunnel to the other side.\p"
	.string "It's great--it's easy to go shop for\n"
	.string "new DEVON products in RUSTBORO now.$"

VerdanturfTown_Text_TownSign::
# 121 "data/maps/VerdanturfTown/scripts.pory"
	.string "VERDANTURF TOWN\p"
	.string "“The windswept highlands with the\n"
	.string "sweet fragrance of grass.”$"

VerdanturfTown_Text_WandasHouse::
# 128 "data/maps/VerdanturfTown/scripts.pory"
	.string "WANDA'S HOUSE$"

VerdanturfTown_Text_BattleTentSign::
# 132 "data/maps/VerdanturfTown/scripts.pory"
	.string "BATTLE TENT VERDANTURF SITE\n"
	.string "“Feast Your Eyes on Battles!”$"

VerdanturfTown_Text_RusturfTunnelSign::
# 137 "data/maps/VerdanturfTown/scripts.pory"
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and VERDANTURF\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"
