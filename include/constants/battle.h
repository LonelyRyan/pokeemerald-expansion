#ifndef GUARD_CONSTANTS_BATTLE_H
#define GUARD_CONSTANTS_BATTLE_H

/*
 * 宝可梦在战场上可能处于四个位置之一。第一位（最低位）决定宝可梦处于哪一方，是玩家方还是对手方。
 * 第二位决定宝可梦处于哪一侧，是左侧还是右侧。
 * 注意，对手的两侧是从对手的视角绘制的，因此他们的右侧宝可梦出现在左侧，而他们的左侧宝可梦出现在右侧。
 * 宝可梦的ID通常与其位置相同，但在链接对战中可能有所不同。
 *
 *   + ------------------------- +
 *   |           对手方           |
 *   |           右侧     左侧    |
 *   |             3       1     |
 *   |                           |
 *   | 玩家方                     |
 *   |  左侧     右侧             |
 *   |   0       2               |
 *   ----------------------------+
 *   |                           |
 *   |                           |
 *   +---------------------------+
 */

// 定义最大宝可梦数量
#define MAX_BATTLERS_COUNT  4

// 定义宝可梦的位置
#define B_POSITION_PLAYER_LEFT        0  // 玩家方左侧宝可梦
#define B_POSITION_OPPONENT_LEFT      1  // 对手方左侧宝可梦
#define B_POSITION_PLAYER_RIGHT       2  // 玩家方右侧宝可梦
#define B_POSITION_OPPONENT_RIGHT     3  // 对手方右侧宝可梦

// 这些宏可以用于宝可梦ID或位置，以获取伙伴或对面的宝可梦
#define BATTLE_OPPOSITE(id) ((id) ^ BIT_SIDE)  // 获取对面的宝可梦
#define BATTLE_PARTNER(id) ((id) ^ BIT_FLANK)  // 获取伙伴宝可梦

// 定义宝可梦的阵营
#define B_SIDE_PLAYER     0  // 玩家阵营
#define B_SIDE_OPPONENT   1  // 对手阵营
#define NUM_BATTLE_SIDES  2  // 战斗阵营总数

// 定义宝可梦的侧翼
#define B_FLANK_LEFT  0  // 左侧
#define B_FLANK_RIGHT 1  // 右侧

// 定义阵营和侧翼的位掩码
#define BIT_SIDE        1  // 阵营位掩码
#define BIT_FLANK       2  // 侧翼位掩码

// 战斗类型标志
#define BATTLE_TYPE_DOUBLE             (1 << 0)  // 双打战斗
#define BATTLE_TYPE_LINK               (1 << 1)  // 链接对战
#define BATTLE_TYPE_IS_MASTER          (1 << 2)  // 非链接对战时始终设置
#define BATTLE_TYPE_TRAINER            (1 << 3)  // 训练家战斗
#define BATTLE_TYPE_FIRST_BATTLE       (1 << 4)  // 首次战斗
#define BATTLE_TYPE_LINK_IN_BATTLE     (1 << 5)  // 进入战斗时设置，退出战斗时清除
#define BATTLE_TYPE_MULTI              (1 << 6)  // 多人战斗
#define BATTLE_TYPE_SAFARI             (1 << 7)  // 萨菲力战斗
#define BATTLE_TYPE_BATTLE_TOWER       (1 << 8)  // 对战塔
#define BATTLE_TYPE_WALLY_TUTORIAL     (1 << 9)  // 沃利教程（在 pokefirered 中为 BATTLE_TYPE_OLD_MAN_TUTORIAL）
#define BATTLE_TYPE_ROAMER             (1 << 10) // 流浪宝可梦战斗
#define BATTLE_TYPE_EREADER_TRAINER    (1 << 11) // 电子阅读器训练家战斗
#define BATTLE_TYPE_RAID               (1 << 12) // 劫掠战斗
#define BATTLE_TYPE_LEGENDARY          (1 << 13) // 传说宝可梦战斗
#define BATTLE_TYPE_14                 (1 << 14) // 未定义
#define BATTLE_TYPE_TWO_OPPONENTS      (1 << 15) // 两个对手（在 pokefirered 中为 BATTLE_TYPE_GHOST）
#define BATTLE_TYPE_DOME               (1 << 16) // 圆顶战斗（在 pokefirered 中为 BATTLE_TYPE_POKEDUDE）
#define BATTLE_TYPE_PALACE             (1 << 17) // 宫殿战斗（在 pokefirered 中为 BATTLE_TYPE_WILD_SCRIPTED）
#define BATTLE_TYPE_ARENA              (1 << 18) // 竞技场战斗（在 pokefirered 中为 BATTLE_TYPE_LEGENDARY_FRLG）
#define BATTLE_TYPE_FACTORY            (1 << 19) // 工厂战斗（在 pokefirered 中为 BATTLE_TYPE_TRAINER_TOWER）
#define BATTLE_TYPE_PIKE               (1 << 20) // 尖塔战斗
#define BATTLE_TYPE_PYRAMID            (1 << 21) // 金字塔战斗
#define BATTLE_TYPE_INGAME_PARTNER     (1 << 22) // 游戏内伙伴战斗
#define BATTLE_TYPE_TOWER_LINK_MULTI   (1 << 23) // 对战塔链接多人战斗
#define BATTLE_TYPE_RECORDED           (1 << 24) // 记录战斗
#define BATTLE_TYPE_RECORDED_LINK      (1 << 25) // 记录链接战斗
#define BATTLE_TYPE_TRAINER_HILL       (1 << 26) // 训练家山战斗
#define BATTLE_TYPE_SECRET_BASE        (1 << 27) // 秘密基地战斗
#define BATTLE_TYPE_28                 (1 << 28) // 未定义
#define BATTLE_TYPE_29                 (1 << 29) // 未定义
#define BATTLE_TYPE_30                 (1 << 30) // 未定义
#define BATTLE_TYPE_RECORDED_IS_MASTER (1 << 31) // 记录战斗是否为主机
// 定义对战前沿的战斗类型
#define BATTLE_TYPE_FRONTIER                (BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_DOME | BATTLE_TYPE_PALACE | BATTLE_TYPE_ARENA | BATTLE_TYPE_FACTORY | BATTLE_TYPE_PIKE | BATTLE_TYPE_PYRAMID)
#define BATTLE_TYPE_FRONTIER_NO_PYRAMID     (BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_DOME | BATTLE_TYPE_PALACE | BATTLE_TYPE_ARENA | BATTLE_TYPE_FACTORY | BATTLE_TYPE_PIKE)
#define BATTLE_TYPE_RECORDED_INVALID        ((BATTLE_TYPE_LINK | BATTLE_TYPE_SAFARI | BATTLE_TYPE_FIRST_BATTLE                  \
                                             | BATTLE_TYPE_WALLY_TUTORIAL | BATTLE_TYPE_ROAMER | BATTLE_TYPE_EREADER_TRAINER    \
                                             | BATTLE_TYPE_LEGENDARY                                                            \
                                             | BATTLE_TYPE_RECORDED | BATTLE_TYPE_TRAINER_HILL | BATTLE_TYPE_SECRET_BASE))

