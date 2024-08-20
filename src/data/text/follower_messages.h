extern const u8 EventScript_FollowerIsShivering[];
extern const u8 EventScript_FollowerNostalgia[];
extern const u8 EventScript_FollowerHopping[];
extern const u8 EventScript_FollowerJumpOnPlayer[];
extern const u8 EventScript_FollowerCuddling[];
extern const u8 EventScript_FollowerShiverCuddling[];
extern const u8 EventScript_FollowerGetCloser[];
extern const u8 EventScript_FollowerPokingPlayer[];
extern const u8 EventScript_FollowerLookAround[];
extern const u8 EventScript_FollowerLookAway[];
extern const u8 EventScript_FollowerLookAwayBark[];
extern const u8 EventScript_FollowerLookAwayPoke[];
extern const u8 EventScript_FollowerPokeGround[];
extern const u8 EventScript_FollowerStartled[];
extern const u8 EventScript_FollowerFastHopping[];
extern const u8 EventScript_FollowerDizzy[];
extern const u8 EventScript_FollowerLookAroundScared[];
extern const u8 EventScript_FollowerDance[];
extern const u8 EventScript_FollowerLookUp[];

// 'Generic', unconditional happy messages
static const u8 sHappyMsg00[] = _("{STR_VAR_1}开始戳你的肚子.");
static const u8 sHappyMsg01[] = _("{STR_VAR_1}很高兴但有点害羞.");
static const u8 sHappyMsg02[] = _("{STR_VAR_1}快乐地跟着你.");
static const u8 sHappyMsg03[] = _("{STR_VAR_1}看起来很开心.");
static const u8 sHappyMsg04[] = _("{STR_VAR_1}似乎很高兴和你一起散步!");
static const u8 sHappyMsg05[] = _("{STR_VAR_1}看起来非常健康.");
static const u8 sHappyMsg06[] = _("{STR_VAR_1}看起来非常高兴.");
static const u8 sHappyMsg07[] = _("{STR_VAR_1}付出了额外的努力.");
static const u8 sHappyMsg08[] = _("{STR_VAR_1}在嗅周围的气味.");
static const u8 sHappyMsg09[] = _("{STR_VAR_1}高兴得跳了起来!");
static const u8 sHappyMsg10[] = _("{STR_VAR_1}仍然感觉很棒!");
static const u8 sHappyMsg11[] = _("你的宝可梦闻到了烟味.");
static const u8 sHappyMsg12[] = _("{STR_VAR_1}在戳你的肚子.");
static const u8 sHappyMsg13[] = _("你的宝可梦伸展身体，正在放松.");
static const u8 sHappyMsg14[] = _("{STR_VAR_1}看起来想当先锋!");
static const u8 sHappyMsg15[] = _("{STR_VAR_1}正在尽最大努力跟上你.");
static const u8 sHappyMsg16[] = _("{STR_VAR_1}快乐地依偎着你!");
static const u8 sHappyMsg17[] = _("{STR_VAR_1}充满活力!");
static const u8 sHappyMsg18[] = _("{STR_VAR_1}看起来非常高兴!");
static const u8 sHappyMsg19[] = _("{STR_VAR_1}高兴得无法静止不动!");
static const u8 sHappyMsg20[] = _("{STR_VAR_1}慢慢地点头.");
static const u8 sHappyMsg21[] = _("{STR_VAR_1}非常渴望!");
static const u8 sHappyMsg22[] = _("{STR_VAR_1}在四处游荡，聆听不同的声音.");
static const u8 sHappyMsg23[] = _("{STR_VAR_1}看起来很感兴趣.");
static const u8 sHappyMsg24[] = _("{STR_VAR_1}不知怎么地强迫自己继续前进.");
static const u8 sHappyMsg25[] = _("{STR_VAR_1}给了你一个阳光般的笑容!");
static const u8 sHappyMsg26[] = _("{STR_VAR_1}给你一个快乐的眼神和微笑.");
static const u8 sHappyMsg27[] = _("你的宝可梦闻到了花香.");
static const u8 sHappyMsg28[] = _("{STR_VAR_1}看到你非常高兴!");
static const u8 sHappyMsg29[] = _("{STR_VAR_1}面朝这边，咧嘴笑了.");
static const u8 sHappyMsg30[] = _("{STR_VAR_1}快乐地依偎着你!");
// Conditional messages begin here, index 31
static const u8 sHappyMsg31[] = _("你的宝可梦似乎对这美好的天气感到高兴.");
static const u8 sHappyMsg32[] = _("{STR_VAR_1}非常冷静，充满自信!");

