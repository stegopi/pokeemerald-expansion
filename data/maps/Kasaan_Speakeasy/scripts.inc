Kasaan_Speakeasy_MapScripts::
	.byte 0


Kasaan_Bartender::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 5
	goto_if_eq Kasaan_Bartender_2
	faceplayer
	msgbox Kasaan_Bartender_Text_2
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	setflag FLAG_REMOVE_WARP_FADE
	fadescreen 1
	msgbox Kasaan_Bartender_Text_3
	warpsilent MAP_KASAAN, 12, 19
	fadescreen 0
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

Kasaan_PianoMan::
	locktarget
	faceplayer
	msgbox Kasaan_PianoMan_Text_0
	applymovement 3, Kasaan_LookLeftExclaim
	waitmovement 0
	msgbox Kasaan_PianoMan_Text_1
	msgbox Kasaan_PianoMan_Text_2
	applymovement 3, Kasaan_Speakeasy_LookRight
	waitmovement 0
	applymovement 21, Kasaan_Speakeasy_LookUp
	waitmovement 0
	release
	end


Kasaan_PianoManBosser::
	locktarget
	msgbox Kasaan_PianoManBosser_Text_0
	faceplayer
	applymovement 3, Kasaan_Speakeasy_Exclaim
	waitmovement 0
	msgbox Kasaan_PianoManBosser_Text_1
	applymovement 3, Kasaan_Speakeasy_LookRight
	waitmovement 0
	msgbox Kasaan_PianoManBosser_Text_2
	release
	end


Kasaan_Speakeasy_Test_Fonts::
	msgbox Kasaan_Speakeasy_Test_Fonts_Text_0
	scrollingmultichoice 0, 2, 2, 5, TRUE
	compare VAR_RESULT, 0
	goto_if_eq Kasaan_Speakeasy_Test_Fonts_2
Kasaan_Speakeasy_Test_Fonts_1:
	compare VAR_RESULT, 1
	goto_if_eq Kasaan_Speakeasy_Test_Fonts_5
Kasaan_Speakeasy_Test_Fonts_4:
	compare VAR_RESULT, 0x7F
	goto_if_eq Kasaan_Speakeasy_Test_Fonts_8
Kasaan_Speakeasy_Test_Fonts_7:
	release
	end

Kasaan_Speakeasy_Test_Fonts_2:
	msgbox Kasaan_Speakeasy_Test_Fonts_Text_1
	goto Kasaan_Speakeasy_Test_Fonts_1

Kasaan_Speakeasy_Test_Fonts_5:
	msgbox Kasaan_Speakeasy_Test_Fonts_Text_2
	goto Kasaan_Speakeasy_Test_Fonts_4

Kasaan_Speakeasy_Test_Fonts_8:
	msgbox Kasaan_Speakeasy_Test_Fonts_Text_3
	goto Kasaan_Speakeasy_Test_Fonts_7


Kasaan_LookLeftExclaim:
	emote_exclamation_mark
	face_left
	step_end

Kasaan_Speakeasy_Exclaim:
	emote_exclamation_mark
	step_end

Kasaan_Speakeasy_LookRight:
	face_right
	step_end

Kasaan_Speakeasy_MoveLeft:
	walk_left
	step_end

Kasaan_Speakeasy_LookUp:
	face_up
	step_end

Kasaan_Bartender_Text_0:
	.string "Bro, you're over-age. No alcohol for you\n"
	.string "GLUBBO.$"

Kasaan_Bartender_Text_1:
	.string "Kasaan Law states that those who drink\n"
	.string "alcohol when past age are sentenced to\l"
	.string "69 years of prison.$"

Kasaan_Bartender_Text_2:
	.string "How did you get here?!$"

Kasaan_Bartender_Text_3:
	.string "A red mark seems to have appeared on\n"
	.string "your buttocks. Shouldn't try that\l"
	.string "again!$"

Kasaan_PianoMan_Text_0:
	.string "(Pauses playing) What do you want now?!\n"
	.string "I was captured by this Playground King\l"
	.string "guy and was forced to do this fuck. Oh,\l"
	.string "it's not that kid over there who always\l"
	.string "screams at me.$"

Kasaan_PianoMan_Text_1:
	.string "Kid: GET ON WITH IT, WE'RE ALL WAITING!$"

Kasaan_PianoMan_Text_2:
	.string "Piano Man: (Continues playing with a\n"
	.string "fearful expression as the kid draws\l"
	.string "out a whip)$"

Kasaan_PianoManBosser_Text_0:
	.string "(Muttering Indistinctly): I swear that\n"
	.string "piano man, if he makes another crack, I\l"
	.string "will...$"

Kasaan_PianoManBosser_Text_1:
	.string "OVERAGES TALKING TO ME!? You filthy\n"
	.string "little - (face screws up in\l"
	.string "concentration as he sizes you for a\l"
	.string "fight, but decides against it.)$"

Kasaan_PianoManBosser_Text_2:
	.string "(Muttering Indistinctly): First these\n"
	.string "inconsistent piano men, then pesky\l"
	.string "overages. Maybe I should have a word\l"
	.string "with the bartender.$"

Kasaan_Speakeasy_Test_Fonts_Text_0:
	.string "{COLOR_HIGHLIGHT_SHADOW LIGHT_BLUE WHITE GREEN} HIhfluidhuihdf {COLOR RED} Ssafsad$"

Kasaan_Speakeasy_Test_Fonts_Text_1:
	.string "1$"

Kasaan_Speakeasy_Test_Fonts_Text_2:
	.string "2$"

Kasaan_Speakeasy_Test_Fonts_Text_3:
	.string "I Wuv Dwugs$"

Kasaan_Speakeasy_Tests_MC2::
	.string "Fcku$"
	.string "Shtu$"
	.string "Daddy hoiya$"
	.string "$"
