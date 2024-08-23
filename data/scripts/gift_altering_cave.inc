MysteryGiftScript_AlteringCave::
	setvaddress MysteryGiftScript_AlteringCave
	addvar VAR_ALTERING_CAVE_WILD_SET, 1
	vgoto_if_ne VAR_ALTERING_CAVE_WILD_SET, (NUM_ALTERING_CAVE_TABLES + 1), MysteryGiftScript_AlteringCave_
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
MysteryGiftScript_AlteringCave_:
	lock
	faceplayer
	vmessage sText_MysteryGiftAlteringCave
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftAlteringCave:
    .string "感谢您使用神秘礼物系统。\p"
    .string "似乎有关于稀有宝可梦出现的传言。\p"
    .string "目击报告称这些宝可梦来自\n"
    .string "103号道路上的变幻洞窟。\p"
    .string "或许调查这个传言对您来说\n"
    .string "是值得的。$"
