Kasaan_MapScripts::
	.byte 0


Slide_Ice_Trees_Axes::
	lock
	msgbox Slide_Ice_Trees_Axes_Text_0
	release
	end


Logs_Tripping::
	lock
	msgbox Logs_Tripping_Text_0
	release
	end


Axes_Trees::
	lock
	msgbox Axes_Trees_Text_0
	release
	end


Sus_Mas_Tree::
	lock
	msgbox Sus_Mas_Tree_Text_0
	release
	end


Holey_Logs::
	lock
	msgbox Holey_Logs_Text_0
	release
	end


Kasaan_Playground_Sign::
	lock
	msgbox Kasaan_Playground_Sign_Text_0
	release
	end


Kasaan_Gym_Sign::
	lock
	msgbox Kasaan_Gym_Sign_Text_0
	release
	end


Playground_King::
	lock
	faceplayer
	msgbox Playground_King_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Playground_King_2
	msgbox Playground_King_Text_3
Playground_King_1:
	release
	end

Playground_King_2:
	msgbox Playground_King_Text_1
	giveitem ITEM_ORAN_BERRY
	msgbox Playground_King_Text_2
	goto Playground_King_1


Oofer::
	lock
	msgbox Oofer_Text_0
	release
	end


Yippee::
	lock
	msgbox Yippee_Text_0
	release
	end


Slide_Ice_Trees_Axes_Text_0:
	.string "Falling down always feels better when\n"
	.string "you land on the ice with a hatchet in\l"
	.string "your head.\p"
	.string "{COLOR RED}There seems to be bloodstains on the\n"
	.string "handles of the axes.$"

Logs_Tripping_Text_0:
	.string "Logs for kids to trip over. Credited for\n"
	.string "handing out concussions to more than\l"
	.string "69 children.$"

Axes_Trees_Text_0:
	.string "A fun and safe place for children to\n"
	.string "play!\p"
	.string "Huh?\n"
	.string "You're asking what that lump under the\l"
	.string "snow is? The one with a bit of red? I\l"
	.string "have absolutely NO idea what you are\l"
	.string "talking about.$"

Sus_Mas_Tree_Text_0:
	.string "This is the sus-mas tree. Every\n"
	.string "Thursday, we:\p"
	.string "- Kiss the tree\n"
	.string "- play Among Us under the tree\l"
	.string "- Praise the tree\l"
	.string "- Hug the tree\l"
	.string "- Don't chop the tree down\l"
	.string "- Don't light the tree on fire\p"
	.string "For more details, please visit\n"
	.string "theannoyingsite.com.$"

Holey_Logs_Text_0:
	.string "These are the Holey logs. That's\n"
	.string "because they have holes. Plus, they're\l"
	.string "holy. Every Tuesday, we:\p"
	.string "- Kiss the logs\n"
	.string "- Hug the logs\l"
	.string "- Add more logs when the children break\l"
	.string "them\l"
	.string "- Praise the logs\l"
	.string "- Thank the logs for everything, even if\l"
	.string "you are a bum\p"
	.string "For more details on activities, visit\n"
	.string "theannoyingsite.com.$"

Kasaan_Playground_Sign_Text_0:
	.string "The famous playground of Traf.$"

Kasaan_Gym_Sign_Text_0:
	.string "Gym$"

Playground_King_Text_0:
	.string "Playground King: Hey, yo, you wanna\n"
	.string "hear my rap? No? I don't care.\p"
	.string "Three...\p"
	.string "Two...\p"
	.string "One and:\p"
	.string "I got ice in my veins\n"
	.string "gonna run you over like a train\l"
	.string "Imma make you feel every milimeter of\l"
	.string "this pain!\p"
	.string "Gonna make you dive for cover\n"
	.string "(yeah!)\l"
	.string "Gonna slice through you like butter\l"
	.string "(uh huh)\l"
	.string "Gonna rip and hack and whack until your\l"
	.string "body's left in tatters!\l"
	.string "(girl!)\p"
	.string "Imma hunt you like a dog\l"
	.string "(slay!)\l"
	.string "Gonna fill your brain with fog\l"
	.string "(make him pay!)\l"
	.string "Gonna make you slither back to your\l"
	.string "rock like you're stuck in a goddamn bog\l"
	.string "(sheesh!)\p"
	.string "They say I'm really fat\l"
	.string "(how could they?)\l"
	.string "But that's a load of crap\l"
	.string "(that's right!)\l"
	.string "I can still beat you hack you slice you\l"
	.string "whack you just like that\l"
	.string "(you tell him!)\p"
	.string "I'm the Playground King, bitch\l"
	.string "(don't you know?)\l"
	.string "Gonna torture you, watch you twitch\l"
	.string "(make him squeal!)\l"
	.string "Gonna beat your fucking ass so hard\l"
	.string "you go home in stitches\l"
	.string "(hot damn!)\p"
	.string "That's right I'm cold-blooded\l"
	.string "(like the snow!)\l"
	.string "By the way you smell really fetid\l"
	.string "(oh the smell!)\l"
	.string "Don't walk away thinkin I'm just a kid\l"
	.string "cuz I am so much more\l"
	.string "(yeah!)\p"
	.string "Did you like my rap?$"

Playground_King_Text_1:
	.string "LETZZZ GOOOOOOO! You're a kul kid ya\n"
	.string "know?$"

Playground_King_Text_2:
	.string "Listen to my rap again for more!$"

Playground_King_Text_3:
	.string "FUCK YOU BITCH!$"

Oofer_Text_0:
	.string "Uhh. Oof.$"

Yippee_Text_0:
	.string "Yippee! ...\nThe guy up there? He's the playground king! He's really nice.$"
