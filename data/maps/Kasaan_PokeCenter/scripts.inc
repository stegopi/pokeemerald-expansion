.set LOCALID_NURSE, 1
Kasaan_PokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Kasaan_PokeCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Kasaan_PokeCenter_OnTransition:
	setrespawn HEAL_LOCATION_KASAAN
	end

Kasaan_PokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Kasaan_Center_Blocked_Escalator::
	lock
	msgbox Kasaan_Center_Blocked_Escalator_Text_0
	release
	end


Kasaan_Center_Blocked_Escalator_Text_0:
	.string "The escalator seems to be running the\n"
	.string "wrong way. Bloodstains mark the\l"
	.string "attempts of past people attempting to\l"
	.string "go up. (How can a one-lane escalator go\l"
	.string "both up and down?)$"
