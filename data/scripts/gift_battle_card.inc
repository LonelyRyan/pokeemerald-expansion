MysteryGiftScript_BattleCard::
	setvaddress MysteryGiftScript_BattleCard
	vgoto_if_set FLAG_MYSTERY_GIFT_DONE, MysteryGiftScript_BattleCardInfo
	setorcopyvar VAR_RESULT, GET_CARD_BATTLES_WON
	specialvar VAR_0x8008, GetMysteryGiftCardStat
	vgoto_if_ne VAR_0x8008, REQUIRED_CARD_BATTLES, MysteryGiftScript_BattleCardInfo
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard_WonPrize
	waitmessage
	waitbuttonpress
	giveitem ITEM_POTION
	release
	setflag FLAG_MYSTERY_GIFT_DONE
	end

MysteryGiftScript_BattleCardInfo:
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftBattleCountCard:
    .string "感谢您使用神秘礼物系统。\p"
    .string "您的对战计数卡会记录\n"
    .string "您与持有相同卡片的训练师的对战成绩。\p"
    .string "寻找并与持有与您相同卡片的训练师对战。\p"
    .string "您可以通过阅读新闻来查看\n"
    .string "整体排名。\p"
    .string "请务必尝试！$"

sText_MysteryGiftBattleCountCard_WonPrize:
    .string "感谢您使用神秘礼物系统。\p"
    .string "祝贺您！\p"
    .string "您赢得了连续赢得三场对战的奖品！\p"
    .string "我们希望这能激励您\n"
    .string "继续更多的对战。$"
