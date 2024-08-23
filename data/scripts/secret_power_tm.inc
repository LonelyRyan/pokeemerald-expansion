Route111_Text_MakingRoomUseTMToMakeYourOwn:
    .string "那是什么？\n"
    .string "我在做什么？\p"
    .string "我在考虑用宝可梦的招式\n"
    .string "在这里创造自己的基地。\p"
    .string "我知道了！我给你这个技能机。\n"
    .string "你会用它来创造自己的基地吗？$"

Route111_Text_ExplainSecretPower:
    .string "寻找一棵看起来可能会\n"
    .string "垂下藤蔓的大树木。\p"
    .string "在树前使用“秘密力量”。\n"
    .string "一些藤蔓应该会松动并垂落\l"
    .string "下来，这样你就可以爬上树了。\p"
    .string "你会发现很多空间可以放置\n"
    .string "你喜爱的东西。\p"
    .string "它将成为你自己的秘密房间…\n"
    .string "一个“秘密基地”！\p"
    .string "你也来做一个吧。\p"
    .string "另外，你并不总是需要在树上\n"
    .string "建造你的“秘密基地”。\p"
    .string "试着在有小凹槽的岩壁上使用\n"
    .string "“秘密力量”。\p"
    .string "我也要去找找其他地方。\n"
    .string "好的，再见！$"

Route111_Text_DontWantThis:
    .string "哦，你不想要这个吗？\n"
    .string "如果你改变主意，告诉我，好吗？$"

Route111_Text_DontHaveAnyRoom:
    .string "哦，你没有地方放这个。\p"
    .string "我会帮你保管，所以下次再来拿，好吗？$"

Route111_EventScript_SecretPowerMan::
	lock
	faceplayer
	msgbox Route111_Text_MakingRoomUseTMToMakeYourOwn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_GiveSecretPower
	msgbox Route111_Text_DontWantThis, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_GiveSecretPower::
	giveitem ITEM_TM_SECRET_POWER
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_NoRoomForSecretPower
	msgbox Route111_Text_ExplainSecretPower, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RECEIVED_SECRET_POWER
	clearflag FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN
	call_if_eq VAR_FACING, DIR_WEST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_EAST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_NORTH, Route111_EventScript_SecretPowerManExitNorth
	removeobject VAR_LAST_TALKED
	release
	end

Route111_EventScript_SecretPowerManExit::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExit
	waitmovement 0
	return

Route111_EventScript_SecretPowerManExitNorth::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExitNorth
	waitmovement 0
	return

Route111_EventScript_NoRoomForSecretPower::
	msgbox Route111_Text_DontHaveAnyRoom, MSGBOX_DEFAULT
	release
	end

Route111_Movement_SecretPowerManExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

Route111_Movement_SecretPowerManExitNorth:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