const struct FollowerMsgInfo gFollowerHappyMessages[] = {
    {sHappyMsg00, EventScript_FollowerPokingPlayer},
    {sHappyMsg01}, {sHappyMsg02}, {sHappyMsg03}, {sHappyMsg04}, {sHappyMsg05}, {sHappyMsg06}, {sHappyMsg07},
    {sHappyMsg08, EventScript_FollowerLookAround},
    {sHappyMsg09, EventScript_FollowerHopping},
    {sHappyMsg10}, {sHappyMsg11},
    {sHappyMsg12, EventScript_FollowerPokingPlayer},
    {sHappyMsg13, EventScript_FollowerLookAround},
    {sHappyMsg14}, {sHappyMsg15},
    {sHappyMsg16, EventScript_FollowerCuddling},
    {sHappyMsg17}, {sHappyMsg18},
    {sHappyMsg19, EventScript_FollowerFastHopping},
    {sHappyMsg20}, {sHappyMsg21}, {sHappyMsg22}, {sHappyMsg23}, {sHappyMsg24}, {sHappyMsg25}, {sHappyMsg26}, {sHappyMsg27}, {sHappyMsg28}, {sHappyMsg29},
    {sHappyMsg30, EventScript_FollowerCuddling},
    {sHappyMsg31}, {sHappyMsg32},
};

// Unconditional neutral messages
static const u8 sNeutralMsg00[] = _("{STR_VAR_1}正稳定地戳着地面.");
static const u8 sNeutralMsg01[] = _("{STR_VAR_1}在站岗.");
static const u8 sNeutralMsg02[] = _("{STR_VAR_1}耐心地盯着什么也没有\n的地方.");
static const u8 sNeutralMsg03[] = _("{STR_VAR_1}在四处徘徊.");
static const u8 sNeutralMsg04[] = _("你的宝可梦大声打了个哈欠!");
static const u8 sNeutralMsg05[] = _("你的宝可梦不安地四处张望.");
static const u8 sNeutralMsg06[] = _("{STR_VAR_1}朝这边看，微笑着.");
static const u8 sNeutralMsg07[] = _("{STR_VAR_1}不安地四处张望.");
static const u8 sNeutralMsg08[] = _("{STR_VAR_1}发出了战斗的呐喊.");
static const u8 sNeutralMsg09[] = _("{STR_VAR_1}跳了一段精彩的舞蹈!");
static const u8 sNeutralMsg10[] = _("{STR_VAR_1}非常渴望.");
static const u8 sNeutralMsg11[] = _("{STR_VAR_1}专注地凝视着远方.");
static const u8 sNeutralMsg12[] = _("{STR_VAR_1}在保持警惕!");
static const u8 sNeutralMsg13[] = _("{STR_VAR_1}望向远方并吠叫了一声!");

const struct FollowerMsgInfo gFollowerNeutralMessages[] = {
    {sNeutralMsg00, EventScript_FollowerPokeGround},
    {sNeutralMsg01},
    {sNeutralMsg02, EventScript_FollowerLookAway},
    {sNeutralMsg03, EventScript_FollowerLookAround},
    {sNeutralMsg04},
    {sNeutralMsg05, EventScript_FollowerLookAround},
    {sNeutralMsg06}, {sNeutralMsg07}, {sNeutralMsg08},
    {sNeutralMsg09, EventScript_FollowerDance},
    {sNeutralMsg10},
    {sNeutralMsg11, EventScript_FollowerLookAway},
    {sNeutralMsg12},
    {sNeutralMsg13, EventScript_FollowerLookAwayBark},
};

// Unconditional sad messages
static const u8 sSadMsg00[] = _("{STR_VAR_1}感到头晕.");
static const u8 sSadMsg01[] = _("{STR_VAR_1}踩到你的脚了!");
static const u8 sSadMsg02[] = _("{STR_VAR_1}看起来有点疲倦.");
// Conditional messages begin, index 3
static const u8 sSadMsg03[] = _("{STR_VAR_1}不高兴了.");
static const u8 sSadMsg04[] = _("{STR_VAR_1}快要倒下了!\n");
static const u8 sSadMsg05[] = _("{STR_VAR_1}似乎快要倒下了!");
static const u8 sSadMsg06[] = _("{STR_VAR_1}正在努力跟上你…");
static const u8 sSadMsg07[] = _("{STR_VAR_1}感到紧张.");

