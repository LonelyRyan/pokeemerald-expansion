#ifndef GUARD_CONSTANTS_POKEMON_H
#define GUARD_CONSTANTS_POKEMON_H

// Pokémon types
#define TYPE_NONE             0//无
#define TYPE_NORMAL           1//普通
#define TYPE_FIGHTING         2//格斗
#define TYPE_FLYING           3//飞行
#define TYPE_POISON           4//毒
#define TYPE_GROUND           5//地面
#define TYPE_ROCK             6//岩石
#define TYPE_BUG              7//虫
#define TYPE_GHOST            8//鬼
#define TYPE_STEEL            9//钢
#define TYPE_MYSTERY          10//未知
#define TYPE_FIRE             11//火
#define TYPE_WATER            12//水
#define TYPE_GRASS            13//草
#define TYPE_ELECTRIC         14//电
#define TYPE_PSYCHIC          15//超能
#define TYPE_ICE              16//冰
#define TYPE_DRAGON           17//龙
#define TYPE_DARK             18//恶
#define TYPE_FAIRY            19//妖精
#define TYPE_STELLAR          20//星晶
#define NUMBER_OF_MON_TYPES   21//属性总数

// 宝可梦蛋群
#define EGG_GROUP_NONE                0 // 无蛋群
#define EGG_GROUP_MONSTER             1 // 怪兽组
#define EGG_GROUP_WATER_1             2 // 水系1组
#define EGG_GROUP_BUG                 3 // 虫系组
#define EGG_GROUP_FLYING              4 // 飞行组
#define EGG_GROUP_FIELD               5 // 陆地区域组
#define EGG_GROUP_FAIRY               6 // 童话组
#define EGG_GROUP_GRASS               7 // 草系组
#define EGG_GROUP_HUMAN_LIKE          8 // 人类形态组
#define EGG_GROUP_WATER_3             9 // 水系3组
#define EGG_GROUP_MINERAL             10 // 矿石组
#define EGG_GROUP_AMORPHOUS           11 // 变形组
#define EGG_GROUP_WATER_2             12 // 水系2组
#define EGG_GROUP_DITTO               13 // 多龙仔组（特有）
#define EGG_GROUP_DRAGON              14 // 龙系组
#define EGG_GROUP_NO_EGGS_DISCOVERED  15 // 未发现蛋组

#define EGG_GROUPS_PER_MON            2 // 每只宝可梦的蛋群数量

// 宝可梦性格
#define NATURE_HARDY    0 // 中庸
#define NATURE_LONELY   1 // +攻击 -防御
#define NATURE_BRAVE    2 // +攻击 -速度
#define NATURE_ADAMANT  3 // +攻击 -特攻
#define NATURE_NAUGHTY  4 // +攻击 -特防
#define NATURE_BOLD     5 // +防御 -攻击
#define NATURE_DOCILE   6 // 中庸
#define NATURE_RELAXED  7 // +防御 -速度
#define NATURE_IMPISH   8 // +防御 -特攻
#define NATURE_LAX      9 // +防御 -特防
#define NATURE_TIMID    10 // +速度 -攻击
#define NATURE_HASTY    11 // +速度 -防御
#define NATURE_SERIOUS  12 // 中庸
#define NATURE_JOLLY    13 // +速度 -特攻
#define NATURE_NAIVE    14 // +速度 -特防
#define NATURE_MODEST   15 // +特攻 -攻击
#define NATURE_MILD     16 // +特攻 -防御
#define NATURE_QUIET    17 // +特攻 -速度
#define NATURE_BASHFUL  18 // 中庸
#define NATURE_RASH     19 // +特攻 -特防
#define NATURE_CALM     20 // +特防 -攻击
#define NATURE_GENTLE   21 // +特防 -防御
#define NATURE_SASSY    22 // +特防 -速度
#define NATURE_CAREFUL  23 // +特防 -特攻
#define NATURE_QUIRKY   24 // 中庸
#define NUM_NATURES     25 // 性格总数

