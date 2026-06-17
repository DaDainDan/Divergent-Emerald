MtEmber_RubyPath_B3F_Frlg_MapScripts::
	.byte 0


MtEmber_RubyPath_B5F_EventScript_Ruby::
# 5 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	lock_faceplayer
# 6 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	setflag FLAG_GOT_RUBY
# 7 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	removeobject LOCALID_RUBY
# 8 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	giveitem_msg MtEmber_RubyPath_B3F_Text_FoundARuby, ITEM_RUBY, 1, MUS_RG_OBTAIN_KEY_ITEM
	release_end


MtEmber_RubyPath_B3F_Text_FoundARuby::
# 12 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	.string "{PLAYER} found a RUBY!$"
