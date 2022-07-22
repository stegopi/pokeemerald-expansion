Kasaan_Indoor_2_Small_House_MapScripts::
	.byte 0


Kasaan_Old_Man_With_GSlowpoke::
	lock
	faceplayer
	goto_if_unset FLAG_UNUSED_0x020, Kasaan_Old_Man_With_GSlowpoke_2
	msgbox Kasaan_Old_Man_With_GSlowpoke_Text_4
Kasaan_Old_Man_With_GSlowpoke_1:
	release
	end

Kasaan_Old_Man_With_GSlowpoke_2:
	showmonpic SPECIES_SLOWPOKE_GALARIAN, 10 3
	msgbox Kasaan_Old_Man_With_GSlowpoke_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Kasaan_Old_Man_With_GSlowpoke_5
	msgbox Kasaan_Old_Man_With_GSlowpoke_Text_3
	goto Kasaan_Old_Man_With_GSlowpoke_1

Kasaan_Old_Man_With_GSlowpoke_5:
	getpartysize
	compare VAR_RESULT, 6
	goto_if_lt Kasaan_Old_Man_With_GSlowpoke_8
	msgbox Kasaan_Old_Man_With_GSlowpoke_Text_2
	goto Kasaan_Old_Man_With_GSlowpoke_1

Kasaan_Old_Man_With_GSlowpoke_8:
	msgbox Kasaan_Old_Man_With_GSlowpoke_Text_1
	hidemonpic
	givemon SPECIES_SLOWPOKE_GALARIAN, 25, ITEM_KINGS_ROCK
	fadescreen 1
	fadescreen 0
	setflag FLAG_UNUSED_0x020
	goto Kasaan_Old_Man_With_GSlowpoke_1


Kasaan_OldLadywithLegend::
	lock
	faceplayer
	msgbox Kasaan_OldLadywithLegend_Text_0
	release
	end


Kasaan_Old_Man_With_GSlowpoke_Text_0:
	.string "My Galarian Slowpoke hasn't had a\n"
	.string "chance to meet fresh air for ages. Can\l"
	.string "you help me take it on journeys?$"

Kasaan_Old_Man_With_GSlowpoke_Text_1:
	.string "Thank you.$"

Kasaan_Old_Man_With_GSlowpoke_Text_2:
	.string "Come back without a full party.$"

Kasaan_Old_Man_With_GSlowpoke_Text_3:
	.string "Come back when you can help me.$"

Kasaan_Old_Man_With_GSlowpoke_Text_4:
	.string "Please take good care of my Slowpoke.$"

Kasaan_OldLadywithLegend_Text_0:
	.string "Have you noticed the IQ difference\n"
	.string "from here and other cities? Well the\l"
	.string "legend goes as so: Once a mad\l"
	.string "scientist used this weird pencil eraser\l"
	.string "and erased all the text from the books\l"
	.string "of the city. After many years, people\l"
	.string "became dumber and dumber. We came from\l"
	.string "another city with our books, and we\l"
	.string "tried to give the people them to read.\l"
	.string "They thought we were a load of rubbish\l"
	.string "and exiled us to this small house. Sigh.$"
