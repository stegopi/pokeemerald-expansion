HallowSpark_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HallowSpark_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

HallowSpark_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_VISITED_UPPER_ALPHA_PATHWAY, HallowSpark_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

HallowSpark_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	return


Common_Pokemon_Reluctant_Move_Aside::
	msgbox Common_Pokemon_Reluctant_Move_Aside_Text_0
	end


Common_Pokemon_Reluctant_Move_Aside_Text_0:
	.string "This Pokémon is reluctant to moving\n"
	.string "aside…$"
