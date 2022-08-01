Kasaan_Gym3_MapScripts::
	.byte 0


KasaanGymKhione::
	lock
	faceplayer
	checktrainerflag TRAINER_BRAWLY_2
	compare VAR_RESULT, FALSE
	goto_if_eq KasaanGymKhione_2
KasaanGymKhione_1:
	trainerbattle_double TRAINER_BRAWLY_2, Kasaan_Gym3_KhioneIntro, KasaanGymKhione_Text_1, KasaanGymKhione_Text_2, Kasaan_Gym3_KhioneDefeated
	goto_if_unset FLAG_RECEIVED_TM13, KasaanGymKhione_5
KasaanGymKhione_4:
	msgbox KasaanGymKhione_Text_3
	release
	end

KasaanGymKhione_2:
	msgbox KasaanGymKhione_Text_0
	setweather WEATHER_SNOW
	doweather
	settotemboost 1, 1, 0, 0, 0, 1
	goto KasaanGymKhione_1

KasaanGymKhione_5:
	goto KasaanGymGiveTM
	goto KasaanGymKhione_4


Kasaan_Gym3_KhioneDefeated::
	message Kasaan_Gym3_KhioneDefeated_Text_0
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox Kasaan_Gym3_KhioneDefeated_Text_1
	setflag FLAG_BADGE02_GET
	goto KasaanGymGiveTM
	release
	end


KasaanGymGiveTM::
	setweather WEATHER_NONE
	doweather
	giveitem ITEM_TM13_ICE_BEAM
	compare VAR_RESULT, FALSE
	goto_if_eq KasaanGymGiveTM_2
KasaanGymGiveTM_1:
	setflag FLAG_RECEIVED_TM13
	msgbox KasaanGymGiveTM_Text_0
	release
	end

KasaanGymGiveTM_2:
	goto Common_EventScript_ShowBagIsFull
	goto KasaanGymGiveTM_1


KasaanGymKhione_Text_0:
	.string "Khione: Hello weirdo, I'm Khione, the gym\n"
	.string "leader of this town, and the\l"
	.string "ex-playground queen. they ousted me\l"
	.string "be cause they were jealous of my\l"
	.string "AMAZING, DISNEY PRINCESS, ELSA\l"
	.string "POWERS... I SAID, MY AMAZING, DISNEY\l"
	.string "PRINCESS, ELSA POWERS! (In the faint\l"
	.string "background, you hear the sounds of a\l"
	.string "snow machine being turned on. It\l"
	.string "started to hail!)$"

KasaanGymKhione_Text_1:
	.string "Screw You! Er, I mean Congrats! My Elsa\n"
	.string "Snow Powers couldn't do the trick?!$"

KasaanGymKhione_Text_2:
	.string "YOU FREAKING IDIOT! I CAN'T FREAKING\n"
	.string "BATTLE YOU WHEN YOU ONLY HAVE ONE\l"
	.string "POKEMON! I ALWAYS KNEW HELICONIA\l"
	.string "WASN'T FIT FOR THE JOB!$"

KasaanGymKhione_Text_3:
	.string "I'm training for revenge... WATCH YOUR\n"
	.string "BACK, SLEEP WITH ONE EYE OPEN. BECAUSE\l"
	.string "KHIONE'S COMING FOR YOU GLUBBO, AND\l"
	.string "THIS TIME WITH VENGEANCE!$"

Kasaan_Gym3_KhioneDefeated_Text_0:
	.string "{PLAYER} received the SNOWFLAKE\n"
	.string "BADGE from Khione.$"

Kasaan_Gym3_KhioneDefeated_Text_1:
	.string "The Snowflake Badge enables the owner\n"
	.string "to use the HM move () outside of battle.\l"
	.string "Please take this with you, too.$"

KasaanGymGiveTM_Text_0:
	.string "Ice Beam is an extremely versatile move\n"
	.string "that can be used multiple times. Plus,\l"
	.string "it helps heighten my Elsa mystique.\l"
	.string "Huh? What do you mean, how I have an\l"
	.string "infinite amount of TMs to give to\l"
	.string "trainers? Dunno what you're talking\l"
	.string "about!$"

Kasaan_Gym3_KhioneIntro::
	.string "PREPARE TO MEET THY DOOM!!!!!$"
