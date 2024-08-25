SafariZone_EventScript_OutOfBallsMidBattle::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	setwarp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	end

SafariZone_EventScript_Exit::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	waitstate
	end

SafariZone_EventScript_RetirePrompt::
	lockall
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_Retire
	releaseall
	end

SafariZone_EventScript_Retire::
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_TimesUp
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_OutOfBalls::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_OutOfBalls
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

EventScript_PokeBlockFeeder::
	lockall
	special GetPokeblockFeederInFront
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPresent
	msgbox SafariZone_Text_PlacePokeblockOnFeeder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_ChoosePokeblock
	releaseall
	end

SafariZone_EventScript_ChoosePokeblock::
	fadescreen FADE_TO_BLACK
	special OpenPokeblockCaseOnFeeder
	waitstate
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPlaced
#ifdef BUGFIX
	releaseall  @ Only gets called from EventScript_PokeBlockFeeder which uses lockall.
#endif
	end

SafariZone_EventScript_PokeblockPlaced::
	message SafariZone_Text_PokeblockWasPlaced
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_EventScript_PokeblockPresent::
	message SafariZone_Text_PokeblockStillHere
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_Text_WouldYouLikeToExit:
    .string "你现在想离开狩猎区吗？$"

SafariZone_Text_TimesUp:
    .string "叮咚！时间到！\n"
    .string "你的狩猎游戏结束了。$"

SafariZone_Text_OutOfBalls:
    .string "你的狩猎球用完了。\n"
    .string "你的狩猎游戏结束了。$"

SafariZone_Text_PlacePokeblockOnFeeder:
    .string "你想把树果饼放在树果饼饲喂器上吗？$"

SafariZone_Text_PokeblockStillHere:
    .string "你之前留下的{STR_VAR_1}\n"
    .string "还在这里。$"

SafariZone_Text_PokeblockWasPlaced:
    .string "{STR_VAR_1}已放置在\n"
    .string "树果饼饲喂器上。$"

Route121_SafariZoneEntrance_Text_WelcomeToSafariZone:
    .string "欢迎来到狩猎区！\p"
    .string "在这里，你可以看到许多在丰缘难得一见的\n"
    .string "宝可梦种类。\p"
    .string "而且，你会在它们的自然栖息地看到它们野性、\n"
    .string "未被驯服的状态。\p"
    .string "此外，我们对宝可梦训练师敞开了大门。\p"
    .string "我们鼓励你永久捕捉宝可梦！\p"
    .string "进来享受狩猎区的乐趣吧！$"

Route121_SafariZoneEntrance_Text_WelcomeFirstTime:
    .string "欢迎来到狩猎区！\n"
    .string "这是你第一次来吗？$"

Route121_SafariZoneEntrance_Text_ComeInAndEnjoy:
    .string "进来享受狩猎区的乐趣吧！$"

Route121_SafariZoneEntrance_Text_FirstTimeInfo:
    .string "当你进入狩猎区时，你会开始\n"
    .string "有30个狩猎球用于捕捉宝可梦。\p"
    .string "当你用完狩猎球，或者走了\n"
    .string "500步时，狩猎游戏就结束了。\p"
    .string "进来享受狩猎区的乐趣吧！$"

Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay:
    .string "欢迎来到狩猎区！\p"
    .string "只需¥500，你就可以尽情捕捉！\n"
    .string "你想玩狩猎游戏吗？$"

Route121_SafariZoneEntrance_Text_PlayAnotherTime:
    .string "好的。\n"
    .string "请下次再来玩！$"

Route121_SafariZoneEntrance_Text_NotEnoughMoney:
    .string "你的钱不够。\n"
    .string "抱歉。$"

Route121_SafariZoneEntrance_Text_ThatWillBe500Please:
    .string "请付¥500。$"

Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls:
    .string "这是你的狩猎球。$"

Route121_SafariZoneEntrance_Text_Received30SafariBalls:
    .string "{PLAYER}收到了30个狩猎球。$"

Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself:
    .string "我们会在游戏结束时通知你。\p"
    .string "那么，在那之前，请尽情享受！\n"
    .string "开始你的野外探险吧！$"

Route121_SafariZoneEntrance_Text_PCIsFull:
    .string "对不起！\n"
    .string "你的电脑箱子满了。$"

Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase:
    .string "对不起！\n"
    .string "你似乎没有树果饼盒子。\p"
    .string "如果你使用树果饼，你的狩猎游戏\n"
    .string "会更加富有成效。\p"
    .string "请带上树果饼盒子再来。\p"
    .string "你可以从水静市大赛大厅获得\n"
    .string "树果饼盒子。$"

SafariZone_South_Text_StillHaveTimeExit:
    .string "你还有剩余时间。你想\n"
    .string "现在就离开狩猎区吗？$"

