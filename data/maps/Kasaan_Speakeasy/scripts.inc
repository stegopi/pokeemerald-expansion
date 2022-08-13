Kasaan_Speakeasy_MapScripts::
	.byte 0


Kasaan_Bartender::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 5
	goto_if_eq Kasaan_Bartender_2
	msgbox Kasaan_Bartender_Text_2
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	fadescreen 1
	warpsilent MAP_KASAAN, 12, 19
	fadescreen 0
	msgbox Kasaan_Bartender_Text_3
Kasaan_Bartender_1:
	release
	end

Kasaan_Bartender_2:
	message Kasaan_Bartender_Text_0
	waitmessage
	call MartsDiffer
	msgbox Kasaan_Bartender_Text_1
	goto Kasaan_Bartender_1


MartsDiffer::
	compare VAR_TEMP_0, 9
	goto_if_eq MartsDiffer_1
	compare VAR_TEMP_0, 7
	goto_if_eq MartsDiffer_2
	return

MartsDiffer_1:
	pokemart Kasaan_Limited_Menu_Drinks
	return

MartsDiffer_2:
	pokemart Kasaan_Limited_Menu_Food
	return


	.align 2
Kasaan_Limited_Menu_Drinks:
	.2byte ITEM_LEMONADE
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

	.align 2
Kasaan_Limited_Menu_Food:
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_RAGE_CANDY_BAR
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_OLD_GATEAU
	.2byte ITEM_CASTELIACONE
	.2byte ITEM_LUMIOSE_GALETTE
	.2byte ITEM_SHALOUR_SABLE
	.2byte ITEM_BIG_MALASADA
	.2byte ITEM_NONE

Kasaan_Bartender_Text_0:
	.string "Bro, you're over-age. No alcohol for you\n"
	.string "GLUBBO.$"

Kasaan_Bartender_Text_1:
	.string "Kasaan Law states that those who drink\n"
	.string "alcohol when past age are sentenced to\l"
	.string "69 years of prison.$"

Kasaan_Bartender_Text_2:
	.string "What - How did you get here? How dare\n"
	.string "you invade my privacy!$"

Kasaan_Bartender_Text_3:
	.string "A red mark seems to have appeared on\n"
	.string "your buttocks. Shouldn't try that\l"
	.string "again!$"
