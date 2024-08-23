MysteryGiftScript_AuroraTicket::
	setvaddress MysteryGiftScript_AuroraTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_AURORA_TICKET, AuroraTicket_Obtained
	vgoto_if_set FLAG_BATTLED_DEOXYS, AuroraTicket_Obtained
	checkitem ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, AuroraTicket_Obtained
	vmessage sText_AuroraTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, AuroraTicket_NoBagSpace
	giveitem ITEM_AURORA_TICKET
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	setflag FLAG_RECEIVED_AURORA_TICKET
	vmessage sText_AuroraTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_NoBagSpace:
	vmessage sText_AuroraTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_Obtained:
	vmessage sText_AuroraTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_AuroraTicketForYou:
    .string "感谢您使用神秘礼物系统。\p"
    .string "您一定是{PLAYER}。\n"
    .string "这里有一张票是给您的。$"

sText_AuroraTicketUseAtPort:
    .string "它看起来是用于在\n"
    .string "水静市的港口。\p"
    .string "为什么不试试看，看看\n"
    .string "它是关于什么的？$"

sText_AuroraTicketThankYou:
    .string "感谢您使用神秘礼物系统。$"

sText_AuroraTicketBagFull:
    .string "哦，很抱歉，{PLAYER}。\n"
    .string "您的包的钥匙物品口袋已满。\p"
    .string "请在电脑上存放一些东西，\n"
    .string "然后回来拿这个。$"