SafariZone_South_Text_EnjoyTheRestOfYourAdventure:
    .string "请享受你野生冒险的\n"
    .string "其余部分！$"

SafariZone_South_Text_ExitEarlyThankYouForPlaying:
    .string "好的。\p"
    .string "我会收回你剩余的狩猎球。\p"
    .string "感谢你的参与。\n"
    .string "我们期待再次见到你。$"

SafariZone_South_Text_GoodLuck:
    .string "祝你好运！\p"
    .string "如果你需要任何东西，请\n"
    .string "不要犹豫告诉我！$"

SafariZone_South_Text_Boy:
    .string "你知道吗？\p"
    .string "如果你在那个方盒子里放一个树果饼，\n"
    .string "宝可梦就会聚集过来。$"

SafariZone_South_Text_Man:
    .string "我想继续深入，但我\n"
    .string "忘记带自行车了。\p"
    .string "我有种感觉，珍稀宝可梦\n"
    .string "生活在偏远地区。$"

SafariZone_Southwest_Text_Woman:
    .string "有时候，当我向宝可梦扔一个\n"
    .string "树果饼时，它被忽视了。\p"
    .string "宝可梦对它们吃的东西\n"
    .string "有喜好和厌恶吗？$"

SafariZone_Northwest_Text_Man:
    .string "喘气…喘气…\n"
    .string "我…到达了这里…但是…\p"
    .string "我筋疲力尽了…我没有\n"
    .string "精力去抓宝可梦了…$"

SafariZone_North_Text_Fisherman:
    .string "我要寻找在丰缘地区看不到的\n"
    .string "水属性宝可梦。\p"
    .string "你知道湖泊在哪里吗？$"

SafariZone_North_Text_Man:
    .string "我要在这里抓到很多珍稀的宝可梦\n"
    .string "然后和朋友们交换！$"

SafariZone_South_Text_Youngster:
    .string "我把一个树果饼放在了树果饼饲喂器上。\n"
    .string "但它似乎消失了。\p"
    .string "我猜宝可梦一定是在我不注意的时候\n"
    .string "把它吃掉了。$"

Route121_SafariZoneEntrance_Text_TrainerTip:
    .string "狩猎区训练师小贴士！\p"
    .string "把树果饼扔向野生宝可梦，让\n"
    .string "它们不那么容易逃跑。$"

SafariZone_Southwest_Text_RestHouseSign:
    .string "“放松你疲惫的双脚。”\n"
    .string "休息小屋$"

SafariZone_RestHouse_Text_Youngster:
    .string "我没有树果饼，但我抓到了不少\n"
    .string "宝可梦。\p"
    .string "你可以通过在投掷狩猎球之前\n"
    .string "靠近它们来提高捕获的几率。$"

SafariZone_RestHouse_Text_PsychicM:
    .string "如果你使用树果饼，野生宝可梦不会\n"
    .string "那么快逃跑。\p"
    .string "给不容易逃跑的宝可梦树果饼\n"
    .string "并没有太大用处。$"

SafariZone_RestHouse_Text_FatMan:
    .string "如果你把树果饼放在饲喂器上，\n"
    .string "宝可梦就会被吸引过来。\p"
    .string "我认为具有相似性格的宝可梦会被\n"
    .string "某种特定的树果饼吸引。$"

SafariZone_South_Text_AreaOffLimits1:
    .string "这个区域仍在施工中。\n"
    .string "很抱歉，禁止入内！$"

SafariZone_Southeast_Text_ExpansionIsFinished:
    .string "狩猎区的扩建工程\n"
    .string "现在已经完成了。\p"
    .string "我们希望你会喜欢这个新区域。$"

SafariZone_South_Text_AreaOffLimits2:
    .string "这个区域仍在施工中。\n"
    .string "很抱歉，禁止入内！$"

SafariZone_Southeast_Text_LittleGirl:
    .string "哇！嘿！我以前从没见过\n"
    .string "这些宝可梦！$"

SafariZone_Southeast_Text_FatMan:
    .string "这里的宝可梦对我来说都是\n"
    .string "全新的。\p"
    .string "而且我还能抓到这些珍稀的\n"
    .string "宝可梦！太酷了！$"

SafariZone_Southeast_Text_RichBoy:
    .string "这里的宝可梦似乎是来自\n"
    .string "丰缘地区以外的地方。$"

SafariZone_Northeast_Text_Boy:
    .string "我只剩下几个狩猎球了。\p"
    .string "我很难决定\n"
    .string "我应该抓什么。$"

SafariZone_Northeast_Text_Woman:
    .string "我听说在这里可以看到皮卡丘。\n"
    .string "它可能在哪里呢？$"

SafariZone_Northeast_Text_Girl:
    .string "哦，糟糕！\n"
    .string "我似乎什么都抓不到！\p"
    .string "如果我抓不到点什么，我会\n"
    .string "白费了入场费！$"
