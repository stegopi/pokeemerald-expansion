EventScript_UseLavaSurf::
	checkpartymove MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseLavaSurf
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseLavaSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseLavaSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseLavaSurf::
	releaseall
EventScript_EndUseLavaSurf::
	end
