Kasaan_Indoor_2_Small_House_MapScripts::
	.byte 0


Old_Man_With_GSlowpoke::
	lock
	faceplayer
	goto_if_unset FLAG_UNUSED_0x020, Old_Man_With_GSlowpoke_2
	msgbox Old_Man_With_GSlowpoke_Text_4
Old_Man_With_GSlowpoke_1:
	release
	end

Old_Man_With_GSlowpoke_2:
	getpartysize
	compare VAR_RESULT, 6
	goto_if_lt Old_Man_With_GSlowpoke_5
	msgbox Old_Man_With_GSlowpoke_Text_3
	goto Old_Man_With_GSlowpoke_1

Old_Man_With_GSlowpoke_5:
	msgbox Old_Man_With_GSlowpoke_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Old_Man_With_GSlowpoke_8
	msgbox Old_Man_With_GSlowpoke_Text_2
	goto Old_Man_With_GSlowpoke_1

Old_Man_With_GSlowpoke_8:
	showmonpic SPECIES_SLOWPOKE_GALARIAN, 10 3
	msgbox Old_Man_With_GSlowpoke_Text_1
	setvar 0x8003, 1
	hidemonpic
	givemon SPECIES_SLOWPOKE_GALARIAN, 25, ITEM_KINGS_ROCK
	fadescreen 1
	fadescreen 0
	setflag FLAG_UNUSED_0x020
	goto Old_Man_With_GSlowpoke_1


OldLadywithLegend::
	lock
	faceplayer
	msgbox OldLadywithLegend_Text_0
	release
	end


Old_Man_With_GSlowpoke_Text_0:
	.string "You see, I have a bit of a problem. Are\n"
	.string "you willing to help me?$"

Old_Man_With_GSlowpoke_Text_1:
	.string "Thank you. See, I have this Galarian\n"
	.string "Slowpoke that's been with me for years\l"
	.string "and years. I've grown in this corrupt\l"
	.string "city just as long. But nowadays, my\l"
	.string "Slowpoke can't get fresh air. I'll give\l"
	.string "it to you, and you'll take it along with\l"
	.string "your journeys.$"

Old_Man_With_GSlowpoke_Text_2:
	.string "Come back whenever you want.$"

Old_Man_With_GSlowpoke_Text_3:
	.string "Come back without a full party.$"

Old_Man_With_GSlowpoke_Text_4:
	.string "I trust that you will take good care of\n"
	.string "my Slowpoke.$"

OldLadywithLegend_Text_0:
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