const struct FollowerMsgInfo gFollowerSadMessages[] = {
    {sSadMsg00, EventScript_FollowerDizzy},
    {sSadMsg01}, {sSadMsg02},
    {sSadMsg03}, {sSadMsg04}, {sSadMsg05}, {sSadMsg06}, {sSadMsg07},
};

// Unconditional upset messages
static const u8 sUpsetMsg00[] = _("{STR_VAR_1}不知为何看起来不高兴…");
static const u8 sUpsetMsg01[] = _("{STR_VAR_1}摆出了一副不高兴的表情.");
static const u8 sUpsetMsg02[] = _("…你的宝可梦似乎有点冷.");
// Conditional messages, index 3
static const u8 sUpsetMsg03[] = _("{STR_VAR_1}正在草丛中躲避雨.");

const struct FollowerMsgInfo gFollowerUpsetMessages[] = {
    {sUpsetMsg00}, {sUpsetMsg01},
    {sUpsetMsg02, EventScript_FollowerIsShivering},
    {sUpsetMsg03},
};

// Unconditional angry messages
static const u8 sAngryMsg00[] = _("{STR_VAR_1}发出了一声怒吼!");
static const u8 sAngryMsg01[] = _("{STR_VAR_1}摆出了一副生气的表情!");
static const u8 sAngryMsg02[] = _("{STR_VAR_1}不知为何显得很生气.");
static const u8 sAngryMsg03[] = _("你的宝可梦转过身去，\n露出了一副反抗的面孔.");
static const u8 sAngryMsg04[] = _("{STR_VAR_1}生气地叫了出来.");

const struct FollowerMsgInfo gFollowerAngryMessages[] = {
    {sAngryMsg00}, {sAngryMsg01}, {sAngryMsg02},
    {sAngryMsg03, EventScript_FollowerLookAway},
    {sAngryMsg04},
};

// Unconditional pensive messages
static const u8 sPensiveMsg00[] = _("{STR_VAR_1}正平静地向下看.");
static const u8 sPensiveMsg01[] = _("{STR_VAR_1}正在观察周围环境.");
static const u8 sPensiveMsg02[] = _("{STR_VAR_1}正向下凝视.");
static const u8 sPensiveMsg03[] = _("{STR_VAR_1}不知怎样抵抗睡意…");
static const u8 sPensiveMsg04[] = _("{STR_VAR_1}似乎在漫无目的地徘徊.");
static const u8 sPensiveMsg05[] = _("{STR_VAR_1}心不在焉地四处张望.");
static const u8 sPensiveMsg06[] = _("{STR_VAR_1}非常大声地打了个哈欠!");
static const u8 sPensiveMsg07[] = _("{STR_VAR_1}舒适地放松着.");
static const u8 sPensiveMsg08[] = _("{STR_VAR_1}坚定地凝视着你的脸.");
static const u8 sPensiveMsg09[] = _("{STR_VAR_1}专注地凝视着你的脸.");
static const u8 sPensiveMsg10[] = _("{STR_VAR_1}集中注意力在你身上.");
static const u8 sPensiveMsg11[] = _("{STR_VAR_1}凝视着深处.");
static const u8 sPensiveMsg12[] = _("{STR_VAR_1}在嗅探地面.");
static const u8 sPensiveMsg13[] = _("你的宝可梦专注地凝视着\n什么也没有.");
static const u8 sPensiveMsg14[] = _("{STR_VAR_1}用锐利的目光集中注意力!");
static const u8 sPensiveMsg15[] = _("{STR_VAR_1}正在集中精神.");
static const u8 sPensiveMsg16[] = _("{STR_VAR_1}面向这边并点了点头.");
static const u8 sPensiveMsg17[] = _("{STR_VAR_1}看起来有点紧张…");
static const u8 sPensiveMsg18[] = _("{STR_VAR_1}在看你的脚印.");
static const u8 sPensiveMsg19[] = _("{STR_VAR_1}直视着你的眼睛.");

const struct FollowerMsgInfo gFollowerPensiveMessages[] = {
    {sPensiveMsg00},
    {sPensiveMsg01, EventScript_FollowerLookAround},
    {sPensiveMsg02}, {sPensiveMsg03}, {sPensiveMsg04},
    {sPensiveMsg05, EventScript_FollowerLookAround},
    {sPensiveMsg06}, {sPensiveMsg07}, {sPensiveMsg08}, {sPensiveMsg09}, {sPensiveMsg10},
    {sPensiveMsg11, EventScript_FollowerLookAway},
    {sPensiveMsg12, EventScript_FollowerPokeGround},
    {sPensiveMsg13, EventScript_FollowerLookAway},
    {sPensiveMsg14}, {sPensiveMsg15}, {sPensiveMsg16}, {sPensiveMsg17}, {sPensiveMsg18}, {sPensiveMsg19},
};

