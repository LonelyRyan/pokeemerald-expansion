ProfileMan_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_SYS_CHAT_USED, ProfileMan_EventScript_GivenProfileBefore
	msgbox ProfileMan_Text_CollectTrainerProfiles, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeProfile
	end

ProfileMan_EventScript_AskToSeeProfile::
	msgbox ProfileMan_Text_MayISeeYourProfile, MSGBOX_DEFAULT
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, ProfileMan_EventScript_CreateProfile
	case 1, ProfileMan_EventScript_DeclineShowProfile
	case 2, ProfileMan_EventScript_Info
	case MULTI_B_PRESSED, ProfileMan_EventScript_DeclineShowProfile
	end

ProfileMan_EventScript_Info::
	msgbox ProfileMan_Text_EasyChatExplanation, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeProfile
	end

ProfileMan_EventScript_CreateProfile::
	msgbox ProfileMan_Text_LetsSeeItThen, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, ProfileMan_EventScript_CancelShowProfile
	goto_if_eq VAR_RESULT, 1, ProfileMan_EventScript_ShowProfile
	end

ProfileMan_EventScript_CancelShowProfile::
	msgbox ProfileMan_Text_NotIntoItRightNow, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_ShowProfile::
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox ProfileMan_Text_FantasticProfile, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_DeclineShowProfile::
	msgbox ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_GivenProfileBefore::
	msgbox ProfileMan_Text_YouHaveWonderfulSmile, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end

ProfileMan_EventScript_AskToSeeNewProfile::
	msgbox ProfileMan_Text_MayISeeYourNewProfile, MSGBOX_DEFAULT
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, ProfileMan_EventScript_CreateNewProfile
	case 1, ProfileMan_EventScript_DeclineNewProfile
	case 2, ProfileMan_EventScript_InfoNewProfile
	case MULTI_B_PRESSED, ProfileMan_EventScript_DeclineNewProfile
	end

ProfileMan_EventScript_InfoNewProfile::
	msgbox ProfileMan_Text_EasyChatExplanation, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end

ProfileMan_EventScript_CreateNewProfile::
	msgbox ProfileMan_Text_EvenBetterThanLastProfile, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, ProfileMan_EventScript_CancelShowProfile
	goto_if_eq VAR_RESULT, 1, ProfileMan_EventScript_ShowProfile
	end

ProfileMan_EventScript_DeclineNewProfile::
	msgbox ProfileMan_Text_LikeProfileWayItIs, MSGBOX_DEFAULT
	release
	end

@ Unused
ProfileMan_EventScript_Ret::
	return

ProfileMan_Text_CollectTrainerProfiles:
    .string "你好，训练师！\n"
    .string "你的笑容真美妙。\p"
    .string "我有一个爱好——收集宝可梦训练师的\n"
    .string "个人资料。$"

ProfileMan_Text_MayISeeYourProfile:
    .string "那么，怎么样？\n"
    .string "我可以看看你的个人资料吗？$"

ProfileMan_Text_EasyChatExplanation:
    .string "你可以通过组合四个词或短语来创建自己的个人资料。\p"
    .string "来，我给你举个使用四段文本的\n"
    .string "个人资料的例子。\p"
    .string "你可以随意交换这四段文本，以\n"
    .string "创建自己的个人资料。\p"
    .string "你可以使用的文本片段有很多。\p"
    .string "它们被分成宝可梦、生活方式和爱好等\n"
    .string "组，以便更容易查找。\p"
    .string "首先，选择文本片段组来显示\n"
    .string "选项列表。\p"
    .string "然后，选择你想要的选项。\p"
    .string "对其余的文本选项重复同样的选择，\n"
    .string "你就会拥有自己独特的个人资料。$"

ProfileMan_Text_LetsSeeItThen:
    .string "好的！谢谢你！\n"
    .string "那么，让我们看看它吧。$"

ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile:
    .string "哦，不，真的吗？\p"
    .string "我想像你这样的人会有\n"
    .string "一个精彩的个人资料…$"

ProfileMan_Text_NotIntoItRightNow:
    .string "哦？你现在不感兴趣吗？\p"
    .string "嗯，任何时候我都有空！$"

ProfileMan_Text_YouHaveWonderfulSmile:
    .string "你好，训练师！\n"
    .string "你有一个很棒的微笑。$"

ProfileMan_Text_MayISeeYourNewProfile:
    .string "我可以看看你的新个人资料吗？$"

ProfileMan_Text_EvenBetterThanLastProfile:
    .string "好的！谢谢你！\p"
    .string "我希望它比你之前\n"
    .string "给我看的那个个人资料还要好。$"

ProfileMan_Text_LikeProfileWayItIs:
    .string "哦，你喜欢你现在的个人资料。\p"
    .string "我不怪你——它现在这样\n"
    .string "就很棒了。$"

ProfileMan_Text_FantasticProfile:
    .string "太棒了！\p"
    .string "你的个人资料，它太棒了！\n"
    .string "它真的表达了你的个性。\p"
    .string "任何人听到这个个人资料都会被\n"
    .string "你吸引！\p"
    .string "谢谢你！$"

@ Unused
ProfileMan_Text_YouKnowSecretSaying:
    .string "哦？\n"
    .string "你知道那个秘密口号！\p"
    .string "这意味着你现在是神秘事件俱乐部的\n"
    .string "会员了！$"
