SaffronCity_CopycatsHouse_1F_Frlg_MapScripts::
	.byte 0


SaffronCity_CopycatsHouse_1F_EventScript_CopycatsMom::
# 4 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered, MSGBOX_NPC
	end


SaffronCity_CopycatsHouse_1F_EventScript_CopycatsDad::
# 9 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople, MSGBOX_NPC
	end


SaffronCity_CopycatsHouse_1F_EventScript_Chansey::
# 14 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	waitse
# 16 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 17 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_Chansey
# 18 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	waitmoncry
	release_end


SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered::
# 22 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "My daughter is so self-centered.\n"
	.string "She has but a few friends.$"

SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople::
# 27 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "My daughter likes to mimic people.\n"
	.string "It's rather vexing.\p"
	.string "Her mimicry has earned her the\n"
	.string "nickname COPYCAT around here.$"

SaffronCity_CopycatsHouse_1F_Text_Chansey::
# 35 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "CHANSEY: Chaan! Sii!$"