// All 'love' messages are unconditional
static const u8 sLoveMsg00[] = _("{STR_VAR_1}突然开始走得更近了!");
static const u8 sLoveMsg01[] = _("{STR_VAR_1}的脸颊变得红润了!");
static const u8 sLoveMsg02[] = _("哇! {STR_VAR_1}突然拥抱了你!");
static const u8 sLoveMsg03[] = _("哇! {STR_VAR_1}突然变得调皮起来!");
static const u8 sLoveMsg04[] = _("{STR_VAR_1}在蹭你的腿!");
static const u8 sLoveMsg05[] = _("{STR_VAR_1}脸红了.");
static const u8 sLoveMsg06[] = _("啊! {STR_VAR_1}依偎着你!");
static const u8 sLoveMsg07[] = _("{STR_VAR_1}用崇拜的眼神看着你!");
static const u8 sLoveMsg08[] = _("{STR_VAR_1}向你靠近了.");
static const u8 sLoveMsg09[] = _("{STR_VAR_1}紧贴在你的脚边.");

const struct FollowerMsgInfo gFollowerLoveMessages[] = {
    {sLoveMsg00, EventScript_FollowerGetCloser},
    {sLoveMsg01},
    {sLoveMsg02, EventScript_FollowerCuddling},
    {sLoveMsg03},
    {sLoveMsg04, EventScript_FollowerCuddling},
    {sLoveMsg05},
    {sLoveMsg06, EventScript_FollowerCuddling},
    {sLoveMsg07},
    {sLoveMsg08, EventScript_FollowerGetCloser},
    {sLoveMsg09},
};

// Unconditional surprised messages
static const u8 sSurpriseMsg00[] = _("{STR_VAR_1}快要摔倒了!");
static const u8 sSurpriseMsg01[] = _("{STR_VAR_1}撞到了你!");
static const u8 sSurpriseMsg02[] = _("{STR_VAR_1}似乎还不太习惯自己的名字.");
static const u8 sSurpriseMsg03[] = _("{STR_VAR_1}正向下窥视.");
static const u8 sSurpriseMsg04[] = _("你的宝可梦绊倒了，\n差点摔倒!");
static const u8 sSurpriseMsg05[] = _("{STR_VAR_1}感觉到了什么，\n正在嚎叫!");
static const u8 sSurpriseMsg06[] = _("{STR_VAR_1}看起来焕然一新!");
static const u8 sSurpriseMsg07[] = _("{STR_VAR_1}突然转过身来，\n开始叫了起来!");
static const u8 sSurpriseMsg08[] = _("{STR_VAR_1}突然转过身来!");
static const u8 sSurpriseMsg09[] = _("你的宝可梦对你突然跟它说话感到惊讶!");
static const u8 sSurpriseMsg10[] = _("嗅嗅嗅，有什么东西闻起来真的很香!");
static const u8 sSurpriseMsg11[] = _("{STR_VAR_1}感觉焕然一新.");
static const u8 sSurpriseMsg12[] = _("{STR_VAR_1}摇摇晃晃，\n似乎快要摔倒了.");
static const u8 sSurpriseMsg13[] = _("{STR_VAR_1}快要摔倒了.");
static const u8 sSurpriseMsg14[] = _("{STR_VAR_1}正小心翼翼地走着.");
static const u8 sSurpriseMsg15[] = _("{STR_VAR_1}因为紧张而感到恐惧.");
static const u8 sSurpriseMsg16[] = _("{STR_VAR_1}感觉到了奇怪的东西，感到很惊讶!");
static const u8 sSurpriseMsg17[] = _("{STR_VAR_1}感到害怕，依偎着你!");
static const u8 sSurpriseMsg18[] = _("{STR_VAR_1}感觉到了不寻常的存在…");
static const u8 sSurpriseMsg19[] = _("{STR_VAR_1}因为紧张而感到恐惧.");
// Conditional messages, index 20
static const u8 sSurpriseMsg20[] = _("{STR_VAR_1}似乎对下雨感到非常惊讶!");

