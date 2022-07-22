Kasaan_Gym2_MapScripts::
	.byte 0

KasaanGymYoungster::
	trainerbattle_single TRAINER_SAWYER_1, KasaanGymYoungster_Text_0, KasaanGymYoungster_Text_1
	msgbox KasaanGymYoungster_Text_2, MSGBOX_AUTOCLOSE
	end


KasaanGymSchoolKid::
	trainerbattle_single TRAINER_GABRIELLE_1, KasaanGymSchoolKid_Text_0, KasaanGymSchoolKid_Text_1
	msgbox KasaanGymSchoolKid_Text_2, MSGBOX_AUTOCLOSE
	end


KasaanGymYoungster_Text_0:
	.string "Shorts are extremely easy to wear, and\n"
	.string "they fit this weather perfectly! How\l"
	.string "come you're not wearing them?$"

KasaanGymYoungster_Text_1:
	.string "Brrr.$"

KasaanGymYoungster_Text_2:
	.string "It's cold? I dunno what you mean!$"

KasaanGymSchoolKid_Text_0:
	.string "You dare... AVADA KEDAVRA!$"

KasaanGymSchoolKid_Text_1:
	.string "Mistakes!$"

KasaanGymSchoolKid_Text_2:
	.string "For now I'll settle for my old strength\n"
	.string "before chasing invincibility.$"