// 野生双打战斗的条件
#define WILD_DOUBLE_BATTLE ((gBattleTypeFlags & BATTLE_TYPE_DOUBLE && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_TRAINER))))
// 记录的野生战斗的条件
#define RECORDED_WILD_BATTLE ((gBattleTypeFlags & BATTLE_TYPE_RECORDED) && !(gBattleTypeFlags & (BATTLE_TYPE_TRAINER | BATTLE_TYPE_FRONTIER)))
// 一对二的对手战斗的条件
#define BATTLE_TWO_VS_ONE_OPPONENT ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && gTrainerBattleOpponent_B == 0xFFFF))
// 定义具有 AI 的战斗类型
#define BATTLE_TYPE_HAS_AI          (BATTLE_TYPE_TRAINER | BATTLE_TYPE_FIRST_BATTLE | BATTLE_TYPE_SAFARI | BATTLE_TYPE_ROAMER | BATTLE_TYPE_INGAME_PARTNER)

// 战斗结果的定义
#define B_OUTCOME_WON                  1  // 获胜
#define B_OUTCOME_LOST                 2  // 失败
#define B_OUTCOME_DREW                 3  // 平局
#define B_OUTCOME_RAN                  4  // 逃跑
#define B_OUTCOME_PLAYER_TELEPORTED    5  // 玩家传送
#define B_OUTCOME_MON_FLED             6  // 宝可梦逃跑
#define B_OUTCOME_CAUGHT               7  // 捕获
#define B_OUTCOME_NO_SAFARI_BALLS      8  // 萨菲力球用尽
#define B_OUTCOME_FORFEITED            9  // 放弃
#define B_OUTCOME_MON_TELEPORTED       10 // 宝可梦传送
#define B_OUTCOME_LINK_BATTLE_RAN      (1 << 7) // 128  // 链接对战中逃跑

// 非挥发性状态条件
// 这些状态在战斗之外和切换宝可梦后仍然存在。
// 如果在这里添加新的 STATUS1，也应该将其添加到 src/pokemon.c 中的 sCompressedStatuses，
// 否则它将在战斗之外丢失。
#define STATUS1_NONE             0  // 无状态
#define STATUS1_SLEEP            (1 << 0 | 1 << 1 | 1 << 2) // 前3位（睡眠回合数）
#define STATUS1_SLEEP_TURN(num)  ((num) << 0) // 仅为了可读性（或如果重新排列状态）
#define STATUS1_POISON           (1 << 3) // 中毒
#define STATUS1_BURN             (1 << 4) // 烧伤
#define STATUS1_FREEZE           (1 << 5) // 冻结
#define STATUS1_PARALYSIS        (1 << 6) // 麻痹
#define STATUS1_TOXIC_POISON     (1 << 7) // 剧毒
#define STATUS1_TOXIC_COUNTER    (1 << 8 | 1 << 9 | 1 << 10 | 1 << 11) // 剧毒计数器（4位）
#define STATUS1_TOXIC_TURN(num)  ((num) << 8) // 剧毒回合数
#define STATUS1_FROSTBITE        (1 << 12) // 冻伤
#define STATUS1_PSN_ANY          (STATUS1_POISON | STATUS1_TOXIC_POISON) // 任何形式的中毒
#define STATUS1_ANY              (STATUS1_SLEEP | STATUS1_POISON | STATUS1_BURN | STATUS1_FREEZE | STATUS1_PARALYSIS | STATUS1_TOXIC_POISON | STATUS1_FROSTBITE) // 任何状态

#define STATUS1_REFRESH          (STATUS1_POISON | STATUS1_BURN | STATUS1_PARALYSIS | STATUS1_TOXIC_POISON | STATUS1_FROSTBITE) // 可刷新的状态