const struct FollowerMsgInfo gFollowerSurpriseMessages[] = {
    {sSurpriseMsg00},
    {sSurpriseMsg01, EventScript_FollowerPokingPlayer},
    {sSurpriseMsg02}, {sSurpriseMsg03}, {sSurpriseMsg04}, {sSurpriseMsg05}, {sSurpriseMsg06},
    {sSurpriseMsg07, EventScript_FollowerLookAwayBark},
    {sSurpriseMsg08, EventScript_FollowerLookAway},
    {sSurpriseMsg09},
    {sSurpriseMsg10, EventScript_FollowerLookAround},
    {sSurpriseMsg11}, {sSurpriseMsg12}, {sSurpriseMsg13}, {sSurpriseMsg14}, {sSurpriseMsg15}, {sSurpriseMsg16},
    {sSurpriseMsg17, EventScript_FollowerCuddling},
    {sSurpriseMsg18},
    {sSurpriseMsg19, EventScript_FollowerLookAround},
    {sSurpriseMsg20},
};

// Unconditional curious messages
static const u8 sCuriousMsg00[] = _("你的宝可梦\n在不安地四处寻找着什么.");
static const u8 sCuriousMsg01[] = _("你的宝可梦没注意看路，\n撞到你了!");
static const u8 sCuriousMsg02[] = _("嗅嗅，嗅嗅！\n附近有什么吗?");
static const u8 sCuriousMsg03[] = _("{STR_VAR_1}正在玩耍地滚着一颗小石头.");
static const u8 sCuriousMsg04[] = _("{STR_VAR_1}在四处徘徊，\n寻找着什么.");
static const u8 sCuriousMsg05[] = _("{STR_VAR_1}在闻你的气味.");
static const u8 sCuriousMsg06[] = _("{STR_VAR_1}似乎有点犹豫…");

const struct FollowerMsgInfo gFollowerCuriousMessages[] = {
    {sCuriousMsg00, EventScript_FollowerLookAround},
    {sCuriousMsg01, EventScript_FollowerPokingPlayer},
    {sCuriousMsg02}, {sCuriousMsg03},
    {sCuriousMsg04, EventScript_FollowerLookAround},
    {sCuriousMsg05}, {sCuriousMsg06},
};

// Unconditional music messages
static const u8 sMusicMsg00[] = _("{STR_VAR_1}正在展示它的敏捷!");
static const u8 sMusicMsg01[] = _("{STR_VAR_1}快乐地移动着!");
static const u8 sMusicMsg02[] = _("哇! {STR_VAR_1}突然开始快乐地跳舞!");
static const u8 sMusicMsg03[] = _("{STR_VAR_1}稳定地跟上了你!");
static const u8 sMusicMsg04[] = _("{STR_VAR_1}似乎想和你一起玩耍.");
static const u8 sMusicMsg05[] = _("{STR_VAR_1}快乐地跳跃着.");
static const u8 sMusicMsg06[] = _("{STR_VAR_1}在唱歌和哼曲子.");
static const u8 sMusicMsg07[] = _("{STR_VAR_1}在轻咬你的脚!");
static const u8 sMusicMsg08[] = _("{STR_VAR_1}转过身来看着了你.");
static const u8 sMusicMsg09[] = _("{STR_VAR_1}正在努力展示它的强大力量!");
static const u8 sMusicMsg10[] = _("哇哦! {STR_VAR_1}突然快乐地跳起舞来!");
static const u8 sMusicMsg11[] = _("{STR_VAR_1}很愉快!");
static const u8 sMusicMsg12[] = _("{STR_VAR_1}无忧无虑地四处跳跃!");
static const u8 sMusicMsg13[] = _("你的宝可梦似乎闻到了\n一种令人怀旧的熟悉气味…");
// Conditional music messages, index 14
static const u8 sMusicMsg14[] = _("{STR_VAR_1}对下雨感到非常高兴.");

const struct FollowerMsgInfo gFollowerMusicMessages[] = {
    {sMusicMsg00, EventScript_FollowerLookAround},
    {sMusicMsg01},
    {sMusicMsg02, EventScript_FollowerDance},
    {sMusicMsg03},
    {sMusicMsg04, EventScript_FollowerHopping},
    {sMusicMsg05, EventScript_FollowerHopping},
    {sMusicMsg06}, {sMusicMsg07}, {sMusicMsg08}, {sMusicMsg09},
    {sMusicMsg10, EventScript_FollowerDance},
    {sMusicMsg11},
    {sMusicMsg12, EventScript_FollowerHopping},
    {sMusicMsg13, EventScript_FollowerNostalgia},
    {sMusicMsg14}
};


static const u8 sPoisonedMsg00[] = _("{STR_VAR_1}因为中毒的效果而颤抖.");

const struct FollowerMsgInfo gFollowerPoisonedMessages[] = {
    {sPoisonedMsg00, EventScript_FollowerIsShivering},
};
