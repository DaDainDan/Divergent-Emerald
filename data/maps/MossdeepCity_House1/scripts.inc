MossdeepCity_House1_MapScripts::
	.byte 0


MossdeepCity_House1_EventScript_BlackBelt::
# 4 "data/maps/MossdeepCity_House1/scripts.pory"
	lock_faceplayer
# 5 "data/maps/MossdeepCity_House1/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 6 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
# 0 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MossdeepCity_House1_EventScript_BlackBelt_2
# 11 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_ItLikesXPokeblocks, MSGBOX_DEFAULT
	release_end

MossdeepCity_House1_EventScript_BlackBelt_2:
# 8 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks, MSGBOX_DEFAULT
	release_end


MossdeepCity_House1_EventScript_Woman::
# 16 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes, MSGBOX_NPC
	end


MossdeepCity_House1_Text_HmmYourPokemon::
# 20 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Hmm!\n"
	.string "Your {STR_VAR_1}…$"

MossdeepCity_House1_Text_ItLikesXPokeblocks::
# 25 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "It likes {STR_VAR_1}S,\n"
	.string "doesn't it?\p"
	.string "No, I'm positive of it! It definitely\n"
	.string "likes {STR_VAR_1}S!$"

MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks::
# 33 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "It doesn't appear to like or dislike\n"
	.string "any {POKEBLOCK}S.$"

MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes::
# 38 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "My husband can tell what kind of\n"
	.string "{POKEBLOCK}S a POKéMON likes at a glance.$"
