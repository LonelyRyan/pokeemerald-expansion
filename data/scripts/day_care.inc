.set LOCALID_DAYCARE_LADY, 1

Route117_EventScript_DaycareMan::
	lock
	faceplayer
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, Route117_EventScript_DaycareEggWaiting
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_EventScript_CheckOnOneMon
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, Route117_EventScript_CheckOnTwoMons
	msgbox Route117_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_DaycareEggWaiting::
	msgbox Route117_Text_DoYouWantEgg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_EventScript_DaycareAcceptEgg
	msgbox Route117_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_EventScript_DaycareAcceptEgg
	msgbox Route117_Text_IllKeepIt, MSGBOX_DEFAULT
	clearflag FLAG_PENDING_DAYCARE_EGG
	special RejectEggFromDayCare
	release
	end

Route117_EventScript_DaycareAcceptEgg::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_ne VAR_RESULT, PARTY_SIZE, Route117_EventScript_DaycareReceiveEgg
	msgbox Route117_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_DaycareReceiveEgg::
	message Route117_Text_ReceivedEgg
	playfanfare MUS_LEVEL_UP
	waitfanfare
	waitbuttonpress
	msgbox Route117_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
	special GiveEggFromDaycare
	clearflag FLAG_PENDING_DAYCARE_EGG
	release
	end

Route117_EventScript_CheckMonReceivedMail::
	specialvar VAR_RESULT, CheckDaycareMonReceivedMail
	call_if_eq VAR_RESULT, 1, Route117_EventScript_MonReceivedMail
	return

Route117_EventScript_MonReceivedMail::
	msgbox Route117_Text_FriendlyWithOtherTrainersMon, MSGBOX_DEFAULT
	return

Route117_EventScript_CheckOnOneMon::
	special GetDaycareMonNicknames
	msgbox Route117_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route117_EventScript_CheckMonReceivedMail
	release
	end

Route117_EventScript_CheckOnTwoMons::
	special GetDaycareMonNicknames
	msgbox Route117_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
	special SetDaycareCompatibilityString
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	setvar VAR_0x8004, 0
	call Route117_EventScript_CheckMonReceivedMail
	setvar VAR_0x8004, 1
	call Route117_EventScript_CheckMonReceivedMail
	release
	end

Route117_PokemonDayCare_EventScript_DaycareWoman::
	lock
	faceplayer
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, Route117_PokemonDayCare_EventScript_EggWaiting
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_PokemonDayCare_EventScript_OneMonInDaycare
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, Route117_PokemonDayCare_EventScript_TwoMonsInDaycare
	msgbox Route117_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_GiveMonToRaise
	msgbox Route117_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_GiveMonToRaise::
	specialvar VAR_RESULT, CountPartyNonEggMons
	goto_if_eq VAR_RESULT, 1, Route117_PokemonDayCare_EventScript_OnlyOneMon
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_eq VAR_RESULT, 2, Route117_PokemonDayCare_EventScript_OnlyTwoAliveMons
	msgbox Route117_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseSendDaycareMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route117_PokemonDayCare_EventScript_ComeAgain
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	goto_if_eq VAR_RESULT, 0, Route117_PokemonDayCare_EventScript_OnlyOneAliveMon
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
	waitse
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
	msgbox Route117_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
	waitmoncry
	special StoreSelectedPokemonInDaycare
	callnative UpdateFollowingPokemon
	incrementgamestat GAME_STAT_USED_DAYCARE
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_PokemonDayCare_EventScript_CanRaiseOneMore
	release
	end

Route117_PokemonDayCare_EventScript_ComeAgain::
	msgbox Route117_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_CanRaiseOneMore::
	msgbox Route117_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_GiveMonToRaise
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_OnlyOneMon::
	msgbox Route117_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_OnlyOneAliveMon::
	msgbox Route117_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_OnlyTwoAliveMons::
	msgbox Route117_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_EggWaiting::
	msgbox Route117_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_YourMonHasGrownXLevels::
	msgbox Route117_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
	return

Route117_PokemonDayCare_EventScript_DisplayLevelsGained::
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
	call_if_ne VAR_RESULT, 0, Route117_PokemonDayCare_EventScript_YourMonHasGrownXLevels
	return

Route117_PokemonDayCare_EventScript_OneMonInDaycare::
	msgbox Route117_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route117_PokemonDayCare_EventScript_DisplayLevelsGained
	msgbox Route117_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_GiveMonToRaise
	msgbox Route117_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_TryRetrieveMon
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_TryRetrieveMon::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_eq VAR_RESULT, PARTY_SIZE, Route117_PokemonDayCare_EventScript_NoRoom
	specialvar VAR_RESULT, GetDaycareState
	setvar VAR_0x8004, 0
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_PokemonDayCare_EventScript_CostPrompt
	special ShowDaycareLevelMenu
	waitstate
	copyvar VAR_0x8004, VAR_RESULT
	goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, Route117_PokemonDayCare_EventScript_ComeAgain
	goto Route117_PokemonDayCare_EventScript_CostPrompt
	end