// 宝可梦属性
#define STAT_HP      0 // 生命值
#define STAT_ATK     1 // 攻击
#define STAT_DEF     2 // 防御
#define STAT_SPEED   3 // 速度
#define STAT_SPATK   4 // 特殊攻击
#define STAT_SPDEF   5 // 特殊防御
#define NUM_STATS    6 // 属性总数

#define STAT_ACC     6 // 只在战斗中使用（命中率）
#define STAT_EVASION 7 // 只在战斗中使用（闪避率）

#define NUM_NATURE_STATS (NUM_STATS - 1) // 排除生命值
#define NUM_BATTLE_STATS (NUM_STATS + 2) // 包括命中率和闪避率

#define MIN_STAT_STAGE     0 // 最低属性阶段
#define DEFAULT_STAT_STAGE 6 // 默认属性阶段
#define MAX_STAT_STAGE    12 // 最高属性阶段

// 闪光宝可梦的概率
#define SHINY_ODDS 8 // 实际概率是 SHINY_ODDS/65536

// 电视和宝可梦导航使用的缎带 ID
#define CHAMPION_RIBBON       0  // 冠军缎带
#define COOL_RIBBON_NORMAL    1  // 冷静缎带（普通）
#define COOL_RIBBON_SUPER     2  // 冷静缎带（超级）
#define COOL_RIBBON_HYPER     3  // 冷静缎带（超级+）
#define COOL_RIBBON_MASTER    4  // 冷静缎带（大师）
#define BEAUTY_RIBBON_NORMAL  5  // 美丽缎带（普通）
#define BEAUTY_RIBBON_SUPER   6  // 美丽缎带（超级）
#define BEAUTY_RIBBON_HYPER   7  // 美丽缎带（超级+）
#define BEAUTY_RIBBON_MASTER  8  // 美丽缎带（大师）
#define CUTE_RIBBON_NORMAL    9  // 可爱缎带（普通）
#define CUTE_RIBBON_SUPER    10  // 可爱缎带（超级）
#define CUTE_RIBBON_HYPER    11  // 可爱缎带（超级+）
#define CUTE_RIBBON_MASTER   12  // 可爱缎带（大师）
#define SMART_RIBBON_NORMAL  13  // 聪明缎带（普通）
#define SMART_RIBBON_SUPER   14  // 聪明缎带（超级）
#define SMART_RIBBON_HYPER   15  // 聪明缎带（超级+）
#define SMART_RIBBON_MASTER  16  // 聪明缎带（大师）
#define TOUGH_RIBBON_NORMAL  17  // 强韧缎带（普通）
#define TOUGH_RIBBON_SUPER   18  // 强韧缎带（超级）
#define TOUGH_RIBBON_HYPER   19  // 强韧缎带（超级+）
#define TOUGH_RIBBON_MASTER  20  // 强韧缎带（大师）
#define WINNING_RIBBON       21  // 胜利缎带
#define VICTORY_RIBBON       22  // 凯旋缎带
#define ARTIST_RIBBON        23  // 艺术缎带
#define EFFORT_RIBBON        24  // 努力缎带
#define MARINE_RIBBON        25  // 海洋缎带
#define LAND_RIBBON          26  // 陆地缎带
#define SKY_RIBBON           27  // 天空缎带
#define COUNTRY_RIBBON       28  // 乡镇缎带
#define NATIONAL_RIBBON      29  // 国家缎带
#define EARTH_RIBBON         30  // 地球缎带
#define WORLD_RIBBON         31  // 世界缎带

#define FIRST_GIFT_RIBBON MARINE_RIBBON
#define LAST_GIFT_RIBBON  WORLD_RIBBON
#define NUM_GIFT_RIBBONS  (1 + LAST_GIFT_RIBBON - FIRST_GIFT_RIBBON)