// 挥发性状态疾病
// 这些状态在退出战斗或切换宝可梦后被移除
#define STATUS2_CONFUSION             (1 << 0 | 1 << 1 | 1 << 2) // 混乱（前3位，混乱回合数）
#define STATUS2_CONFUSION_TURN(num)   ((num) << 0) // 混乱回合数
#define STATUS2_FLINCHED              (1 << 3) // 闪避
#define STATUS2_UPROAR                (1 << 4 | 1 << 5 | 1 << 6) // 喧哗（3位，喧哗回合数）
#define STATUS2_UPROAR_TURN(num)      ((num) << 4) // 喧哗回合数
#define STATUS2_TORMENT               (1 << 7) // 痛苦
#define STATUS2_BIDE                  (1 << 8 | 1 << 9) // 忍耐（2位）
#define STATUS2_BIDE_TURN(num)        (((num) << 8) & STATUS2_BIDE) // 忍耐回合数
#define STATUS2_LOCK_CONFUSE          (1 << 10 | 1 << 11) // 锁定混乱（例如，狂暴）
#define STATUS2_LOCK_CONFUSE_TURN(num)((num) << 10) // 锁定混乱回合数
#define STATUS2_MULTIPLETURNS         (1 << 12) // 多回合招式
#define STATUS2_WRAPPED               (1 << 13) // 绑缚
#define STATUS2_POWDER                (1 << 14) // 粉尘
#define STATUS2_INFATUATION           (1 << 16 | 1 << 17 | 1 << 18 | 1 << 19)  // 迷恋（4位，每个宝可梦一位）
#define STATUS2_INFATUATED_WITH(battler) (1u << (battler + 16)) // 迷恋的对象
#define STATUS2_DEFENSE_CURL          (1 << 20) // 防御卷曲
#define STATUS2_TRANSFORMED           (1 << 21) // 变身
#define STATUS2_RECHARGE              (1 << 22) // 充电
#define STATUS2_RAGE                  (1 << 23) // 愤怒
#define STATUS2_SUBSTITUTE            (1 << 24) // 替身
#define STATUS2_DESTINY_BOND          (1 << 25) // 命运之结
#define STATUS2_ESCAPE_PREVENTION     (1 << 26) // 防止逃跑
#define STATUS2_NIGHTMARE             (1 << 27) // 恶梦
#define STATUS2_CURSED                (1 << 28) // 诅咒
#define STATUS2_FORESIGHT             (1 << 29) // 先见之明
#define STATUS2_DRAGON_CHEER          (1 << 30) // 龙之欢呼
#define STATUS2_FOCUS_ENERGY          (1 << 31) // 集中精力
#define STATUS2_FOCUS_ENERGY_ANY      (STATUS2_DRAGON_CHEER | STATUS2_FOCUS_ENERGY) // 任何形式的集中精力

// 第三类状态条件
#define STATUS3_LEECHSEED_BATTLER       (1 << 0 | 1 << 1) // 寄生种子吸取 HP 的宝可梦
#define STATUS3_LEECHSEED               (1 << 2) // 寄生种子状态
#define STATUS3_ALWAYS_HITS             (1 << 3 | 1 << 4) // 必中状态（2位，持续回合数）
#define STATUS3_ALWAYS_HITS_TURN(num)   (((num) << 3) & STATUS3_ALWAYS_HITS) // 必中状态的持续回合数
#define STATUS3_PERISH_SONG             (1 << 5) // 消失之歌状态
#define STATUS3_ON_AIR                  (1 << 6) // 在空中状态（例如飞行或跳跃）
#define STATUS3_UNDERGROUND             (1 << 7) // 在地下状态（例如挖洞）
#define STATUS3_MINIMIZED               (1 << 8) // 缩小状态
#define STATUS3_CHARGED_UP              (1 << 9) // 充电状态
#define STATUS3_ROOTED                  (1 << 10) // 根据大地状态
#define STATUS3_YAWN                    (1 << 11 | 1 << 12) // 打哈欠状态（2位，睡眠回合数）
#define STATUS3_YAWN_TURN(num)          (((num) << 11) & STATUS3_YAWN) // 打哈欠状态的睡眠回合数
#define STATUS3_IMPRISONED_OTHERS       (1 << 13) // 囚禁状态（其他宝可梦的招式被囚禁）
#define STATUS3_GRUDGE                  (1 << 14) // 怨恨状态
#define STATUS3_COMMANDER               (1 << 15) // 指挥官状态
#define STATUS3_GASTRO_ACID             (1 << 16) // 胃酸状态
#define STATUS3_EMBARGO                 (1 << 17) // 贸易禁运状态
#define STATUS3_UNDERWATER              (1 << 18) // 在水下状态
#define STATUS3_INTIMIDATE_POKES        (1 << 19) // 威吓状态（宝可梦被威吓）
#define STATUS3_TRACE                   (1 << 20) // 模仿状态
#define STATUS3_SMACKED_DOWN            (1 << 21) // 被击落状态
#define STATUS3_ME_FIRST                (1 << 22) // 我先状态
#define STATUS3_TELEKINESIS             (1 << 23) // 念力状态
#define STATUS3_PHANTOM_FORCE           (1 << 24) // 幻影力量状态
#define STATUS3_MIRACLE_EYED            (1 << 25) // 奇迹之眼状态
#define STATUS3_MAGNET_RISE             (1 << 26) // 磁力上升状态
#define STATUS3_HEAL_BLOCK              (1 << 27) // 治愈封锁状态
#define STATUS3_AQUA_RING               (1 << 28) // 水环状态
#define STATUS3_LASER_FOCUS             (1 << 29) // 激光专注状态
#define STATUS3_POWER_TRICK             (1 << 30) // 力量把戏状态
#define STATUS3_SKY_DROPPED             (1 << 31) // 被天空落下状态（Sky Drop 的目标）
// 半无敌状态（不包括指挥官）
#define STATUS3_SEMI_INVULNERABLE_NO_COMMANDER  (STATUS3_UNDERGROUND | STATUS3_ON_AIR | STATUS3_UNDERWATER | STATUS3_PHANTOM_FORCE)
// 半无敌状态（包括指挥官）
#define STATUS3_SEMI_INVULNERABLE       (STATUS3_SEMI_INVULNERABLE_NO_COMMANDER | STATUS3_COMMANDER)

// 第四类状态条件
#define STATUS4_ELECTRIFIED             (1 << 0) // 电击状态
#define STATUS4_MUD_SPORT               (1 << 1)    // 仅在 B_SPORT_TURNS < GEN_6 时使用
#define STATUS4_WATER_SPORT             (1 << 2)    // 仅在 B_SPORT_TURNS < GEN_6 时使用
#define STATUS4_INFINITE_CONFUSION      (1 << 3)    // 用于疯狂基因（Berserk Gene）
#define STATUS4_SALT_CURE               (1 << 4) // 盐疗状态
#define STATUS4_SYRUP_BOMB              (1 << 5) // 糖浆炸弹状态
#define STATUS4_GLAIVE_RUSH             (1 << 6) // 长枪冲刺状态

