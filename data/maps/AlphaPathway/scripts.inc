AlphaPathway_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlphaPathway_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AlphaPathway_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_TEMP_0, 0
	return


AlphaPathway_SetVisit::
	setflag FLAG_VISITED_UPPER_ALPHA_PATHWAY
	end