// 上述礼物缎带（海洋 - 世界）是
// 特殊分配缎带，每个缎带在宝可梦结构中对应1位。第四代硬编码
// 每个缎带为给定名称。在第三代中，它们用于获取保存块中的 giftRibbons 索引，
// 其值为 0-64（0 表示“无缎带”），对应于
// gGiftRibbonDescriptionPointers 中列出的特殊缎带。这些缎带中的大多数
// 都没有被分发
#define MAX_GIFT_RIBBON 64

#define MIN_LEVEL 1
#define MAX_LEVEL 100

#define MAX_DYNAMAX_LEVEL 10

#define OT_ID_PLAYER_ID       0  // 玩家ID
#define OT_ID_PRESET          1  // 预设ID
#define OT_ID_RANDOM_NO_SHINY 2  // 随机ID（不闪光）

#define MON_GIVEN_TO_PARTY      0  // 宝可梦交给队伍
#define MON_GIVEN_TO_PC         1  // 宝可梦交给电脑
#define MON_CANT_GIVE           2  // 无法给予宝可梦

// 玩家宝可梦数量状态
#define PLAYER_HAS_TWO_USABLE_MONS     0  // 玩家有两只可用的宝可梦
#define PLAYER_HAS_ONE_MON             1  // 玩家只有一只宝可梦
#define PLAYER_HAS_ONE_USABLE_MON      2  // 玩家有一只可用的宝可梦

// 招式学习相关常量
#define MON_ALREADY_KNOWS_MOVE  0xFFFE  // 宝可梦已经知道该招式
#define MON_HAS_MAX_MOVES       0xFFFF  // 宝可梦已经学会了最大数量的招式

// 等级提升招式相关常量
#define LEVEL_UP_MOVE_ID   0x01FF  // 等级提升招式的ID掩码
#define LEVEL_UP_MOVE_LV   0xFE00  // 等级提升招式的等级掩码
#define LEVEL_UP_MOVE_END  0xFFFF  // 等级提升招式数组的结束标志

// 等级提升和重新学习招式的最大数量
#define MAX_LEVEL_UP_MOVES       20  // 等级提升招式的最大数量
#define MAX_RELEARNER_MOVES      max(MAX_LEVEL_UP_MOVES, 25)  // 重新学习招式的最大数量

// 宝可梦性别常量
#define MON_MALE       0x00  // 雄性
#define MON_FEMALE     0xFE  // 雌性
#define MON_GENDERLESS 0xFF  // 无性别

// 亲密度调整事件常量
#define FRIENDSHIP_EVENT_GROW_LEVEL       0  // 宝可梦升级
#define FRIENDSHIP_EVENT_VITAMIN          1  // 使用维生素（未使用，由 PokemonUseItemEffects 处理）
#define FRIENDSHIP_EVENT_BATTLE_ITEM      2  // 使用战斗道具（未使用，由 PokemonUseItemEffects 处理）
#define FRIENDSHIP_EVENT_LEAGUE_BATTLE    3  // 联盟战斗
#define FRIENDSHIP_EVENT_LEARN_TMHM       4  // 学习 TM/HM
#define FRIENDSHIP_EVENT_WALKING          5  // 行走
#define FRIENDSHIP_EVENT_FAINT_SMALL      6  // 战斗中因对手等级较低而倒下
#define FRIENDSHIP_EVENT_FAINT_FIELD_PSN  7  // 在野外因中毒倒下
#define FRIENDSHIP_EVENT_FAINT_LARGE      8  // 如果对手等级 ≥ 30 级别更高，则倒下。参见 AdjustFriendshipOnBattleFaint