// Hitmarker 状态
#define HITMARKER_WAKE_UP_CLEAR         (1 << 4) // 醒来时清除。从未设置或检查。
#define HITMARKER_IGNORE_BIDE           (1 << 5) // 忽略忍耐
#define HITMARKER_DESTINYBOND           (1 << 6) // 命运之结
#define HITMARKER_NO_ANIMATIONS         (1 << 7)   // 从 battleSceneOff 设置。战斗中从未更改
#define HITMARKER_IGNORE_SUBSTITUTE     (1 << 8) // 忽略替身
#define HITMARKER_NO_ATTACKSTRING       (1 << 9) // 不显示攻击字符串
#define HITMARKER_ATTACKSTRING_PRINTED  (1 << 10) // 攻击字符串已打印
#define HITMARKER_NO_PPDEDUCT           (1 << 11) // 不扣除 PP
#define HITMARKER_SWAP_ATTACKER_TARGET  (1 << 12) // 交换攻击者和目标
#define HITMARKER_STATUS_ABILITY_EFFECT (1 << 13) // 状态能力效果
#define HITMARKER_SYNCHRONISE_EFFECT    (1 << 14) // 同步效果
#define HITMARKER_RUN                   (1 << 15) // 逃跑
#define HITMARKER_IGNORE_DISGUISE       (1 << 16) // 忽略伪装
#define HITMARKER_DISABLE_ANIMATION     (1 << 17)   // 在战斗脚本中禁用动画，例如 Bug Bite
// 由于对 UNDERGROUND/UNDERWATER/ON AIR 的处理方式改变，有3个空闲位
#define HITMARKER_UNABLE_TO_USE_MOVE    (1 << 19) // 无法使用招式
#define HITMARKER_PASSIVE_DAMAGE        (1 << 20) // 被动伤害
#define HITMARKER_DISOBEDIENT_MOVE      (1 << 21) // 不服从的招式
#define HITMARKER_PLAYER_FAINTED        (1 << 22) // 玩家方宝可梦倒下
#define HITMARKER_ALLOW_NO_PP           (1 << 23) // 允许无 PP
#define HITMARKER_GRUDGE                (1 << 24) // 怨恨
#define HITMARKER_OBEYS                 (1 << 25) // 服从
#define HITMARKER_NEVER_SET             (1 << 26) // 作为一组清除。从未设置或检查
#define HITMARKER_CHARGING              (1 << 27) // 充电
#define HITMARKER_FAINTED(battler)      (1u << (battler + 28)) // 宝可梦倒下
#define HITMARKER_FAINTED2(battler)     HITMARKER_FAINTED(battler) // 宝可梦倒下（别名）
#define HITMARKER_STRING_PRINTED        (1 << 29) // 字符串已打印

// 影响整个队伍的每方状态
#define SIDE_STATUS_REFLECT                 (1 << 0) // 反射盾
#define SIDE_STATUS_LIGHTSCREEN             (1 << 1) // 光墙
#define SIDE_STATUS_STICKY_WEB              (1 << 2) // 粘性网
#define SIDE_STATUS_SPIKES                  (1 << 4) // 尖石阵
#define SIDE_STATUS_SAFEGUARD               (1 << 5) // 保护墙
#define SIDE_STATUS_FUTUREATTACK            (1 << 6) // 未来预知
#define SIDE_STATUS_MIST                    (1 << 8) // 雾
// (1 << 9) 以前是 SIDE_STATUS_SPIKES_DAMAGED
#define SIDE_STATUS_TAILWIND                (1 << 10) // 尾风
#define SIDE_STATUS_AURORA_VEIL             (1 << 11) // 极光幕
#define SIDE_STATUS_LUCKY_CHANT             (1 << 12) // 幸运咒语
#define SIDE_STATUS_TOXIC_SPIKES            (1 << 13) // 毒尖石阵
#define SIDE_STATUS_STEALTH_ROCK            (1 << 14) // 岩石封锁
// 缺失的标志以前是 SIDE_STATUS_TOXIC_SPIKES_DAMAGED, SIDE_STATUS_STEALTH_ROCK_DAMAGED, SIDE_STATUS_STICKY_WEB_DAMAGED
#define SIDE_STATUS_QUICK_GUARD             (1 << 18) // 快速护卫
#define SIDE_STATUS_WIDE_GUARD              (1 << 19) // 广域护卫
#define SIDE_STATUS_CRAFTY_SHIELD           (1 << 20) // 狡猾护盾
#define SIDE_STATUS_MAT_BLOCK               (1 << 21) // 垫子阻挡
#define SIDE_STATUS_STEELSURGE              (1 << 22) // 钢铁浪潮
#define SIDE_STATUS_DAMAGE_NON_TYPES        (1 << 23) // 非属性伤害
#define SIDE_STATUS_RAINBOW                 (1 << 24) // 彩虹
#define SIDE_STATUS_SEA_OF_FIRE             (1 << 25) // 火海
#define SIDE_STATUS_SWAMP                   (1 << 26) // 沼泽

#define SIDE_STATUS_HAZARDS_ANY    (SIDE_STATUS_SPIKES | SIDE_STATUS_STICKY_WEB | SIDE_STATUS_TOXIC_SPIKES | SIDE_STATUS_STEALTH_ROCK | SIDE_STATUS_STEELSURGE) // 任何场地障碍
#define SIDE_STATUS_SCREEN_ANY     (SIDE_STATUS_REFLECT | SIDE_STATUS_LIGHTSCREEN | SIDE_STATUS_AURORA_VEIL) // 任何屏幕
#define SIDE_STATUS_PLEDGE_ANY     (SIDE_STATUS_RAINBOW | SIDE_STATUS_SEA_OF_FIRE | SIDE_STATUS_SWAMP) // 任何誓言效果

