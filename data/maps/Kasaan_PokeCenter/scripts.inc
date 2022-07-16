Kasaan_PokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Kasaan_PokeCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Kasaan_PokeCenter_OnTransition:
	setrespawn HEAL_LOCATION_KASAAN
	call Common_EventScript_UpdateBrineyLocation
	end

Kasaan_PokeCenter_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Kasaan_Blocked_Escalator::
	lock
	msgbox Kasaan_Blocked_Escalator_Text_0
	release
	end


Kasaan_Blocked_Escalator_Text_0:
	.string "The escalator is out of order. Looks\n"
	.string "like the top is jammed.$"