// 获取领队宝可梦亲密度评分的常量
#define FRIENDSHIP_NONE        0  // 亲密度 0
#define FRIENDSHIP_1_TO_49     1  // 亲密度 1-49
#define FRIENDSHIP_50_TO_99    2  // 亲密度 50-99
#define FRIENDSHIP_100_TO_149  3  // 亲密度 100-149
#define FRIENDSHIP_150_TO_199  4  // 亲密度 150-199
#define FRIENDSHIP_200_TO_254  5  // 亲密度 200-254
#define FRIENDSHIP_MAX         6  // 最大亲密度

// 根据亲密度值获取对战宝可梦亲密度心形数量的常量
#define AFFECTION_NO_HEARTS     0  // 亲密度 0-79
#define AFFECTION_ONE_HEART     1  // 亲密度 80-129
#define AFFECTION_TWO_HEARTS    2  // 亲密度 130-179
#define AFFECTION_THREE_HEARTS  3  // 亲密度 180-219
#define AFFECTION_FOUR_HEARTS   4  // 亲密度 220-254
#define AFFECTION_FIVE_HEARTS   5  // 最大亲密度

// 大多数宝可梦使用的亲密度值。
#define STANDARD_FRIENDSHIP ((P_UPDATED_FRIENDSHIP >= GEN_8) ? 50 : 70)

#define MAX_FRIENDSHIP  255  // 最大亲密度
#define MAX_SHEEN       255  // 最大光泽值
#define MAX_CONDITION   255  // 最大状态值

#define MAX_PER_STAT_IVS 31  // 每个属性的最大个体值
#define MAX_IV_MASK 31       // 个体值的最大掩码
#define USE_RANDOM_IVS (MAX_PER_STAT_IVS + 1)  // 使用随机个体值
#define MAX_PER_STAT_EVS ((P_EV_CAP >= GEN_6) ? 252 : 255)  // 每个属性的最大努力值
#define MAX_TOTAL_EVS 510    // 最大总努力值
#define EV_ITEM_RAISE_LIMIT ((I_VITAMIN_EV_CAP >= GEN_8) ? MAX_PER_STAT_EVS : 100)  // 努力值提升道具的最大提升限制

// 招式分类定义。
#define DAMAGE_CATEGORY_PHYSICAL    0  // 物理伤害
#define DAMAGE_CATEGORY_SPECIAL     1  // 特殊伤害
#define DAMAGE_CATEGORY_STATUS      2  // 状态效果

// 成长速率
#define GROWTH_MEDIUM_FAST  0  // 中速成长
#define GROWTH_ERRATIC      1  // 反常成长
#define GROWTH_FLUCTUATING  2  // 波动成长
#define GROWTH_MEDIUM_SLOW  3  // 中慢成长
#define GROWTH_FAST         4  // 快速成长
#define GROWTH_SLOW         5  // 慢速成长

// 宝可梦图鉴搜索的身体颜色
#define BODY_COLOR_RED      0  // 红色
#define BODY_COLOR_BLUE     1  // 蓝色
#define BODY_COLOR_YELLOW   2  // 黄色
#define BODY_COLOR_GREEN    3  // 绿色
#define BODY_COLOR_BLACK    4  // 黑色
#define BODY_COLOR_BROWN    5  // 棕色
#define BODY_COLOR_PURPLE   6  // 紫色
#define BODY_COLOR_GRAY     7  // 灰色
#define BODY_COLOR_WHITE    8  // 白色
#define BODY_COLOR_PINK     9  // 粉色

#define F_SUMMARY_SCREEN_FLIP_SPRITE 0x80  // 摘要屏幕翻转精灵标志

#define EVOLUTIONS_END                    0xFFFF // 不是真正的进化，用于标记进化数组的结束。

