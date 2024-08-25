Roulette_EventScript_Table1::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 0
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Table2::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 1
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Play::
	special PlayRoulette
	waitstate
	end

Roulette_Text_PlayMinimumWagerIsX::
    .string "这张桌子的最低下注额是{STR_VAR_1}。你想玩吗？$"

Roulette_Text_NotEnoughCoins::
    .string "你没有足够的硬币。$"

Roulette_Text_SpecialRateTable::
    .string "现在是特别费率桌！$"

Roulette_Text_ControlsInstruction::
    .string "使用方向键下注，然后按A键。$"

Roulette_Text_ItsAHit::
    .string "中奖了！$"

Roulette_Text_Jackpot::
    .string "大奖！$"

Roulette_Text_NothingDoing::
    .string "没中！$"

Roulette_Text_YouveWonXCoins::
    .string "你赢得了{STR_VAR_1}个硬币！$"

Roulette_Text_NoCoinsLeft::
    .string "没有剩余的硬币…$"

Roulette_Text_KeepPlaying::
    .string "继续玩吗？$"

Roulette_Text_BoardWillBeCleared::
    .string "轮盘板将被清空。$"

@ Unused
Roulette_Text_YouDontHaveACoinCase::
    .string "你没有硬币盒。$"

Roulette_Text_CoinCaseIsFull::
    .string "你的硬币盒已满！\n"
    .string "硬币可以兑换奖品。$"
