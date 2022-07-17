Kasaan_Indoor_1_Small_House_MapScripts::
	.byte 0


Kasaan_SmallHouseWindow::
	lock
	msgbox Kasaan_SmallHouseWindow_Text_0
	release
	end


SmallHouseOwner_Husband::
	lock
	faceplayer
	msgbox SmallHouseOwner_Husband_Text_0
	release
	end


SmallHouseOwner_Wife::
	lock
	faceplayer
	msgbox SmallHouseOwner_Wife_Text_0
	release
	end


Kasaan_SmallHouseWindow_Text_0:
	.string "You look out the window... The\n"
	.string "playground is a fiasco. You see what\l"
	.string "seems like blood flowing, children\l"
	.string "shouting, their sadistic giggles, and\l"
	.string "axes being wielded.$"

SmallHouseOwner_Husband_Text_0:
	.string "Living in Kasaan is a quiet and normal\n"
	.string "life. Huh? You're wondering about the\l"
	.string "kids and the axes? That's completely\l"
	.string "normal. At least my son says so.$"

SmallHouseOwner_Wife_Text_0:
	.string "It doesn't seem strange, does it? Our\n"
	.string "son hasn't come back from the\l"
	.string "playground for days. Of course, when\l"
	.string "they don't come back, we just get more.\l"
	.string "Sigh$"