// 宝可梦进化方式枚举
enum EvolutionMethods {
    EVO_NONE,                            // 不是真正的进化，用于生成无法进化成指定宝可梦的后代，例如地区形态。
    EVO_FRIENDSHIP,                      // 宝可梦升级时亲密度 ≥ 220
    EVO_FRIENDSHIP_DAY,                  // 宝可梦在白天升级时亲密度 ≥ 220
    EVO_FRIENDSHIP_NIGHT,                // 宝可梦在夜晚升级时亲密度 ≥ 220
    EVO_LEVEL,                           // 宝可梦达到指定等级
    EVO_TRADE,                           // 宝可梦被交易
    EVO_TRADE_ITEM,                      // 宝可梦携带指定道具时被交易
    EVO_ITEM,                            // 使用指定道具对宝可梦生效
    EVO_LEVEL_ATK_GT_DEF,                // 宝可梦达到指定等级且攻击 > 防御
    EVO_LEVEL_ATK_EQ_DEF,                // 宝可梦达到指定等级且攻击 = 防御
    EVO_LEVEL_ATK_LT_DEF,                // 宝可梦达到指定等级且攻击 < 防御
    EVO_LEVEL_SILCOON,                   // 宝可梦达到指定等级且具有银茧个性值
    EVO_LEVEL_CASCOON,                   // 宝可梦达到指定等级且具有金茧个性值
    EVO_LEVEL_NINJASK,                   // 宝可梦达到指定等级（忍者蛇的特殊值）
    EVO_LEVEL_SHEDINJA,                  // 宝可梦达到指定等级（谢米的特殊值）
    EVO_BEAUTY,                          // 宝可梦升级时美丽值 ≥ 指定值
    EVO_LEVEL_FEMALE,                    // 宝可梦达到指定等级且为雌性
    EVO_LEVEL_MALE,                      // 宝可梦达到指定等级且为雄性
    EVO_LEVEL_NIGHT,                     // 宝可梦达到指定等级且为夜晚
    EVO_LEVEL_DAY,                       // 宝可梦达到指定等级且为白天
    EVO_LEVEL_DUSK,                      // 宝可梦达到指定等级且为黄昏（下午5-6点）
    EVO_ITEM_HOLD_DAY,                   // 宝可梦在白天升级且携带指定道具
    EVO_ITEM_HOLD_NIGHT,                 // 宝可梦在夜晚升级且携带指定道具
    EVO_MOVE,                            // 宝可梦升级且知道指定招式
    EVO_FRIENDSHIP_MOVE_TYPE,            // 宝可梦升级时亲密度 ≥ 220 且知道指定类型的招式
    EVO_MAPSEC,                          // 宝可梦在指定地图区域升级
    EVO_ITEM_MALE,                       // 使用指定道具对雄性宝可梦生效
    EVO_ITEM_FEMALE,                     // 使用指定道具对雌性宝可梦生效
    EVO_LEVEL_RAIN,                      // 宝可梦在雨天达到指定等级
    EVO_SPECIFIC_MON_IN_PARTY,           // 宝可梦升级时队伍中有指定宝可梦
    EVO_LEVEL_DARK_TYPE_MON_IN_PARTY,    // 宝可梦达到指定等级且队伍中有黑暗系宝可梦
    EVO_TRADE_SPECIFIC_MON,              // 宝可梦与指定宝可梦交换
    EVO_SPECIFIC_MAP,                    // 宝可梦在指定地图升级
    EVO_LEVEL_NATURE_AMPED,              // 宝可梦达到指定等级且具有 Hardy、Brave、Adamant、Naughty、Docile、Impish、Lax、Hasty、Jolly、Naive、Rash、Sassy 或 Quirky 性格。
    EVO_LEVEL_NATURE_LOW_KEY,            // 宝可梦达到指定等级且具有 Lonely、Bold、Relaxed、Timid、Serious、Modest、Mild、Quiet、Bashful、Calm、Gentle 或 Careful 性格。
    EVO_CRITICAL_HITS,                   // 宝可梦在一战中造成指定次数的暴击
    EVO_SCRIPT_TRIGGER_DMG,              // 宝可梦的 HP 低于最大值的指定比例，然后玩家触发交互
    EVO_DARK_SCROLL,                     // 与黑暗卷轴交互
    EVO_WATER_SCROLL,                    // 与水之卷轴交互
    EVO_ITEM_NIGHT,                      // 在夜晚使用指定道具对宝可梦生效
    EVO_ITEM_DAY,                        // 在白天使用指定道具对宝可梦生效
    EVO_ITEM_HOLD,                       // 宝可梦升级且携带指定道具
    EVO_LEVEL_FOG,                       // 宝可梦在雾天达到指定等级
    EVO_MOVE_TWO_SEGMENT,                // 宝可梦升级且知道指定招式，且个性值模数为 0
    EVO_MOVE_THREE_SEGMENT,              // 宝可梦升级且知道指定招式，且个性值模数为 1-99
    EVO_LEVEL_FAMILY_OF_THREE,           // 宝可梦在战斗中达到指定等级，且个性值模数为 0
    EVO_LEVEL_FAMILY_OF_FOUR,            // 宝可梦在战斗中达到指定等级，且个性值模数为 1-99
    EVO_USE_MOVE_TWENTY_TIMES,           // 宝可梦升级后使用指定招式至少 20 次
    EVO_RECOIL_DAMAGE_MALE,              // 宝可梦作为雄性升级后承受指定量的非致命反冲伤害
    EVO_RECOIL_DAMAGE_FEMALE,            // 宝可梦作为雌性升级后承受指定量的非致命反冲伤害
    EVO_ITEM_COUNT_999,                  // 训练师收集了 999 个指定道具后宝可梦升级
    EVO_DEFEAT_THREE_WITH_ITEM,          // 宝可梦击败了 3 只携带指定道具的同种宝可梦后升级
    EVO_OVERWORLD_STEPS,                 // 宝可梦在大世界中走了指定步数后升级
};

