Debug_FlagsAndVarNotSetBattleConfigMessage::
	lockall
	message Debug_FlagsAndVarNotSetBattleConfigMessage_Text
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_FlagsAndVarNotSetBattleConfigMessage_Text:
	.string "功能不可用！请在\n"
	.string "include/config/battle.h 中\l"
	.string "中定义一个可用的flag和一个可用的var！$"