Route117_PokemonDayCare_EventScript_CostPrompt::
	special GetDaycareCost
	msgbox Route117_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_CheckEnoughMoney
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_CheckEnoughMoney::
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
	goto_if_eq VAR_RESULT, 1, Route117_PokemonDayCare_EventScript_RetrieveMon
	msgbox Route117_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_RetrieveMon::
	applymovement LOCALID_DAYCARE_LADY, Route117_PokemonDayCare_Movement_RetrieveDaycareMon
	waitmovement 0
	specialvar VAR_RESULT, TakePokemonFromDaycare
	special SubtractMoneyFromVar0x8005
	playse SE_SHOP
	msgbox Route117_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
	waitse
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
	msgbox Route117_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
	waitmoncry
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_PokemonDayCare_EventScript_AskRetrieveOtherMon
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_AskRetrieveOtherMon::
	msgbox Route117_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_TryRetrieveMon
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_NoRoom::
	msgbox Route117_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_Movement_RetrieveDaycareMon:
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_up
	walk_slow_up
	set_invisible
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	set_visible
	walk_slow_down
	step_end

@ Unused. Possibly a commented script, or a typo end added to the above Movement script
Route117_PokemonDayCare_EventScript_UnusedEnd::  
    end

Route117_PokemonDayCare_EventScript_TwoMonsInDaycare::  
    msgbox Route117_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT  @ 显示消息："Ah, it's you! Good to see you. Your POKéMON can only be doing good!"
    setvar VAR_0x8004, 0  @ 设置变量为0
    call Route117_PokemonDayCare_EventScript_DisplayLevelsGained  @ 调用显示获得等级的脚本
    setvar VAR_0x8004, 1  @ 设置变量为1
    call Route117_PokemonDayCare_EventScript_DisplayLevelsGained  @ 再次调用显示获得等级的脚本
    msgbox Route117_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO  @ 显示是否取回宝可梦的消息
    goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_TryRetrieveMon  @ 如果选择"是"，跳转到尝试取回宝可梦的脚本
    msgbox Route117_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT  @ 显示消息："Come again."
    release  @ 释放
    end

@ Unused
Route117_PokemonDayCare_EventScript_UnusedRetrieveMon::  
    special ShowDaycareLevelMenu  @ 特殊功能：显示托儿所等级菜单
    waitstate  @ 等待状态
    goto_if_eq VAR_RESULT, 2, Route117_PokemonDayCare_EventScript_ComeAgain  @ 如果结果为2，跳转到再次尝试的脚本
    copyvar VAR_0x8004, VAR_RESULT  @ 将结果复制到变量
    specialvar VAR_RESULT, TakePokemonFromDaycare  @ 特殊功能：从托儿所取出宝可梦
    msgbox Route117_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT  @ 显示消息："Perfect! Here's your POKéMON."
    msgbox Route117_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT  @ 显示消息："Come again."
    release  @ 释放
    end

EventScript_EggHatch::  
    lockall  @ 锁定所有
    msgbox Text_EggHatchHuh, MSGBOX_DEFAULT  @ 显示消息："Huh?"
    special EggHatch  @ 特殊功能：宝可梦蛋孵化
    waitstate  @ 等待状态
    releaseall  @ 释放所有
    end

Route117_Text_SeeWifeIfYoudLikeMeToRaiseMon:
    .string "我是托儿所叔叔。\p"
    .string "我帮助照顾训练师珍贵的\n"
    .string "宝可梦。\p"
    .string "如果你想让我帮你养宝可梦，\n"
    .string "和我的妻子打个招呼。$"

Route117_Text_DoYouWantEgg:
    .string "啊，是你！\p"
    .string "我们正在帮你养宝可梦，\n"
    .string "我的天哪，我们有多惊讶！\p"
    .string "你的宝可梦生了一个蛋！\p"
    .string "我们不知道它是怎么来的，\n"
    .string "但你的宝可梦有它。\p"
    .string "你确实想要它，对吗？$"

Route117_Text_YourMonIsDoingFine:
    .string "啊，是你！很高兴见到你。\n"
    .string "你的{STR_VAR_1}过得很好。$"

Route117_Text_IllKeepIt:
    .string "好的，我会保管它。\n"
    .string "谢谢！$"