// 影响整个场地的状态
#define STATUS_FIELD_MAGIC_ROOM                     (1 << 0) // 魔法空间
#define STATUS_FIELD_TRICK_ROOM                     (1 << 1) // 戏法空间
#define STATUS_FIELD_WONDER_ROOM                    (1 << 2) // 奇异空间
#define STATUS_FIELD_MUDSPORT                       (1 << 3) // 泥浆运动
#define STATUS_FIELD_WATERSPORT                     (1 << 4) // 水运动
#define STATUS_FIELD_GRAVITY                        (1 << 5) // 重力
#define STATUS_FIELD_GRASSY_TERRAIN                 (1 << 6) // 草地场地
#define STATUS_FIELD_MISTY_TERRAIN                  (1 << 7) // 雾场地
#define STATUS_FIELD_ELECTRIC_TERRAIN               (1 << 8) // 电场地
#define STATUS_FIELD_PSYCHIC_TERRAIN                (1 << 9) // 超能场地
#define STATUS_FIELD_ION_DELUGE                     (1 << 10) // 离子暴雨
#define STATUS_FIELD_FAIRY_LOCK                     (1 << 11) // 童话封锁
#define STATUS_FIELD_TERRAIN_PERMANENT              (1 << 12)   // 过世界雷暴产生电场地

#define STATUS_FIELD_TERRAIN_ANY        (STATUS_FIELD_GRASSY_TERRAIN | STATUS_FIELD_MISTY_TERRAIN | STATUS_FIELD_ELECTRIC_TERRAIN | STATUS_FIELD_PSYCHIC_TERRAIN) // 任何场地

// 描述招式结果的标志
#define MOVE_RESULT_MISSED                (1 << 0) // 招式未命中
#define MOVE_RESULT_SUPER_EFFECTIVE       (1 << 1) // 招式超级有效
#define MOVE_RESULT_NOT_VERY_EFFECTIVE    (1 << 2) // 招式效果不佳
#define MOVE_RESULT_DOESNT_AFFECT_FOE     (1 << 3) // 招式对对手无效
#define MOVE_RESULT_ONE_HIT_KO            (1 << 4) // 一击必杀
#define MOVE_RESULT_FAILED                (1 << 5) // 招式失败
#define MOVE_RESULT_FOE_ENDURED           (1 << 6) // 对手承受了伤害
#define MOVE_RESULT_FOE_HUNG_ON           (1 << 7) // 对手坚持住了
#define MOVE_RESULT_STURDIED              (1 << 8) // 对手坚如磐石
#define MOVE_RESULT_FOE_ENDURED_AFFECTION (1 << 9) // 对手承受了影响
#define MOVE_RESULT_NO_EFFECT             (MOVE_RESULT_MISSED | MOVE_RESULT_DOESNT_AFFECT_FOE | MOVE_RESULT_FAILED) // 招式无效果

// 战斗天气标志
#define B_WEATHER_NONE                0 // 无天气
#define B_WEATHER_RAIN_TEMPORARY      (1 << 0) // 临时雨
#define B_WEATHER_RAIN_DOWNPOUR       (1 << 1)  // 未使用
#define B_WEATHER_RAIN_PERMANENT      (1 << 2) // 持久雨
#define B_WEATHER_RAIN_PRIMAL         (1 << 3) // 原始雨
#define B_WEATHER_RAIN                (B_WEATHER_RAIN_TEMPORARY | B_WEATHER_RAIN_DOWNPOUR | B_WEATHER_RAIN_PERMANENT | B_WEATHER_RAIN_PRIMAL) // 雨
#define B_WEATHER_SANDSTORM_TEMPORARY (1 << 4) // 临时沙暴
#define B_WEATHER_SANDSTORM_PERMANENT (1 << 5) // 持久沙暴
#define B_WEATHER_SANDSTORM           (B_WEATHER_SANDSTORM_TEMPORARY | B_WEATHER_SANDSTORM_PERMANENT) // 沙暴
#define B_WEATHER_SUN_TEMPORARY       (1 << 6) // 临时阳光
#define B_WEATHER_SUN_PERMANENT       (1 << 7) // 持久阳光
#define B_WEATHER_SUN_PRIMAL          (1 << 8) // 原始阳光
#define B_WEATHER_SUN                 (B_WEATHER_SUN_TEMPORARY | B_WEATHER_SUN_PERMANENT | B_WEATHER_SUN_PRIMAL) // 阳光
#define B_WEATHER_HAIL_TEMPORARY      (1 << 9) // 临时冰雹
#define B_WEATHER_HAIL_PERMANENT      (1 << 10) // 持久冰雹
#define B_WEATHER_HAIL                (B_WEATHER_HAIL_TEMPORARY | B_WEATHER_HAIL_PERMANENT) // 冰雹
#define B_WEATHER_STRONG_WINDS        (1 << 11) // 强风
#define B_WEATHER_ANY                 (B_WEATHER_RAIN | B_WEATHER_SANDSTORM | B_WEATHER_SUN | B_WEATHER_HAIL | B_WEATHER_STRONG_WINDS | B_WEATHER_SNOW | B_WEATHER_FOG) // 任何天气
#define B_WEATHER_PRIMAL_ANY          (B_WEATHER_RAIN_PRIMAL | B_WEATHER_SUN_PRIMAL | B_WEATHER_STRONG_WINDS) // 任何原始天气
#define B_WEATHER_SNOW_TEMPORARY      (1 << 12) // 临时雪
#define B_WEATHER_SNOW_PERMANENT      (1 << 13) // 持久雪
#define B_WEATHER_SNOW                (B_WEATHER_SNOW_TEMPORARY | B_WEATHER_SNOW_PERMANENT) // 雪
#define B_WEATHER_FOG_TEMPORARY       (1 << 14) // 临时雾
#define B_WEATHER_FOG_PERMANENT       (1 << 15) // 持久雾
#define B_WEATHER_FOG                 (B_WEATHER_FOG_TEMPORARY | B_WEATHER_FOG_PERMANENT) // 雾

