EventScript_StaticEncounter::
	lock
	playmoncry VAR_RESULT, 0
	msgbox EventScript_StaticEncounter_Text_0
	waitmoncry
	settotemboost 1, 1, 0, 1, 1, 0, 1
	setwildbattle VAR_RESULT, 50
	dowildbattle
	release
	end


EventScript_StaticEncounter_Text_0:
	.string "Gyoo!$"