Route117_Text_YouHaveNoRoomForIt:
    .string "你没有空间放它…\n"
    .string "腾出空间后再回来。$"

Route117_Text_ReceivedEgg:
    .string "{PLAYER}从托儿所叔叔那里收到了蛋。$"

Route117_Text_TakeGoodCareOfIt:
    .string "好好照顾它。$"

Route117_Text_FriendlyWithOtherTrainersMon:
    .string "顺便说一下，关于你的{STR_VAR_1}，\n"
    .string "它似乎和{STR_VAR_2}的{STR_VAR_3}很亲近。\p"
    .string "我甚至可能看到它收到了\n"
    .string "一封邮件。$"

@ Unused
Route117_Text_SeeWifeIfYouWantToPickUpMon:
    .string "如果你想取回你的宝可梦，\n"
    .string "和我的妻子打个招呼。$"

Route117_Text_YourMonsAreDoingFine:
    .string "啊，是你！你的{STR_VAR_1}和\n"
    .string "{STR_VAR_2}都很好。$"

Route117_Text_IWillKeepDoYouWantIt:
    .string "我真的会保管它。\n"
    .string "你确实想要这个，对吗？$"

Route117_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
    .string "我是托儿所阿姨。\p"
    .string "我们可以帮你照看宝可梦。\p"
    .string "你想让我们照看一只吗？$"

Route117_PokemonDayCare_Text_WhichMonShouldWeRaise:
    .string "我们应该为你照看哪一只\n"
    .string "宝可梦？$"

Route117_PokemonDayCare_Text_WellRaiseYourMon:
    .string "好的，我们会照看你的{STR_VAR_1}\n"
    .string "一段时间。\p"
    .string "稍后再来取它。$"

Route117_PokemonDayCare_Text_WeCanRaiseOneMore:
    .string "我们可以照看两只你的宝可梦。\n"
    .string "你想让我们再照看一只吗？$"

Route117_PokemonDayCare_Text_HusbandWasLookingForYou:
    .string "我丈夫在找你。$"

Route117_PokemonDayCare_Text_FineThenComeAgain:
    .string "哦，好吧，那么。\n"
    .string "再来吧。$"

Route117_PokemonDayCare_Text_NotEnoughMoney:
    .string "你的钱不够…$"

Route117_PokemonDayCare_Text_TakeOtherOneBackToo:
    .string "你也要取回另一只吗，\n"
    .string "是吗？$"

Route117_PokemonDayCare_Text_ComeAgain:
    .string "好的。\n"
    .string "再来吧。$"

Route117_PokemonDayCare_Text_GoodToSeeYou:
    .string "啊，是你！很高兴见到你。\n"
    .string "你的宝可梦肯定过得很好！$"

Route117_PokemonDayCare_Text_YourMonHasGrownXLevels:
    .string "从等级上看，你的{STR_VAR_1}已经\n"
    .string "增长了{STR_VAR_2}级。$"

Route117_PokemonDayCare_Text_YourTeamIsFull:
    .string "你的宝可梦队伍已满。\n"
    .string "腾出空间后再来见我。$"

@ Unused
Route117_PokemonDayCare_Text_TakeBackWhichMon:
    .string "你想取回哪一只宝可梦？$"

Route117_PokemonDayCare_Text_ItWillCostX:
    .string "如果你想取回你的{STR_VAR_1}，\n"
    .string "那将花费¥{STR_VAR_2}。$"

Route117_PokemonDayCare_Text_HeresYourMon:
    .string "太好了！\n"
    .string "这是你的宝可梦。$"

Route117_PokemonDayCare_Text_TookBackMon:
    .string "{PLAYER}从托儿所阿姨那里取回了{STR_VAR_1}。$"

Route117_PokemonDayCare_Text_YouHaveJustOneMon:
    .string "哦？但你只有一只\n"
    .string "宝可梦。\p"
    .string "下次再来吧。$"

Route117_PokemonDayCare_Text_TakeYourMonBack:
    .string "你会取回你的宝可梦吗？$"

Route117_PokemonDayCare_Text_WhatWillYouBattleWith:
    .string "如果你把那只宝可梦留给我，\n"
    .string "你将用什么来战斗？\p"
    .string "下次再来吧。$"

Text_EggHatchHuh:
    .string "嗯？$"

Route117_PokemonDayCare_Text_YoullBeLeftWithJustOne:
    .string "嗯？\n"
    .string "现在，现在。\p"
    .string "如果你把那只宝可梦留在这里，\n"
    .string "你将只剩下一只。\p"
    .string "我敢说你最好还是抓一些\n"
    .string "更多的宝可梦吧。$"