// 战斗天气作为枚举
#define ENUM_WEATHER_NONE                 0  // 无天气
#define ENUM_WEATHER_RAIN                 1  // 雨
#define ENUM_WEATHER_SUN                  2  // 阳光
#define ENUM_WEATHER_SANDSTORM            3  // 沙暴
#define ENUM_WEATHER_HAIL                 4  // 冰雹
#define ENUM_WEATHER_SUN_PRIMAL           5  // 原始阳光
#define ENUM_WEATHER_RAIN_PRIMAL          6  // 原始雨
#define ENUM_WEATHER_STRONG_WINDS         7  // 强风
#define ENUM_WEATHER_SNOW                 8  // 雪
#define ENUM_WEATHER_FOG                  9  // 雾

// 招式效果
#define MOVE_EFFECT_SLEEP               1  // 使目标陷入睡眠
#define MOVE_EFFECT_POISON              2  // 使目标中毒
#define MOVE_EFFECT_BURN                3  // 使目标烧伤
#define MOVE_EFFECT_FREEZE              4  // 使目标冻结
#define MOVE_EFFECT_PARALYSIS           5  // 使目标麻痹
#define MOVE_EFFECT_TOXIC               6  // 使目标剧毒
#define MOVE_EFFECT_FROSTBITE           7  // 使目标冻伤
#define PRIMARY_STATUS_MOVE_EFFECT      MOVE_EFFECT_FROSTBITE // 所有上述招式效果都属于主要状态
#if B_USE_FROSTBITE == TRUE
#define MOVE_EFFECT_FREEZE_OR_FROSTBITE MOVE_EFFECT_FROSTBITE
#else
#define MOVE_EFFECT_FREEZE_OR_FROSTBITE MOVE_EFFECT_FREEZE
#endif
#define MOVE_EFFECT_CONFUSION           8  // 使目标混乱
#define MOVE_EFFECT_FLINCH              9  // 使目标闪避
#define MOVE_EFFECT_TRI_ATTACK          10 // 三连攻击
#define MOVE_EFFECT_UPROAR              11  // 引起喧哗
#define MOVE_EFFECT_PAYDAY              12  // 获得金钱
#define MOVE_EFFECT_CHARGING            13  // 充电
#define MOVE_EFFECT_WRAP                14  // 绑缚
#define MOVE_EFFECT_ATK_PLUS_1          15  // 提升一级攻击力
#define MOVE_EFFECT_DEF_PLUS_1          16  // 提升一级防御力
#define MOVE_EFFECT_SPD_PLUS_1          17  // 提升一级速度
#define MOVE_EFFECT_SP_ATK_PLUS_1       18  // 提升一级特攻
#define MOVE_EFFECT_SP_DEF_PLUS_1       19  // 提升一级特防
#define MOVE_EFFECT_ACC_PLUS_1          20  // 提升一级命中率
#define MOVE_EFFECT_EVS_PLUS_1          21  // 提升一级回避率
#define MOVE_EFFECT_ATK_MINUS_1         22  // 降低一级攻击力
#define MOVE_EFFECT_DEF_MINUS_1         23  // 降低一级防御力
#define MOVE_EFFECT_SPD_MINUS_1         24  // 降低一级速度
#define MOVE_EFFECT_SP_ATK_MINUS_1      25  // 降低一级特攻
#define MOVE_EFFECT_SP_DEF_MINUS_1      26  // 降低一级特防
#define MOVE_EFFECT_ACC_MINUS_1         27  // 降低一级命中率
#define MOVE_EFFECT_EVS_MINUS_1         28  // 降低一级回避率
#define MOVE_EFFECT_REMOVE_ARG_TYPE     29  // 移除特定类型
#define MOVE_EFFECT_RECHARGE            30  // 充电
#define MOVE_EFFECT_RAGE                31  // 愤怒
#define MOVE_EFFECT_STEAL_ITEM          32  // 偷取道具
#define MOVE_EFFECT_PREVENT_ESCAPE      33  // 防止逃跑
#define MOVE_EFFECT_NIGHTMARE           34  // 恶梦
#define MOVE_EFFECT_ALL_STATS_UP        35  // 提升所有状态
#define MOVE_EFFECT_REMOVE_STATUS       36  // 移除状态
#define MOVE_EFFECT_ATK_DEF_DOWN        37  // 降低攻击力和防御力
#define MOVE_EFFECT_ATK_PLUS_2          38  // 提升两级攻击力
#define MOVE_EFFECT_DEF_PLUS_2          39  // 提升两级防御力
#define MOVE_EFFECT_SPD_PLUS_2          40  // 提升两级速度
#define MOVE_EFFECT_SP_ATK_PLUS_2       41  // 提升两级特攻
#define MOVE_EFFECT_SP_DEF_PLUS_2       42  // 提升两级特防
#define MOVE_EFFECT_ACC_PLUS_2          43  // 提升两级命中率
#define MOVE_EFFECT_EVS_PLUS_2          44  // 提升两级回避率
#define MOVE_EFFECT_ATK_MINUS_2         45  // 降低两级攻击力
#define MOVE_EFFECT_DEF_MINUS_2         46  // 降低两级防御力
#define MOVE_EFFECT_SPD_MINUS_2         47  // 降低两级速度
#define MOVE_EFFECT_SP_ATK_MINUS_2      48  // 降低两级特攻
#define MOVE_EFFECT_SP_DEF_MINUS_2      49  // 降低两级特防
#define MOVE_EFFECT_ACC_MINUS_2         50  // 降低两级命中率
#define MOVE_EFFECT_EVS_MINUS_2         51  // 降低两级回避率
#define MOVE_EFFECT_SCALE_SHOT          52  // 使用鳞射
#define MOVE_EFFECT_THRASH              53  // 使用狂暴
#define MOVE_EFFECT_KNOCK_OFF           54  // 使用击落
#define MOVE_EFFECT_DEF_SPDEF_DOWN      55  // 降低目标的防御力和特防
#define MOVE_EFFECT_CLEAR_SMOG          56  // 使用烟幕
#define MOVE_EFFECT_SMACK_DOWN          57  // 使用击落
#define MOVE_EFFECT_FLAME_BURST         58  // 使用烈焰爆发
#define MOVE_EFFECT_FEINT               59  // 使用虚张声势
#define MOVE_EFFECT_SPECTRAL_THIEF      60  // 使用幽灵强盗
#define MOVE_EFFECT_V_CREATE            61  // 使用V创
#define MOVE_EFFECT_HAPPY_HOUR          62  // 使用快乐时光
#define MOVE_EFFECT_CORE_ENFORCER       63  // 使用核心强化
#define MOVE_EFFECT_THROAT_CHOP         64  // 使用喉切
#define MOVE_EFFECT_INCINERATE          65  // 使用焚化
#define MOVE_EFFECT_BUG_BITE            66  // 使用虫咬
#define MOVE_EFFECT_RECOIL_HP_25        67  // 使用自伤25%的招式
#define MOVE_EFFECT_TRAP_BOTH           68  // 使用陷阱（双方）
#define MOVE_EFFECT_ROUND               69  // 使用轮唱
#define MOVE_EFFECT_STOCKPILE_WORE_OFF  70  // 使用积食效果消失
#define MOVE_EFFECT_DIRE_CLAW           71  // 使用凶爪
#define MOVE_EFFECT_STEALTH_ROCK        72  // 使用岩石封锁
#define MOVE_EFFECT_SPIKES              73  // 使用尖石阵
#define MOVE_EFFECT_SYRUP_BOMB          74  // 使用糖浆炸弹
#define MOVE_EFFECT_FLORAL_HEALING      75  // 使用花香治愈
#define MOVE_EFFECT_SECRET_POWER        76  // 使用秘密力量
#define MOVE_EFFECT_PSYCHIC_NOISE       77  // 使用超能噪音
#define MOVE_EFFECT_TERA_BLAST          78  // 使用太晶爆发
#define MOVE_EFFECT_ORDER_UP            79  // 使用秩序上升
#define MOVE_EFFECT_ION_DELUGE          80  // 使用离子暴雨
#define MOVE_EFFECT_AROMATHERAPY        81  // 使用芳香疗法（尚未实现功能）
#define MOVE_EFFECT_HAZE                82  // 使用雾
#define MOVE_EFFECT_LEECH_SEED          83  // 使用寄生种子
#define MOVE_EFFECT_REFLECT             84  // 使用反射盾
#define MOVE_EFFECT_LIGHT_SCREEN        85  // 使用光墙
#define MOVE_EFFECT_SALT_CURE           86  // 使用盐疗
#define MOVE_EFFECT_EERIE_SPELL         87  // 使用诡异咒语

