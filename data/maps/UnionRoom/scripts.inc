UnionRoom_MapScripts::
# 2 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, UnionRoom_MapScripts_MAP_SCRIPT_ON_RESUME
# 22 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnionRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

UnionRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
# 4 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
# 5 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
# 6 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
# 7 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
# 8 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
# 9 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
# 10 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
# 11 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_1
# 12 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_2
# 13 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_3
# 14 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_4
# 15 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_5
# 16 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_6
# 17 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_7
# 18 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_8
# 19 "data/maps/UnionRoom/scripts.pory"
	special RunUnionRoom
	end

UnionRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	end


UnionRoom_EventScript_Player1::
# 29 "data/maps/UnionRoom/scripts.pory"
	lock_faceplayer
# 30 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_1
# 31 "data/maps/UnionRoom/scripts.pory"
	waitstate
	release_end


UnionRoom_EventScript_Player2::
# 36 "data/maps/UnionRoom/scripts.pory"
	lock_faceplayer
# 37 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_2
# 38 "data/maps/UnionRoom/scripts.pory"
	waitstate
	release_end


UnionRoom_EventScript_Player3::
# 43 "data/maps/UnionRoom/scripts.pory"
	lock_faceplayer
# 44 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_3
# 45 "data/maps/UnionRoom/scripts.pory"
	waitstate
	release_end


UnionRoom_EventScript_Player4::
# 50 "data/maps/UnionRoom/scripts.pory"
	lock_faceplayer
# 51 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_4
# 52 "data/maps/UnionRoom/scripts.pory"
	waitstate
	release_end


UnionRoom_EventScript_Player5::
# 57 "data/maps/UnionRoom/scripts.pory"
	lock_faceplayer
# 58 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_5
# 59 "data/maps/UnionRoom/scripts.pory"
	waitstate
	release_end


UnionRoom_EventScript_Player6::
# 64 "data/maps/UnionRoom/scripts.pory"
	lock_faceplayer
# 65 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_6
# 66 "data/maps/UnionRoom/scripts.pory"
	waitstate
	release_end


UnionRoom_EventScript_Player7::
# 71 "data/maps/UnionRoom/scripts.pory"
	lock_faceplayer
# 72 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_7
# 73 "data/maps/UnionRoom/scripts.pory"
	waitstate
	release_end


UnionRoom_EventScript_Player8::
# 78 "data/maps/UnionRoom/scripts.pory"
	lock_faceplayer
# 79 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_8
# 80 "data/maps/UnionRoom/scripts.pory"
	waitstate
	release_end


UnionRoom_EventScript_Attendant::
# 85 "data/maps/UnionRoom/scripts.pory"
	lock_faceplayer
# 86 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_ATTENDANT
# 87 "data/maps/UnionRoom/scripts.pory"
	waitstate
	release_end


UnionRoom_EventScript_Unused::
# 92 "data/maps/UnionRoom/scripts.pory"
	lockall
# 93 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_UNUSED
# 94 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 95 "data/maps/UnionRoom/scripts.pory"
	releaseall
	end

