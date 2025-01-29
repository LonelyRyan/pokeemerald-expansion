#ifndef GUARD_CONFIG_POKEMON_H
#define GUARD_CONFIG_POKEMON_H

// 宝可梦种类数据设置
#define P_UPDATED_TYPES             GEN_LATEST  // 从第六世代起，一些宝可梦被更改为部分或完全属于妖精类型。
#define P_UPDATED_STATS             GEN_LATEST  // 从第六世代起，宝可梦的种族值随着每一代的更迭而更新。
#define P_UPDATED_ABILITIES         GEN_LATEST  // 从第六世代起，某些宝可梦的能力发生了变化。
#define P_UPDATED_EGG_GROUPS        GEN_LATEST  // 从第八世代起，某些宝可梦获得了新的蛋群。
#define P_UPDATED_FRIENDSHIP        GEN_LATEST  // 从第八世代起，某些宝可梦的基础亲密度发生了变化。
#define P_UPDATED_EVS               GEN_LATEST  // 一些宝可梦在引入后获得了努力值（EV）的更新。
#define P_UPDATED_EXP_YIELDS        GEN_LATEST  // 从第五世代起，一些宝可梦获得了基础经验值的变更。

// 学习招式集
#define P_LVL_UP_LEARNSETS          GEN_LATEST  // 选择使用哪一套等级提升学习招式集。
                                                // 对于尚未引入某个种类的世代，我们使用它们首次出现的数据（例如，如果配置设置为GEN_1，则使用Chikorita的Gen2数据）。
                                                // 对于不包括以前引入的种类的世代，我们使用它们最后一次出现的数据（例如，如果配置设置为GEN_8，则使用Snivy的Gen7数据）。
                                                // GEN_1/2/3/4/5/6/7: 分别对应黄、水晶、红/蓝/绿宝石、心金/魂银、黑白2、太阳/月亮、究极之日/究极之月的学习招式集。
                                                // GEN_8: 使用以下优先级：BDSP对于Gen1-4宝可梦，然后是LA游戏中引入的种类，然后是剑/盾中出现的种类。否则，使用GEN_7。
                                                // GEN_9: SV 对于在这些游戏中出现的种类。否则使用GEN_8。

// 进化设置
#define P_FRIENDSHIP_EVO_THRESHOLD   GEN_LATEST  // 从第八世代起，通过亲密度进化的宝可梦在亲密度达到或超过160时进化，而不是220。

// 繁殖设置
#define P_NIDORAN_M_DITTO_BREED        GEN_LATEST  // 从第五世代起，尼多朗♂与百变怪繁殖可以产生尼多朗♀后代。之前，它只会产生雄性后代。这个变化也适用于甜舞妮。
#define P_INCENSE_BREEDING             GEN_LATEST  // 从第九世代起，跨世代的婴儿宝可梦不需要父母持有香炉就能通过繁殖获得。
#define P_EGG_HATCH_LEVEL              GEN_LATEST  // 从第四世代起，宝可梦将从蛋中孵化成1级而不是5级。
#define P_BALL_INHERITING              GEN_LATEST  // 从第六世代起，托儿所的蛋将从母亲那里继承精灵球。从第七世代起，只要父亲与母亲是同一种类，父亲也可以传承下来。
#define P_TM_INHERITANCE               GEN_LATEST  // 从第六世代起，父亲不再将TM传授给婴儿。
#define P_MOTHER_EGG_MOVE_INHERITANCE  GEN_LATEST  // 从第六世代起，母亲也可以传授蛋招式。
#define P_NATURE_INHERITANCE           GEN_LATEST  // 在第三世代，不变石让百变怪和母亲有50%的机会传承性格。从第四世代起，任何人都可以传承性格。从第五世代起，机会是100%。
#define P_ABILITY_INHERITANCE          GEN_LATEST  // 在黑白2中，雌性宝可梦与雄性繁殖时有80%的机会传承自己的能力。从第六世代起，普通能力和隐藏能力的机会分别是80%和60%，任何人都可以与百变怪繁殖传承自己的能力。注意：黑白的效果：隐藏能力有60%的机会传承，普通能力随机传承已被省略。
#define P_EGG_MOVE_TRANSFER            GEN_LATEST  // 从第八世代起，如果两只同种的宝可梦在托儿所，一只知道蛋招式，另一只有空位，另一只宝可梦将获得空位中的蛋招式。在第九世代，如果宝可梦持有镜子香草，它将从另一只宝可梦那里获得蛋招式，无论种类。
#define P_SCATTERBUG_LINE_FORM_BREED   SPECIES_SCATTERBUG_FANCY  // 选择所有维瓦/粉蝶蛹/粉蝶将繁殖成的粉蝶形态，基本上与玩家游戏的“位置”一致。

// 种类特定设置
#define P_SHEDINJA_BALL             GEN_LATEST  // 从第四世代起，脱壳忍者需要精灵球来进化。在第三世代，脱壳忍者继承了土居忍者的球。
#define P_KADABRA_EVERSTONE         GEN_LATEST  // 从第四世代起，凯西即使持有不变石也可以进化。
#define P_SHUCKLE_BERRY_JUICE       GEN_LATEST  // 在第二世代，大钳虾有1/16的机会将其持有的树果转化为树果汁。启用此设置将允许大钳虾用奥涩果这样做，奥涩果是树果的精神续作。