#define NUM_MOVE_EFFECTS                88

#define MOVE_EFFECT_AFFECTS_USER        0x2000
#define MOVE_EFFECT_CERTAIN             0x4000
#define MOVE_EFFECT_CONTINUE            0x8000

// 定义战斗地形，用于 gBattleTerrain。
#define BATTLE_TERRAIN_GRASS            0  // 草地
#define BATTLE_TERRAIN_LONG_GRASS       1  // 长草
#define BATTLE_TERRAIN_SAND             2  // 沙地
#define BATTLE_TERRAIN_UNDERWATER       3  // 水下
#define BATTLE_TERRAIN_WATER            4  // 水面
#define BATTLE_TERRAIN_POND             5  // 池塘
#define BATTLE_TERRAIN_MOUNTAIN         6  // 山地
#define BATTLE_TERRAIN_CAVE             7  // 山洞
#define BATTLE_TERRAIN_BUILDING         8  // 建筑物内
#define BATTLE_TERRAIN_PLAIN            9  // 平原

// 新的战斗地形用于 Secret Power，但尚未完全实现。
#define BATTLE_TERRAIN_SOARING          10  // 飞翔
#define BATTLE_TERRAIN_SKY_PILLAR       11  // 天空之柱
#define BATTLE_TERRAIN_BURIAL_GROUND    12  // 埋葬之地
#define BATTLE_TERRAIN_PUDDLE           13  // 水洼
#define BATTLE_TERRAIN_MARSH            14  // 沼泽
#define BATTLE_TERRAIN_SWAMP            15  // 湿地
#define BATTLE_TERRAIN_SNOW             16  // 雪地
#define BATTLE_TERRAIN_ICE              17  // 冰面
#define BATTLE_TERRAIN_VOLCANO          18  // 火山
#define BATTLE_TERRAIN_DISTORTION_WORLD 19  // 扭曲世界
#define BATTLE_TERRAIN_SPACE            20  // 太空
#define BATTLE_TERRAIN_ULTRA_SPACE      21  // 超空间

#define BATTLE_TERRAIN_COUNT            22  // 战斗地形总数

// 定义等待时间的长短
#define B_WAIT_TIME_LONG        (B_WAIT_TIME_MULTIPLIER * 4)  // 长等待时间
#define B_WAIT_TIME_MED         (B_WAIT_TIME_MULTIPLIER * 3)  // 中等等待时间
#define B_WAIT_TIME_SHORT       (B_WAIT_TIME_MULTIPLIER * 2)  // 短等待时间
#define B_WAIT_TIME_SHORTEST    (B_WAIT_TIME_MULTIPLIER)      // 最短等待时间

// 逃跑方式的标志
#define FLEE_ITEM    1  // 使用道具逃跑
#define FLEE_ABILITY 2  // 使用能力逃跑

// IsRunningFromBattleImpossible 的返回值。
#define BATTLE_RUN_SUCCESS        0  // 成功逃跑
#define BATTLE_RUN_FORBIDDEN      1  // 不允许逃跑
#define BATTLE_RUN_FAILURE        2  // 逃跑失败

// 窗口类型
#define B_WIN_TYPE_NORMAL 0  // 普通窗口
#define B_WIN_TYPE_ARENA  1  // 竞技场窗口

