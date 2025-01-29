#ifndef GUARD_CONSTANTS_BATTLE_AI_H
#define GUARD_CONSTANTS_BATTLE_AI_H

// 定义宝可梦的位置
#define AI_TARGET 0          // 目标宝可梦（对手）
#define AI_USER 1            // 使用招式的宝可梦（AI自身）
#define AI_TARGET_PARTNER 2  // 目标宝可梦的伙伴（双打中对手的伙伴）
#define AI_USER_PARTNER 3    // 使用招式的宝可梦的伙伴（双打中AI的伙伴）

// 获取属性的命令
#define AI_TYPE1_TARGET 0    // 目标宝可梦的第一属性
#define AI_TYPE1_USER 1      // 使用招式的宝可梦的第一属性
#define AI_TYPE2_TARGET 2    // 目标宝可梦的第二属性
#define AI_TYPE2_USER 3      // 使用招式的宝可梦的第二属性
#define AI_TYPE_MOVE 4       // 招式的属性

// 属性效果
#define AI_EFFECTIVENESS_x8     7   // 8倍效果
#define AI_EFFECTIVENESS_x4     6   // 4倍效果
#define AI_EFFECTIVENESS_x2     5   // 2倍效果
#define AI_EFFECTIVENESS_x1     4   // 1倍效果
#define AI_EFFECTIVENESS_x0_5   3   // 0.5倍效果
#define AI_EFFECTIVENESS_x0_25  2   // 0.25倍效果
#define AI_EFFECTIVENESS_x0_125 1   // 0.125倍效果
#define AI_EFFECTIVENESS_x0     0   // 无效果

// AI 标志。大多数标志会运行特定函数来更新评分，新的标志用于其他脚本中的内部逻辑
// 更多详情请查看 docs/ai_flags.md。
#define AI_FLAG_CHECK_BAD_MOVE        (1 << 0)  // AI 会避免使用在当前情况下可能失败或无效的招式。
#define AI_FLAG_TRY_TO_FAINT          (1 << 1)  // AI 会优先尝试击倒玩家的宝可梦。
#define AI_FLAG_CHECK_VIABILITY       (1 << 2)  // AI 会评估伤害性招式和招式效果，以确定当前情况下最佳的可用招式。
#define AI_FLAG_FORCE_SETUP_FIRST_TURN (1 << 3) // AI 会在第一回合优先使用设置招式，即使这意味着放弃其他所有招式。AI_FLAG_CHECK_VIABILITY 会在 AI 认为合适时执行此操作。
#define AI_FLAG_RISKY                 (1 << 4)  // AI 通常会表现得更冒险，优先考虑伤害而非准确性，使用爆炸等招式。
#define AI_FLAG_TRY_TO_2HKO           (1 << 5)  // AI 会为任何能够一击或两击击倒玩家的招式加分。
#define AI_FLAG_PREFER_BATON_PASS     (1 << 6)  // AI 优先提升自身状态并设置/使用接力棒。
#define AI_FLAG_DOUBLE_BATTLE         (1 << 7)  // 自动设置用于双打，处理 AI 与伙伴的行为。
#define AI_FLAG_HP_AWARE              (1 << 8)  // AI 会根据自身和玩家宝可梦的剩余 HP 来选择某些招式效果。
#define AI_FLAG_POWERFUL_STATUS       (1 << 9)  // AI 优先使用能设置场地效果或状态的招式，即使使用者可以击倒目标。

// 新增，训练家限制标志
#define AI_FLAG_NEGATE_UNAWARE        (1 << 10) // AI 不知道诸如奇异地形、破坏王等抵消效果。
#define AI_FLAG_WILL_SUICIDE          (1 << 11) // AI 会使用爆炸、自爆、最后的挣扎等招式。

// 新增，训练家策略标志
#define AI_FLAG_PREFER_STATUS_MOVES   (1 << 12) // AI 为状态招式加分。应与 AI_FLAG_CHECK_BAD_MOVE 结合使用，以防止仅使用状态招式。
#define AI_FLAG_STALL                 (1 << 13) // AI 会拖延战斗，优先使用持续伤害/陷阱等招式。TODO 未完成。
#define AI_FLAG_SMART_SWITCHING       (1 << 14) // AI 会进行更多的切换检查。自动包括 AI_FLAG_SMART_MON_CHOICES。
#define AI_FLAG_ACE_POKEMON           (1 << 15) // AI 有一个王牌宝可梦。队伍中的最后一个宝可梦不会被使用，直到它是唯一剩下的宝可梦。
#define AI_FLAG_OMNISCIENT            (1 << 16) // AI 完全了解玩家的招式、能力、携带道具。
#define AI_FLAG_SMART_MON_CHOICES     (1 << 17) // AI 在战斗中选择派出的宝可梦时会做出更明智的决策，以及在击倒对手后选择宝可梦，这是两个独立的决策。自动包括在 AI_FLAG_SMART_SWITCHING 中。
#define AI_FLAG_CONSERVATIVE          (1 << 18) // AI 假设所有招式都会造成最低伤害。
#define AI_FLAG_SEQUENCE_SWITCHING    (1 << 19) // AI 按照队伍顺序切换宝可梦，并且在战斗中不会切换。
#define AI_FLAG_DOUBLE_ACE_POKEMON    (1 << 20) // AI 有两个王牌宝可梦。队伍中的最后两个宝可梦不会被使用，除非它们是最后剩下的宝可梦。适用于双打或情侣等战斗。

#define AI_FLAG_COUNT                       21

// 以下选项足以构成一个基础/智能的训练家。添加其他标志可能会使训练家变得更差或更好，具体取决于标志
#define AI_FLAG_BASIC_TRAINER         (AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY)
#define AI_FLAG_SMART_TRAINER         (AI_FLAG_BASIC_TRAINER | AI_FLAG_OMNISCIENT | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES)

// 其他 AI 逻辑标志
#define AI_FLAG_DYNAMIC_FUNC          (1 << 28)  // 通过 "setdynamicaifunc" 命令为特定战斗创建自定义 AI 函数
#define AI_FLAG_ROAMING               (1 << 29)
#define AI_FLAG_SAFARI                (1 << 30)
#define AI_FLAG_FIRST_BATTLE          (1 << 31)

#define AI_SCORE_DEFAULT 100 // 所有 AI 招式的默认评分

#endif // GUARD_CONSTANTS_BATTLE_AI_H