enum EvolutionMode {
    EVO_MODE_NORMAL,
    EVO_MODE_CANT_STOP,
    EVO_MODE_TRADE,
    EVO_MODE_ITEM_USE,
    EVO_MODE_ITEM_CHECK,         // If an Everstone is being held, still want to show that the stone *could* be used on that Pokémon to evolve
    EVO_MODE_BATTLE_SPECIAL,
    EVO_MODE_OVERWORLD_SPECIAL,
    EVO_MODE_BATTLE_ONLY,        // This mode is only used in battles to support Tandemaus' unique requirement
};

#define MON_PIC_WIDTH 64
#define MON_PIC_HEIGHT 64
#define MON_PIC_SIZE (MON_PIC_WIDTH * MON_PIC_HEIGHT / 2)

// Most Pokémon have 2 frames (a default and an alternate for their animation).
// There are 4 exceptions:
// - Deoxys has 2 frames, 1 for each form
// - Spinda has 1 frame, presumably to avoid the work of animating its spots
// - Unown has 1 frame, presumably to avoid the work of animating all 28 of its forms
#define MAX_MON_PIC_FRAMES 2

#define BATTLE_ALIVE_EXCEPT_BATTLER      0
#define BATTLE_ALIVE_EXCEPT_BATTLER_SIDE 1
#define BATTLE_ALIVE_SIDE                2

#define SKIP_FRONT_ANIM (1 << 7)

#define NUM_ABILITY_SLOTS (NUM_NORMAL_ABILITY_SLOTS + NUM_HIDDEN_ABILITY_SLOTS)
#define NUM_NORMAL_ABILITY_SLOTS 2
#define NUM_HIDDEN_ABILITY_SLOTS 1

// Used as a signal for givemon to generate a default ability by personality.
#define NUM_ABILITY_PERSONALITY 0xFF

#if P_LEGENDARY_PERFECT_IVS >= GEN_6
#define LEGENDARY_PERFECT_IV_COUNT 3
#else
#define LEGENDARY_PERFECT_IV_COUNT 0
#endif

#endif // GUARD_CONSTANTS_POKEMON_H