// 种类图像设置
#define P_GENDER_DIFFERENCES            TRUE        // 如果为TRUE，雌性宝可梦在图形上会有差异。像喵头目这样的雌性*形态*不受此影响。
#define P_CUSTOM_GENDER_DIFF_ICONS      TRUE        // 如果为TRUE，将为更多宝可梦提供自定义图标以显示它们的雌性差异，例如河马王和河马兽。
#define P_ARCEUS_UNIQUE_FORM_ICONS      GEN_LATEST  // 从第九世代起，阿尔宙斯还会改变其图标以反映当前形态。
#define P_FOOTPRINTS                    TRUE        // 如果为TRUE，宝可梦将有足迹（直到第五世代和BDSP都是如此）。禁用此功能可以节省一些ROM空间。
#define P_TWO_FRAME_FRONT_SPRITES       TRUE        // 在宝可梦绿宝石中，宝可梦的正面精灵始终由两帧组成。此配置可以将其改回仅使用第一帧，就像其他第三世代游戏一样。
#define P_GBA_STYLE_SPECIES_GFX         FALSE       // 默认情况下，宝可梦精灵使用第四/五代的风格。此配置可以将它们改回GBA风格。注意：使用这些精灵时，B_ENEMY_MON_SHADOW_STYLE目前被禁用。
#define P_GBA_STYLE_SPECIES_ICONS       FALSE       // 默认情况下，宝可梦有它们更新后的图标。此配置可以将它们改回GBA风格。
#define P_GBA_STYLE_SPECIES_FOOTPRINTS  FALSE       // 默认情况下，宝可梦有它们更新后的足迹。此配置可以将它们改回GBA风格。

// 其他设置
#define P_CRIES_ENABLED                  TRUE        // 如果为TRUE，宝可梦将拥有叫声。禁用这个可以节省大量的ROM空间（超过25%！），但我们建议在include/config/species_enabled.h中禁用个别未使用的宝可梦家族。
#define P_LEGENDARY_PERFECT_IVS          GEN_LATEST  // 从第六世代起，野生的或作为礼物获得的传说、神话和究极异兽至少有3个完美个体值（IV）。
#define P_EV_CAP                         GEN_LATEST  // 从第六世代起，每项能力的努力值（EV）上限是252，而不是255。
#define P_SHOW_TERA_TYPE                 GEN_LATEST  // 从第九世代起，在总结屏幕上显示太晶类型。
#define P_TM_LITERACY                    GEN_LATEST  // 从第六世代起，原本不能学习技能机的宝可梦可以学习在其等级提升学习招式集中的技能机所教授的招式。
#define P_CAN_FORGET_HIDDEN_MOVE         FALSE       // 如果为TRUE，宝可梦可以忘记任何招式，即使是隐藏招式。
#define P_EGG_CYCLE_LENGTH               GEN_LATEST  // 从第八世代起，蛋的孵化步数减半。 Previous Gens have some varied step counts around 255.
#define P_ONLY_OBTAINABLE_SHINIES        FALSE       // 如果为TRUE，在战斗金字塔中遇到的宝可梦不会是闪光的。
#define P_NO_SHINIES_WITHOUT_POKEBALLS   FALSE       // 如果为TRUE，当玩家没有精灵球时遇到的宝可梦不会是闪光的。
#define P_SHOW_DYNAMIC_TYPES             FALSE       // 如果为TRUE，在战斗/总结屏幕上显示所有具有动态类型变化的招式的当前类型，而不仅仅是原版中的特定招式。
#define P_SUMMARY_SCREEN_MOVE_RELEARNER  TRUE        // 如果为TRUE，在总结屏幕的招式页面上显示宝可梦重新学习招式的选项。
#define P_SUMMARY_MOVE_RELEARNER_FULL_PP TRUE        // 如果为TRUE，在总结屏幕上的招式重新学习器将重新学习的招式的PP恢复至满值。
#define P_SUMMARY_SCREEN_RENAME          TRUE        // 如果为TRUE，在总结屏幕的信息页面上，更改宝可梦昵称的选项将取代取消提示。

// 学习招式集辅助开关
#define P_LEARNSET_HELPER_TEACHABLE TRUE        // 如果为TRUE，teachable_learnsets.h将由tools/learnset_helpers/teachable.py使用包含的JSON文件基于可用的技能机和教导招式填充。

// 旗帜设置
// 要在脚本中使用以下功能，请将0替换为您分配给它的标志ID。
// 例如：替换为FLAG_UNUSED_0x264，以便您可以使用该标志来切换功能。
#define P_FLAG_FORCE_SHINY      0     // 如果设置了此标志，所有野生和礼物宝可梦将被强制成为闪光。
#define P_FLAG_FORCE_NO_SHINY   0     // 如果设置了此标志，所有野生和礼物宝可梦将被强制不是闪光。

// 如果您想禁用特定的宝可梦家族，请到这里。
#include "config/species_enabled.h"

#endif // GUARD_CONFIG_POKEMON_H
