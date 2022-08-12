EventScript_StegoTriggerNtA::
	msgbox EventScript_StegoTriggerNtA_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_StegoTriggerNtA_2
EventScript_StegoTriggerNtA_1:
	release
	end

EventScript_StegoTriggerNtA_2:
	msgbox EventScript_StegoTriggerNtA_Text_1
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	fadescreen 1
	warpsilent MAP_KASAAN_UNUSED_STORAGE_2, VAR_TEMP_1, VAR_TEMP_2
	fadescreen 0
	goto EventScript_StegoTriggerNtA_1


EventScript_StegoTriggerAtN::
	msgbox EventScript_StegoTriggerAtN_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_StegoTriggerAtN_2
EventScript_StegoTriggerAtN_1:
	release
	end

EventScript_StegoTriggerAtN_2:
	msgbox EventScript_StegoTriggerNtA_Text_1
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	fadescreen 1
	warpsilent MAP_KASAAN_SPEAKEASY_STORAGE, VAR_TEMP_1, VAR_TEMP_2
	fadescreen 0
	goto EventScript_StegoTriggerAtN_1


EventScript_StegoTriggerNtA_Text_0:
	.string ".... It's a switch! It says DANGER\n"
	.string "written in mysterious red ink. Press it?$"

EventScript_StegoTriggerNtA_Text_1:
	.string "Who wouldn't?$"

EventScript_StegoTriggerAtN_Text_0:
	.string "... It's a switch. Looks like you already\n"
	.string "pressed it! Press it again?$"
