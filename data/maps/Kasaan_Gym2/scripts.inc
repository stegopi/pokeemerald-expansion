Kasaan_Gym2_MapScripts::
	.byte 0

KasaanGymYoungster::
	goto_if_unset 0x021, KasaanGymYoungster_1
	msgbox KasaanGymYoungsterClose, MSGBOX_AUTOCLOSE
	return

KasaanGymYoungster_1:
	trainerbattle_single TRAINER_SAWYER_1, KasaanGymYoungster_Text_0, KasaanGymYoungster_Text_1
	setflag 0x021
	msgbox KasaanGymYoungsterClose, MSGBOX_AUTOCLOSE
	return


KasaanGymYoungster_Text_0:
	.string "Shorts are extremely easy to wear, and\n"
	.string "they fit this weather perfectly! How\l"
	.string "come you're not wearing them?$"

KasaanGymYoungster_Text_1:
	.string "Brrr.$"

KasaanGymYoungsterClose::
	.string "It's cold? I dunno what you mean!$"
