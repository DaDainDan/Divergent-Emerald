TrainerTower_4F_Frlg_MapScripts::
# 2 "data/maps/TrainerTower_4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_OnResume
# 3 "data/maps/TrainerTower_4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerTower_OnTransition
# 4 "data/maps/TrainerTower_4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_OnFrame
	.byte 0


TrainerTower_4F_EventScript_DoublesTrainer1::
# 10 "data/maps/TrainerTower_4F_Frlg/scripts.pory"
	call TrainerTower_EventScript_SpeakToDoublesTrainer1
	end


TrainerTower_4F_EventScript_SinglesTrainer::
# 15 "data/maps/TrainerTower_4F_Frlg/scripts.pory"
	call TrainerTower_EventScript_SpeakToSinglesTrainer
	end


TrainerTower_4F_EventScript_KnockoutTrainer::
# 20 "data/maps/TrainerTower_4F_Frlg/scripts.pory"
	call TrainerTower_EventScript_SpeakToKnockoutTrainer
	end


TrainerTower_4F_EventScript_DoublesTrainer2::
# 25 "data/maps/TrainerTower_4F_Frlg/scripts.pory"
	call TrainerTower_EventScript_SpeakToDoublesTrainer2
	end


TrainerTower_4F_EventScript_Owner::
# 30 "data/maps/TrainerTower_4F_Frlg/scripts.pory"
	call TrainerTower_EventScript_SpeakToOwner
	end

