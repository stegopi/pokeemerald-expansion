EventScript_StaticEncounter::
	lock
	playmoncry VAR_RESULT, 0
	msgbox EventScript_StaticEncounter_Text_0
	waitmoncry
	settotemboost 0, 0, 0, 0, 1, 0, 1
	setwildbattle VAR_RESULT, 40
	dowildbattle
	release
	end


EventScript_StaticEncounter_Text_0:
	.string "Gyoo!$"
