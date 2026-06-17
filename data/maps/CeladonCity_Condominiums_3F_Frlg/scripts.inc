CeladonCity_Condominiums_3F_Frlg_MapScripts::
	.byte 0


CeladonCity_Condominiums_3F_EventScript_Programmer::
# 4 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheProgrammer, MSGBOX_NPC
	end


CeladonCity_Condominiums_3F_EventScript_GraphicArtist::
# 9 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist, MSGBOX_NPC
	end


CeladonCity_Condominiums_3F_EventScript_Writer::
# 14 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_IWroteTheStory, MSGBOX_NPC
	end


CeladonCity_Condominiums_3F_EventScript_Designer::
# 19 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	lock_faceplayer
	specialvar VAR_RESULT, HasAllKantoMons
# 0 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CeladonCity_Condominiums_3F_EventScript_Designer_2
# 27 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex
	release_end

CeladonCity_Condominiums_3F_EventScript_Designer_2:
# 21 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	message CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations
# 22 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	waitmessage
# 23 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	delay 60
# 24 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	special Special_ShowDiploma
	release_end


CeladonCity_Condominiums_3F_EventScript_DevelopmentRoomSign::
# 32 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_EventScript_Computer1::
# 37 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsTheGameProgram, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_EventScript_Computer2::
# 42 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_EventScript_Computer3::
# 47 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_Text_ImTheProgrammer::
# 51 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Me?\n"
	.string "I'm the programmer!$"

CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist::
# 56 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I'm the graphic artist!\n"
	.string "I drew you!$"

CeladonCity_Condominiums_3F_Text_IWroteTheStory::
# 61 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I wrote the story!\n"
	.string "Isn't ERIKA cute?\p"
	.string "I like MISTY a lot, too!\n"
	.string "Oh, and SABRINA, I like her!$"

CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex::
# 69 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Is that right?\p"
	.string "I'm the game designer!\p"
	.string "Filling up your POKéDEX is tough,\n"
	.string "but don't quit!\p"
	.string "When you finish, come tell me!$"

CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations::
# 80 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Wow! Excellent!\n"
	.string "You completed your POKéDEX!\l"
	.string "Congratulations!\l"
	.string "…$"

CeladonCity_Condominiums_3F_Text_ItsTheGameProgram::
# 87 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "It's the game program! Messing with\n"
	.string "it could bug out the game!$"

CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame::
# 92 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Someone's playing a game instead of\n"
	.string "working!$"

CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding::
# 97 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "It's the script!\n"
	.string "Better not look at the ending!$"

CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom::
# 102 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "GAME FREAK Development Room$"