// sStandardBattleWindowTemplates / sBattleArenaWindowTemplates 的窗口 ID
#define B_WIN_MSG                 0  // 消息窗口
#define B_WIN_ACTION_PROMPT       1  // "What will {x} do?"（{x} 要做什么？）
#define B_WIN_ACTION_MENU         2  // "Fight/Pokémon/Bag/Run"（战斗/宝可梦/背包/逃跑）菜单
#define B_WIN_MOVE_NAME_1         3  // 左上角招式名称
#define B_WIN_MOVE_NAME_2         4  // 右上角招式名称
#define B_WIN_MOVE_NAME_3         5  // 左下角招式名称
#define B_WIN_MOVE_NAME_4         6  // 右下角招式名称
#define B_WIN_PP                  7  // PP 窗口
#define B_WIN_DUMMY               8  // 空窗口
#define B_WIN_PP_REMAINING        9  // 剩余 PP 窗口
#define B_WIN_MOVE_TYPE          10  // 招式类型窗口
#define B_WIN_SWITCH_PROMPT      11  // "Switch which?"（切换哪只？）
#define B_WIN_YESNO              12  // 是/否窗口
#define B_WIN_LEVEL_UP_BOX       13  // 升级框
#define B_WIN_LEVEL_UP_BANNER    14  // 升级横幅
#define B_WIN_VS_PLAYER          15  // 玩家方 VS 窗口
#define B_WIN_VS_OPPONENT        16  // 对手方 VS 窗口
#define B_WIN_VS_MULTI_PLAYER_1  17  // 多人战斗玩家1 VS 窗口
#define B_WIN_VS_MULTI_PLAYER_2  18  // 多人战斗玩家2 VS 窗口
#define B_WIN_VS_MULTI_PLAYER_3  19  // 多人战斗玩家3 VS 窗口
#define B_WIN_VS_MULTI_PLAYER_4  20  // 多人战斗玩家4 VS 窗口
#define B_WIN_VS_OUTCOME_DRAW    21  // 平局结果窗口
#define B_WIN_VS_OUTCOME_LEFT    22  // 左侧结果窗口
#define B_WIN_VS_OUTCOME_RIGHT   23  // 右侧结果窗口
#define B_WIN_MOVE_DESCRIPTION   24  // 招式描述窗口

// 以下窗口 ID 在 Battle Arena 中有不同的用途
#define ARENA_WIN_PLAYER_NAME      15  // 玩家名字窗口
#define ARENA_WIN_VS               16  // VS 窗口
#define ARENA_WIN_OPPONENT_NAME    17  // 对手名字窗口
#define ARENA_WIN_MIND             18  // 精神窗口
#define ARENA_WIN_SKILL            19  // 技能窗口
#define ARENA_WIN_BODY             20  // 体魄窗口
#define ARENA_WIN_JUDGMENT_TITLE   21  // 裁判标题窗口
#define ARENA_WIN_JUDGMENT_TEXT    22  // 裁判文字窗口

// BattlePutTextOnWindow 的标志。从未设置
#define B_WIN_COPYTOVRAM (1 << 7)

// 表示队伍摘要栏显示空位
#define HP_EMPTY_SLOT 0xFFFF

// 招式目标选择的标志
#define MOVE_TARGET_SELECTED            0  // 已选择的目标
#define MOVE_TARGET_DEPENDS             (1 << 0) // 目标取决于情况
#define MOVE_TARGET_USER_OR_SELECTED    (1 << 1) // 使用者或已选择的目标
#define MOVE_TARGET_RANDOM              (1 << 2) // 随机目标
#define MOVE_TARGET_BOTH                (1 << 3) // 双方目标
#define MOVE_TARGET_USER                (1 << 4) // 使用者自身
#define MOVE_TARGET_FOES_AND_ALLY       (1 << 5) // 对手和盟友
#define MOVE_TARGET_OPPONENTS_FIELD     (1 << 6) // 对手场地
#define MOVE_TARGET_ALLY                (1 << 7) // 盟友
#define MOVE_TARGET_ALL_BATTLERS        ((1 << 8) | MOVE_TARGET_USER) // 所有宝可梦（状态招式无功能）

// 对于 GetMoveTarget 的第二个参数，当不需要目标覆盖时
#define NO_TARGET_OVERRIDE 0  // 无目标覆盖

// 亲子绑定的常量
#define PARENTAL_BOND_1ST_HIT 2  // 第一次打击
#define PARENTAL_BOND_2ND_HIT 1  // 第二次打击
#define PARENTAL_BOND_OFF     0  // 亲子绑定关闭

// HandleScriptMegaPrimalBurst 应处理 Mega 进化、原始回归或 Ultra Burst 的常量
#define HANDLE_TYPE_MEGA_EVOLUTION 0  // 处理 Mega 进化
#define HANDLE_TYPE_PRIMAL_REVERSION 1  // 处理原始回归
#define HANDLE_TYPE_ULTRA_BURST 2  // 处理 Ultra Burst

// Torment 的常量
#define PERMANENT_TORMENT   0xF  // 永久折磨

// B_VAR_STARTING_STATUS 的常量
// 由 B_VAR_STARTING_STATUS_TIMER 控制的计时器值
#define STARTING_STATUS_NONE                0  // 无状态
#define STARTING_STATUS_ELECTRIC_TERRAIN    1  // 电场地
#define STARTING_STATUS_MISTY_TERRAIN       2  // 雾场地
#define STARTING_STATUS_GRASSY_TERRAIN      3  // 草地场地
#define STARTING_STATUS_PSYCHIC_TERRAIN     4  // 超能场地
#define STARTING_STATUS_TRICK_ROOM          5  // 戏法空间
#define STARTING_STATUS_MAGIC_ROOM          6  // 魔法空间
#define STARTING_STATUS_WONDER_ROOM         7  // 奇异空间
#define STARTING_STATUS_TAILWIND_PLAYER     8  // 玩家方尾风
#define STARTING_STATUS_TAILWIND_OPPONENT   9  // 对手方尾风

#endif // GUARD_CONSTANTS_BATTLE_H
