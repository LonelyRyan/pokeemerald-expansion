#ifndef GUARD_CONFIG_BATTLE_H
#define GUARD_CONFIG_BATTLE_H

// 计算设置
#define B_CRIT_CHANCE               GEN_LATEST // 致命一击的几率。参见CalcCritChanceStage。第六世代及以上的几率保证拿着菜种并使用高致命比率招式的大葱鸭总是能造成致命一击。
#define B_CRIT_MULTIPLIER           GEN_LATEST // 在第六世代及以上，致命一击将伤害乘以1.5而不是2。
#define B_PARALYSIS_SPEED           GEN_LATEST // 在第七世代及以上，速度降低50%而不是75%。
#define B_CONFUSION_SELF_DMG_CHANCE GEN_LATEST // 在第七世代及以上，混乱状态下自伤的几率是33.3%，而不是50%。
#define B_MULTI_HIT_CHANCE          GEN_LATEST // 在第五世代及以上，多hits招式有不同的百分比。参见SetRandomMultiHitCounter了解具体数值。
#define B_WHITEOUT_MONEY            GEN_LATEST // 在第四世代及以上，战斗失败失去的金钱由获得的徽章数量决定。之前，会将当前金钱减半。（虽然这个变化也在FRLG中，但为了简单起见，设置为GEN_3会导致RSE的行为。）
#define B_LIGHT_BALL_ATTACK_BOOST   GEN_LATEST // 在第四世代及以上，光之球除了特殊招式外，还会使物理招式的威力加倍。
#define B_SANDSTORM_SPDEF_BOOST     GEN_LATEST // 在第四世代及以上，沙暴天气会使岩石属性宝可梦的特防乘以1.5倍。

// 经验设置
#define B_EXP_CATCH                 GEN_LATEST // 在第六世代及以上，捕捉宝可梦可以获得经验。
#define B_TRAINER_EXP_MULTIPLIER    GEN_LATEST // 在第七世代及以上，训练师战斗不再提供1.5倍的经验值加成。
#define B_SPLIT_EXP                 GEN_LATEST // 在第六世代及以上，所有参与的宝可梦都能获得完整的经验。
#define B_SCALED_EXP                GEN_LATEST // 在第五世代和第七世代及以上，经验会根据等级差异加权。
#define B_UNEVOLVED_EXP_MULTIPLIER  GEN_LATEST // 在第六世代及以上，如果宝可梦处于或超过它能够进化的等级，但没有进化，它将获得约1.2倍的经验值加成。只适用于使用EVO_LEVEL方法进化的宝可梦。

// 属性设置
#define B_BADGE_BOOST               GEN_LATEST // 在第四世代及以上，道馆徽章不再提升宝可梦的属性。
#define B_FRIENDSHIP_BOOST          FALSE      // 只在LGPE中，除了HP外的所有属性根据亲密度提升最多10%。与B_BADGE_BOOST不同，这些提升在计算基础属性时会考虑。
#define B_MAX_LEVEL_EV_GAINS        GEN_LATEST // 在第五世代及以上，100级的宝可梦可以正常获得努力值。
#define B_RECALCULATE_STATS         GEN_LATEST // 在第五世代及以上，参与战斗的宝可梦在每次战斗结束后重新计算属性。

// 伤害设置
#define B_BURN_DAMAGE               GEN_LATEST // 在第七世代及以上，烧伤伤害是最大HP的1/16，而不是1/8。同样适用于冻伤。
#define B_BURN_FACADE_DMG           GEN_LATEST // 在第六世代及以上，烧伤降低攻击属性的效果不再适用于近身打。
#define B_BINDING_DAMAGE            GEN_LATEST // 在第六世代及以上，束缚伤害是最大HP的1/8，而不是1/16。（使用束缚带时，分别是1/6和1/8。）
#define B_PSYWAVE_DMG               GEN_LATEST // 精神波动的伤害公式。参见Cmd_psywavedamageeffect。
#define B_PAYBACK_SWITCH_BOOST      GEN_LATEST // 在第五世代及以上，如果对手换下宝可梦，报复的伤害不再加倍。
#define B_HIDDEN_POWER_DMG          GEN_LATEST // 在第六世代及以上，隐藏力量的基础威力被设定为总是60。之前，它是由宝可梦的个体值决定的。
#define B_ROUGH_SKIN_DMG            GEN_LATEST // 在第四世代及以上，粗糙皮肤接触伤害是最大HP的1/8，而不是1/16。这也会影响铁刺。
#define B_KNOCK_OFF_DMG             GEN_LATEST // 在第六世代及以上，击落物品时抢夺造成的伤害增加50%。
#define B_SPORT_DMG_REDUCTION       GEN_LATEST // 在第五世代及以上，水域/泥浆场地使火焰/电系伤害减少67%，而不是50%。
#define B_EXPLOSION_DEFENSE         GEN_LATEST // 在第五世代及以上，自爆和大爆炸不会减半目标的防御。
#define B_PARENTAL_BOND_DMG         GEN_LATEST // 在第七世代及以上，亲子爱第二击造成的伤害是最初伤害的25%。之前它是50%。
#define B_MULTIPLE_TARGETS_DMG      GEN_LATEST // 在第四世代及以上，一次性打击多个目标的伤害减少到75%。之前是50%。

// 类型设置
#define B_GHOSTS_ESCAPE             GEN_LATEST // 在第六世代及以上，幽灵属性的宝可梦不受影子钩子或恶颜等能力或招式影响。它们还可以逃离任何野生战斗。
#define B_PARALYZE_ELECTRIC         GEN_LATEST // 在第六世代及以上，电属性宝可梦不能被麻痹。
#define B_POWDER_GRASS              GEN_LATEST // 在第六世代及以上，草属性宝可梦对粉末和孢子类招式免疫。
#define B_UPDATED_TYPE_MATCHUPS     GEN_LATEST // 更新类型相性。详细信息见src/data/types_info.h。
#define B_PRANKSTER_DARK_TYPES      GEN_LATEST // 在第七世代及以上，恶作剧之心提升的状态招式不影响恶属性宝可梦。
#define B_SHEER_COLD_IMMUNITY       GEN_LATEST // 在第七世代及以上，冰属性宝可梦对绝对零度免疫。
#define B_ROOST_PURE_FLYING         GEN_LATEST // 在第五世代及以上，羽栖使纯飞行属性宝可梦变为普通属性。
#define B_STATUS_TYPE_IMMUNITY      GEN_LATEST // 在第一世代，如果宝可梦与招式共享属性，则它们对攻击招式的麻痹/冻结/烧伤副作用免疫。

// 回合设置
#define B_BINDING_TURNS             GEN_LATEST // 在第五世代及以上，束缚招式持续4-5回合，而不是2-5回合。（使用握力爪时，分别为7回合和5回合。）
#define B_UPROAR_TURNS              GEN_LATEST // 在第五世代及以上，吵闹持续3回合，而不是2-5回合。
#define B_UPROAR_IGNORE_SOUNDPROOF  GEN_LATEST // 在第五世代及以上，吵闹状态无视隔音特性。
#define B_DISABLE_TURNS             GEN_LATEST // 禁用的回合数。参见Cmd_disablelastusedattack。
#define B_TAILWIND_TURNS            GEN_LATEST // 在第五世代及以上，顺风持续4回合，而不是3回合。
#define B_SLEEP_TURNS               GEN_LATEST // 在第五世代及以上，睡眠持续1-3回合，而不是2-5回合。
#define B_TAUNT_TURNS               GEN_LATEST // 在第五世代及以上，挑衅如果使用者在目标之前行动，则持续3回合；如果目标先行动，则持续4回合。在第三世代，挑衅持续2回合；在第四世代，持续3-5回合。
#define B_SPORT_TURNS               GEN_LATEST // 在第六世代及以上，水域/泥浆场地持续5回合，即使使用者换下。
#define B_MEGA_EVO_TURN_ORDER       GEN_LATEST // 在第七世代，宝可梦超级进化后的速度用于决定回合顺序，而不是进化前的速度。
#define B_RECALC_TURN_AFTER_ACTIONS GEN_LATEST // 在第八世代，换下/使用招式会影响当前回合的行动顺序，即动态速度。
#define B_FAINT_SWITCH_IN           GEN_LATEST // 在第四世代及以上，前一只宝可梦倒下后派出新宝可梦发生在回合结束时。之前，每执行一个动作后就会换下。

// 招式数据设置
#define B_UPDATED_MOVE_DATA         GEN_LATEST // 更新gMovesInfo中的招式数据，包括威力、命中率、PP值、属性变化、目标和次要效果的几率。
#define B_UPDATED_MOVE_TYPES        GEN_LATEST // 更新招式类型。
#define B_UPDATED_MOVE_FLAGS        GEN_LATEST // 更新招式标志。
#define B_PHYSICAL_SPECIAL_SPLIT    GEN_LATEST // 在第三世代，招式的类型决定它会造成物理伤害还是特殊伤害。总结中的分裂图标将反映这一点。
#define B_RECOIL_IF_MISS_DMG        GEN_LATEST // 在第五世代及以上，飞膝踢和飞跃踢如果未击中，总是对使用者造成最大HP的一半伤害。
#define B_KLUTZ_FLING_INTERACTION   GEN_LATEST // 在第五世代及以上，笨拙特性的宝可梦不能使用投掷。
#define B_UPDATED_CONVERSION        GEN_LATEST // 在第六世代及以上，特性互换会将使用者的属性变为其第一个招式的属性。之前，它会随机选择一个招式。
#define B_UPDATED_CONVERSION_2      GEN_LATEST // 在第五世代及以上，特性互换2会将使用者的属性变为抵抗目标最后使用的招式的属性。之前，它会考虑最后成功击中的招式。此外，第五世代之前挣扎被视为普通类型。
#define B_PP_REDUCED_BY_SPITE       GEN_LATEST // 在第四世代及以上，恶意减少对手最后使用的招式的PP值4点，而不是2到5点。
#define B_EXTRAPOLATED_MOVE_FLAGS   TRUE       // 为招式添加它们在最新核心系列游戏中可能拥有但官方没有的招式标志。

// 特性数据设置
#define B_UPDATED_ABILITY_DATA      GEN_LATEST // 影响标志

// 招式命中率设置
#define B_TOXIC_NEVER_MISS          GEN_LATEST // 在第六世代及以上，如果剧毒由毒属性宝可梦使用，它将永远不会失误。
#define B_MINIMIZE_DMG_ACC          GEN_LATEST // 在第六世代及以上，对极小化宝可梦造成双倍伤害的招式也会跳过命中率检查。
#define B_BLIZZARD_HAIL             GEN_LATEST // 在第四世代及以上，如果正在降雪，暴雪会绕过命中率检查。
#define B_SHEER_COLD_ACC            GEN_LATEST // 在第七世代及以上，如果使用者不是冰属性，绝对零度的基础命中率降低至20%。

// 招式属性变化设置
#define B_FELL_STINGER_STAT_RAISE   GEN_LATEST // 在第七世代及以上，如果造成目标倒下， Fell Stinger 会提升攻击3级而不是2级。
#define B_KINGS_SHIELD_LOWER_ATK    GEN_LATEST // 在第八世代及以上，王者盾牌会降低击中它的对手的攻击1级而不是2级。
#define B_SPEED_BUFFING_RAPID_SPIN  GEN_LATEST // 在第八世代，急速旋转会提升使用者的速度1级。
#define B_CHARGE_SPDEF_RAISE        GEN_LATEST // 在第五世代及以上，充电会提升使用者的特防1级。
#define B_MINIMIZE_EVASION          GEN_LATEST // 在第五世代及以上，极小化会提升回避率2级而不是1级。
#define B_GROWTH_STAT_RAISE         GEN_LATEST // 在第五世代及以上，成长除了提升特攻外，还会提升攻击1级。在阳光照射下，每项提升2级。

// 其他招式设置
#define B_INCINERATE_GEMS           GEN_LATEST // 在第六世代及以上，熔岩风暴可以破坏宝石。
#define B_CAN_SPITE_FAIL            GEN_LATEST // 在第四世代及以上，如果对手最后使用的招式只剩下1点PP，恶意不能失败。
#define B_CRASH_IF_TARGET_IMMUNE    GEN_LATEST // 在第四世代及以上，如果飞膝踢或飞跃踢攻击免疫该招式的目标，使用者会“继续前进并坠落”。
#define B_MEMENTO_FAIL              GEN_LATEST // 在第四世代及以上，如果无目标或目标受到保护或在替身后面，报复会失败。但如果攻击/特攻处于-6，则不会失败。
#define B_GLARE_GHOST               GEN_LATEST // 在第四世代及以上，石化之眼可以正常击中幽灵属性宝可梦。
#define B_SKILL_SWAP                GEN_LATEST // 在第四世代及以上，技能互换在使用后会触发换入宝可梦的能力。
#define B_BRICK_BREAK               GEN_LATEST // 在第四世代及以上，你可以破坏自己一方的屏幕。在第五世代及以上，如果目标免疫，则屏幕不会被移除。
#define B_WISH_HP_SOURCE            GEN_LATEST // 在第五世代及以上，许愿治愈使用者最大HP的一半，而不是目标的。
#define B_RAMPAGE_CANCELLING        GEN_LATEST // 在第五世代及以上，失败的蛮力等招式会在最后一回合之前取消。
#define B_HEAL_BLOCKING             GEN_LATEST // 在第五世代及以上，治愈封锁阻止通过黑色污泥、剩饭、贝壳铃恢复HP。受影响的宝可梦不会消耗持有的HP恢复树果或树果汁。吸取能力的招式不会治愈但会防止伤害。在第六世代及以上，治愈封锁阻止使用大多数吸取HP的招式。
#define B_ROOTED_GROUNDING          GEN_LATEST // 在第四世代及以上，扎根使受影响的宝可梦落地。
#define B_METRONOME_MOVES           GEN_LATEST // 此配置将决定模仿大师将从哪个世代抽取招式。
#define B_TELEPORT_BEHAVIOR         GEN_LATEST // 在LGPE起（这里为第八世代），瞬间移动允许使用者与队伍中的另一只宝可梦交换。
#define B_BEAT_UP                   GEN_LATEST // 在第五世代及以上，围攻使用不同的公式计算伤害，并造成恶属性伤害。在第五世代之前，每次攻击还会宣布队伍成员的名字。
#define B_DARK_VOID_FAIL            GEN_LATEST // 在第七世代及以上，只有达克莱伊可以使用黑洞。
#define B_BURN_HIT_THAW             GEN_LATEST // 在第六世代及以上，有机会造成烧伤的伤害招式会融化目标，无论它们是否是火属性招式。
#define B_HEALING_WISH_SWITCH       GEN_LATEST // 在第五世代及以上，接受治愈之愿的宝可梦在回合结束时被派出。此外，在第八世代及以上，治愈之愿的效果会存储起来，直到使用者换入一个处于异常状态或受伤的宝可梦。
#define B_DEFOG_EFFECT_CLEARING     GEN_LATEST // 在第六世代及以上，清除之烟清除了双方的尖刺、剧毒尖刺、隐形岩和黏网。在第八世代及以上，清除之烟还会清除活动场地。
#define B_STOCKPILE_RAISES_DEFS     GEN_LATEST // 在第四世代及以上，囤积也会提升防御和特防属性。一旦使用吐出/吞下，这些属性变化就会消失。
#define B_TRANSFORM_SHINY           GEN_LATEST // 在第四世代及以上，变身会复制对手的闪光状态，而不是保持自己的闪光状态。
#define B_TRANSFORM_FORM_CHANGES    GEN_LATEST // 在第五世代及以上，变身的宝可梦不能改变形态。
#define B_WIDE_GUARD                GEN_LATEST // 仅在第五世代，连续使用广域防守有机会失败。
#define B_QUICK_GUARD               GEN_LATEST // 仅在第五世代，连续使用急速防守有机会失败。
#define B_IMPRISON                  GEN_LATEST // 在第五世代及以上，如果对方宝可梦没有任何使用者知道的招式，封印不会失败。
#define B_ALLY_SWITCH_FAIL_CHANCE   GEN_LATEST // 在第九世代，连续使用友情防守会降低每次连续使用的成功几率。
#define B_SKETCH_BANS               GEN_LATEST // 在第九世代及以上，素描无法复制比前几代更多的招式。
#define B_KNOCK_OFF_REMOVAL         GEN_LATEST // 在第五世代及以上，击落会移除对手的物品，而不是使其无法使用。
#define B_HEAL_BELL_SOUNDPROOF      GEN_LATEST // 在第五世代，治愈铃铛影响所有具有隔音特性的宝可梦。在第六至八世代，它影响非战斗中的宝可梦，但不会影响战斗中的宝可梦。在第九世代，它总是影响使用者。
#define B_CHARGE                    GEN_LATEST // 在第八世代及以上，无论下一个招式的属性如何，充电状态都会丢失。
#define B_POWDER_RAIN               GEN_LATEST // 在第七世代及以上，在大雨中，粉末不会对使用火属性招式的宝可梦造成伤害。
#define B_AFTER_YOU_TURN_ORDER      GEN_LATEST // 在第八世代及以上，如果你先请不会在使用后失败，如果回合顺序不会在使用后改变。
#define B_QUASH_TURN_ORDER          GEN_LATEST // 在第八世代及以上，受到压制影响的战斗者会根据速度顺序行动。在第八世代之前，受到压制影响的战斗者会按照他们受到压制影响的顺序行动。

// 特性设置
#define B_ABILITY_WEATHER           GEN_LATEST // 在第六世代及以上，特性引发的天气持续5回合。之前，它持续到战斗结束或被招式或不同影响天气的特性改变。
#define B_GALE_WINGS                GEN_LATEST // 在第七世代及以上，需要满HP才能触发疾风之翼。
#define B_STANCE_CHANGE_FAIL        GEN_LATEST // 在第七世代及以上，如果宝可梦因混乱、麻痹等无法使用招式，战斗切换会失败。在第六世代，它不会。
#define B_SHADOW_TAG_ESCAPE         GEN_LATEST // 在第四世代及以上，如果双方都有持有影子钩子的宝可梦，所有战斗者都可以逃跑。之前，任何一方都无法逃脱这种情况。
#define B_MOODY_ACC_EVASION         GEN_LATEST // 在第八世代，反复无常不再能提升命中率和回避率。
#define B_FLASH_FIRE_FROZEN         GEN_LATEST // 在第五世代及以上，即使被冻结，也能触发火焰之躯，之前不能。
#define B_SYNCHRONIZE_TOXIC         GEN_LATEST // 在第五世代及以上，如果持有同步特性的宝可梦剧毒，对手也会剧毒。之前，对手会常规中毒。
#define B_UPDATED_INTIMIDATE        GEN_LATEST // 在第八世代，威吓对具有集中、好胜、我行我素或无防守特性的对手无效。它还会激活胆怯。
#define B_OBLIVIOUS_TAUNT           GEN_LATEST // 在第六世代及以上，无防守特性的宝可梦不能被挑衅。
#define B_STURDY                    GEN_LATEST // 在第五世代及以上，结实特性会在其他宝可梦的攻击或混乱伤害将其从满HP降至0HP时，使其保留1HP。
#define B_PLUS_MINUS_INTERACTION    GEN_LATEST // 在第五世代及以上，正电和负电特性可以与自身和相反特性激活。之前，只有相反特性能激活它。
#define B_WEATHER_FORMS             GEN_LATEST // 在第五世代及以上，当天气改变时，随风球和樱花鱼会变回基础形态。樱花鱼需要花之礼来变换形态。
#define B_SYMBIOSIS_GEMS            GEN_LATEST // 在第七世代及以上，共生特性在宝石增强攻击后传递物品。之前，物品在宝石增强攻击命中前传递，使得物品效果适用。
#define B_ABSORBING_ABILITY_STRING  GEN_LATEST // 在第五世代及以上，吸收特定类型招式的特性使用通用字符串来表示属性提升和下降。
#define B_REDIRECT_ABILITY_IMMUNITY GEN_LATEST // 在第五世代及以上，避电和引水特性的宝可梦对电/水属性招式免疫，并额外提升特攻1级。
#define B_LEAF_GUARD_PREVENTS_REST  GEN_LATEST // 在第五世代及以上，叶子防守阻止在强烈阳光下使用休息。
#define B_SNOW_WARNING              GEN_LATEST // 在第九世代及以上，雪隐会召唤雪天，而不是冰雹。
#define B_TRANSISTOR_BOOST          GEN_LATEST // 在第九世代及以上，电晶体特性提升电属性招式的威力为1.3倍，而不是1.5倍。
#define B_ILLUMINATE_EFFECT         GEN_LATEST // 在第九世代及以上，照亮特性防止命中率下降，并忽略目标的回避。
#define B_WEAK_ARMOR_SPEED          GEN_LATEST // 在第七世代及以上，弱甲特性在受到物理招式击中时，速度提升2级，而不是1级。
#define B_PROTEAN_LIBERO            GEN_LATEST // 在第九世代及以上，变幻自如和自由者特性每场战斗只会改变宝可梦的属性一次。
#define B_INTREPID_SWORD            GEN_LATEST // 在第九世代及以上，胆怯剑特性每场战斗只会提升攻击1级。
#define B_DAUNTLESS_SHIELD          GEN_LATEST // 在第九世代及以上，坚毅盾墙特性每场战斗只会提升防御1级。
#define B_DISGUISE_HP_LOSS          GEN_LATEST // 在第八世代及以上，当伪装的魔尼尼的伪装被识破时，在变为破碎形态时会损失相当于其最大HP的1/8的HP。
#define B_ABILITY_TRIGGER_CHANCE    GEN_LATEST // 在第三世代，脱皮、可爱、火焰之躯、静电和毒针有1/3的几率触发。在第四世代及以上是30%。
                                               // 在第三世代，效果孢子有10%的几率睡眠、中毒或麻痹，几率相等。
                                               // 在第四世代，它是30%。在第五世代及以上，睡眠的几率是11%，中毒的几率是9%，麻痹的几率是10%。
#define B_PICKUP_WILD               GEN_LATEST // In Gen9+, Pickup allows its user to pickup its own used item at the end of the turn in wild battles.

// 物品设置
#define B_HP_BERRIES                GEN_LATEST // 在第四世代及以上，恢复HP的树果在HP降至一半后立即激活。在第三世代，效果在回合结束时发生。
#define B_BERRIES_INSTANT           GEN_LATEST // 在第四世代及以上，大多数树果在战斗开始/换入时（如果适用）立即激活。在第三世代，它们只在招式结束或回合结束时激活。
#define B_CONFUSE_BERRIES_HEAL      GEN_LATEST // 在第七世代之前，柿子和类似的树果恢复1/8的HP，并在HP降至一半时触发。在第七世代，它们恢复一半的HP，触发点在25%的HP。在第八世代，它们恢复1/3的HP。
#define B_X_ITEMS_BUFF              GEN_LATEST // 在第七世代及以上，X物品将属性提升2级，而不是1级。
#define B_MENTAL_HERB               GEN_LATEST // 在第五世代及以上，心智香草除了之前的爱情香草外，还可以治愈挑衅、 encore、折磨、治愈封锁和禁用。
#define B_TRAINERS_KNOCK_OFF_ITEMS  TRUE       // 如果为TRUE，训练师可以偷取/交换你的物品（非树果在战斗后恢复）。在原版游戏中，训练师不能偷取物品。
#define B_RETURN_STOLEN_NPC_ITEMS   GEN_LATEST // 在第五世代及以上，小偷和强夺不再从NPC那里偷取物品。
#define B_STEAL_WILD_ITEMS          GEN_LATEST // In Gen9, Thief and Covet steal a wild pokemon's item and send it to the bag. Before Gen9, the stolen item would be held by the Thief/Covet user.
#define B_RESTORE_HELD_BATTLE_ITEMS GEN_LATEST // 在第九世代，所有非树果物品在战斗后恢复。
#define B_SOUL_DEW_BOOST            GEN_LATEST // 在第三至六世代，灵魂水滴提升拉帝亚斯/拉帝欧斯的特攻和特防。在第七世代及以上，它改为提升它们的超能力和龙属性招式的威力。
#define B_NET_BALL_MODIFIER         GEN_LATEST // 在第七世代及以上，网球的捕捉倍数是x5，而不是x3。
#define B_DIVE_BALL_MODIFIER        GEN_LATEST // 在第四世代及以上，潜水球在冲浪或钓鱼时的效率提高x3.5。
#define B_NEST_BALL_MODIFIER        GEN_LATEST // 巢穴球的公式根据不同的世代有所不同。参见Cmd_handleballthrow。
#define B_REPEAT_BALL_MODIFIER      GEN_LATEST // 在第七世代及以上，重复球的捕捉倍数是x3.5，而不是x3。
#define B_TIMER_BALL_MODIFIER       GEN_LATEST // 在第五世代及以上，时间球的效率每回合提高x0.3，而不是x0.1
#define B_DUSK_BALL_MODIFIER        GEN_LATEST // 在第七世代及以上，黄昏球的捕捉倍数是x3，而不是x3.5。
#define B_QUICK_BALL_MODIFIER       GEN_LATEST // 在第五世代及以上，快速球的捕捉倍数是x5，而不是x4。
#define B_LURE_BALL_MODIFIER        GEN_LATEST // 在第八世代及以上，诱饵球的捕捉倍数是x4。在第七世代，它是x5。在第六世代及以前，它是x3。
#define B_HEAVY_BALL_MODIFIER       GEN_LATEST // 在第七世代及以上，沉重球的范围有所变化。参见Cmd_handleballthrow。
#define B_DREAM_BALL_MODIFIER       GEN_LATEST // 在第八世代及以上，梦境球在目标处于睡眠状态或具有睡眠特性时的捕捉倍数是x4。
#define B_SPORT_BALL_MODIFIER       GEN_LATEST // 在第八世代及以上，运动球的捕捉倍数从x1.5降低到x1。
#define B_SAFARI_BALL_MODIFIER      GEN_LATEST // 在第八世代及以上，狩猎球的捕捉倍数从x1.5降低到x1。
#define B_SERENE_GRACE_BOOST        GEN_LATEST // 在第五世代及以上，庄严之赐提升王者之岩和锐利之牙的附加退缩几率。

// 旗帜设置
// 在脚本中使用以下功能时，将0替换为您分配给它的标志ID。
// 例如：替换为FLAG_UNUSED_0x264，以便您可以使用该标志来切换功能。
#define B_FLAG_INVERSE_BATTLE       0     // 如果设置了此标志，则战斗的类型效果被反转。例如，火对水非常有效。
#define B_FLAG_FORCE_DOUBLE_WILD    0     // 如果设置了此标志，则所有陆地和冲浪野生战斗都将是双打战斗。
#define B_SMART_WILD_AI_FLAG        0     // 如果不为0，则可以在脚本中设置此标志以启用智能野生宝可梦AI。
#define B_FLAG_NO_BAG_USE           0     // 如果设置了此标志，则禁用在战斗中使用背包的功能。
#define B_FLAG_NO_CATCHING          0     // 如果设置了此标志，则禁用捕获野生宝可梦的功能。
#define B_FLAG_NO_RUNNING           0     // 如果设置了此标志，则禁用从野生战斗中逃跑的功能。同样会使吼叫/旋风和瞬间移动（在第八世代之前）失败。
#define B_FLAG_AI_VS_AI_BATTLE      0     // 如果设置了此标志，则玩家的宝可梦在下一场战斗中将由AI控制。
#define B_FLAG_DYNAMAX_BATTLE       0     // 如果设置了此标志，则为所有训练师启用战斗中的巨大化功能。
#define B_FLAG_TERA_ORB_CHARGED     0     // 如果设置了此标志，则太晶珠已充电。它在治疗时自动设置，并在配置后太晶化一次后清除。
#define B_FLAG_TERA_ORB_NO_COST     0     // 如果设置了此标志，则太晶珠在太晶化时不会消耗其电荷。在S/V中，这发生在与太古羽虫的事件之后。

// Var设置
// 在脚本中使用以下功能时，将0替换为您分配给它的变量ID。
// 例如：替换为VAR_UNUSED_0x40F7，以便您可以使用B_VAR_STARTING_STATUS进行该功能。
#define B_VAR_STARTING_STATUS       0     // 如果此变量有值，在战斗前将STATUS_FIELD_xx_TERRAIN赋值给它会导致战斗以该场地激活开始。
#define B_VAR_STARTING_STATUS_TIMER 0     // 如果此变量的值大于或等于1，场地将持续该回合数，否则将持续直到被覆盖。
#define B_VAR_WILD_AI_FLAGS         0     // 如果不为0，可以使用此变量添加默认野生AI标志。不适用于上述标志（1 << 15）

// 天空战斗
#define B_FLAG_SKY_BATTLE                 0     // 如果此标志有值，玩家将能够参与脚本天空战斗。
#define B_VAR_SKY_BATTLE                  0     // 如果此变量有值，游戏将记住在天空战斗中使用的宝可梦的位置。
#define B_SKY_BATTLE_STRICT_ELIGIBILITY   FALSE // 如果为TRUE，天空战斗将使用宝可梦XY的资格。如果为FALSE，则允许所有飞行属性或具有飘浮特性的宝可梦。

// 旗帜和变量设置
#define B_RESET_FLAGS_VARS_AFTER_WHITEOUT TRUE // 如果为TRUE，Overworld_ResetBattleFlagsAndVars将在玩家白化时重置与战斗相关的旗帜和变量。

// 游戏内伙伴旗帜
#define B_SHOW_PARTNER_TARGET             FALSE // 显示战斗伙伴将目标。

// 地形设置
#define B_TERRAIN_BG_CHANGE         TRUE       // 如果设置为TRUE，则地形招式会永久改变默认战斗背景，直到效果消失。
#define B_THUNDERSTORM_TERRAIN      TRUE       // 如果为TRUE，则野外雷暴会像第八世代一样生成雨和电场地。
#define B_TERRAIN_TYPE_BOOST        GEN_LATEST // 在第八世代，伤害增加30%而不是50%。
#define B_SECRET_POWER_EFFECT       GEN_LATEST // 秘密之力的效果根据地形和世代变化。参见`SetMoveEffect`中的MOVE_EFFECT_SECRET_POWER案例。
#define B_SECRET_POWER_ANIMATION    GEN_LATEST // 秘密之力的动画根据地形和世代变化。
#define B_NATURE_POWER_MOVES        GEN_LATEST // 自然之力根据不同的地形和世代召唤不同的招式。参见sNaturePowerMoves。
#define B_CAMOUFLAGE_TYPES          GEN_LATEST // 保护色根据地形和世代改变使用者的不同类型。参见sTerrainToType。
#define B_NEW_TERRAIN_BACKGROUNDS   FALSE      // 如果设置为TRUE，将为电、迷雾、草地和超能场地使用新的地形背景。

// 界面设置
#define B_ABILITY_POP_UP            TRUE  // 在第五世代及以上，宝可梦的特性在战斗中激活时会以弹出窗口显示。
#define B_FAST_INTRO                TRUE  // 如果设置为TRUE，战斗开场文本会与宝可梦的动画同时显示，而不是等待动画结束。
#define B_FAST_HP_DRAIN             TRUE  // 如果设置为TRUE，HP条的移动速度会更快。
#define B_FAST_EXP_GROW             TRUE  // 如果设置为TRUE，EXP条的移动速度会更快。
#define B_SHOW_TARGETS              TRUE  // 如果设置为TRUE，在选取招式前会显示所有可用的目标，对于击中2个或3个宝可梦的招式。
#define B_SHOW_CATEGORY_ICON        TRUE  // 如果设置为TRUE，在总结和招式重学者中会显示招式的分类图标。
#define B_HIDE_HEALTHBOX_IN_ANIMS   TRUE  // 如果设置为TRUE，在招式动画期间隐藏健康框。
#define B_WAIT_TIME_MULTIPLIER      16    // 这决定了战斗中文本暂停的持续时间。原版是16。较低的值会导致战斗速度更快。
#define B_QUICK_MOVE_CURSOR_TO_RUN  FALSE // 如果设置为TRUE，在战斗选项中对野生遭遇按下B键会将光标移动到逃跑选项。
#define B_MOVE_DESCRIPTION_BUTTON   L_BUTTON // 如果设置为除B_LAST_USED_BALL_BUTTON之外的按钮，按下此按钮将打开招式描述菜单。

// 捕捉设置
#define B_SEMI_INVULNERABLE_CATCH   GEN_LATEST // 在第四世代及以上，你不能对处于半无敌状态（挖洞/飞天等）的宝可梦投掷球。
#define B_CATCHING_CHARM_BOOST      20         // 如果玩家拥有捕捉魅力，捕捉率提升的百分比。
#define B_CRITICAL_CAPTURE          TRUE       // 如果设置为TRUE，将启用临界捕捉。
#define B_LAST_USED_BALL            TRUE       // 如果为TRUE，将实现第七世代的“最近使用的球”功能。
#define B_LAST_USED_BALL_BUTTON     R_BUTTON   // 如果实现了最近使用的球，这个按钮（或按钮组合）将触发投掷最近使用的球。
#define B_LAST_USED_BALL_CYCLE      TRUE       // 如果为TRUE，那么按住B_LAST_USED_BALL_BUTTON同时按D-Pad可以循环浏览球。

// 其他设置
#define B_DOUBLE_WILD_CHANCE            0          // 在野生遭遇中遇到两只宝可梦的百分比几率。
#define B_DOUBLE_WILD_REQUIRE_2_MONS    FALSE      // 如果设置为TRUE，当玩家只有1个可用的宝可梦时，默认进行单对单战斗，忽略B_DOUBLE_WILD_CHANCE和B_FLAG_FORCE_DOUBLE_WILD。
#define B_MULTI_BATTLE_WHITEOUT         GEN_LATEST // 在第四世代及以上，多人战斗在玩家和伙伴都没有更多的宝可梦战斗时结束。
#define B_EVOLUTION_AFTER_WHITEOUT      GEN_LATEST // 在第六世代及以上，战斗结束后，符合条件的宝可梦将进化，即使玩家输了。
#define B_WILD_NATURAL_ENEMIES          TRUE       // 如果设置为TRUE，在双对双野生战斗中，某些野生宝可梦物种会攻击其他物种（例如，猫鼬斩对沙罗蛇）。
#define B_AFFECTION_MECHANICS           TRUE       // 在第六世代及以上，有一个称为亲密度的统计数据，可以在战斗中触发不同的效果。从LGPE起，这些效果使用亲密度代替。
#define B_TRAINER_CLASS_POKE_BALLS      GEN_LATEST // 在第七世代及以上，训练师会根据他们的训练师类别使用特定类型的精灵球。
#define B_TRAINER_MON_RANDOM_ABILITY    FALSE      // 如果设置为TRUE，将为训练师的宝可梦随机生成一个合法的特性。
#define B_OBEDIENCE_MECHANICS           GEN_LATEST // 在PLA+（这里为第八世代及以上），服从限制也适用于非外敌宝可梦，尽管是基于它们遇到的等级而不是实际等级。
#define B_USE_FROSTBITE                 FALSE      // 在PLA中，冻伤取代了冻结。在这里启用这个标志会做同样的事情。招式仍然可以选择冻结或冻伤。冻结干燥、秘密之力和三重攻击取决于此配置。
#define B_OVERWORLD_SNOW                GEN_LATEST // 在第九世代及以上，野外的雪会召唤雪而不是冰雹。
#define B_OVERWORLD_FOG                 GEN_LATEST // 在第八世代及以上，野外的雾会在战斗中召唤雾气场地。在第四世代中，野外的雾会在战斗中召唤独特的雾天气条件。
#define B_TOXIC_REVERSAL                GEN_LATEST // 在第五世代及以上，剧毒会在战斗结束时变为常规中毒。
#define B_TRY_CATCH_TRAINER_BALL        GEN_LATEST // 在第四世代及以上，尝试捕捉训练师的宝可梦不会消耗精灵球。

// 动画设置
#define B_NEW_SWORD_PARTICLE            FALSE    // 如果设置为TRUE，更新剑舞的粒子效果。
#define B_NEW_LEECH_SEED_PARTICLE       FALSE    // 如果设置为TRUE，更新吸取种子的动画粒子。
#define B_NEW_HORN_ATTACK_PARTICLE      FALSE    // 如果设置为TRUE，更新角攻击的角粒子。
#define B_NEW_ROCKS_PARTICLE            FALSE    // 如果设置为TRUE，更新岩石粒子。
#define B_NEW_LEAF_PARTICLE             FALSE    // 如果设置为TRUE，更新叶子粒子。
#define B_NEW_EMBER_PARTICLES           FALSE    // 如果设置为TRUE，更新火花的火粒子。
#define B_NEW_MEAN_LOOK_PARTICLE        FALSE    // 如果设置为TRUE，更新恶颜的眼睛粒子。
#define B_NEW_TEETH_PARTICLE            FALSE    // 如果设置为TRUE，更新咬/猛咬的牙齿粒子。
#define B_NEW_HANDS_FEET_PARTICLE       FALSE    // 如果设置为TRUE，更新手/脚攻击粒子。
#define B_NEW_SPIKES_PARTICLE           FALSE    // 如果设置为TRUE，更新撒菱粒子。
#define B_NEW_FLY_BUBBLE_PARTICLE       FALSE    // 如果设置为TRUE，更新飞翔的“泡泡”粒子。
#define B_NEW_CURSE_NAIL_PARTICLE       FALSE    // 如果设置为TRUE，更新诅咒的指甲。
#define B_NEW_BATON_PASS_BALL_PARTICLE  FALSE    // 如果设置为TRUE，更新接力棒的精灵球精灵。
#define B_NEW_MORNING_SUN_STAR_PARTICLE FALSE    // 如果设置为TRUE，更新晨光的星星粒子。
#define B_NEW_IMPACT_PALETTE            FALSE    // 如果设置为TRUE，更新基本的“击中”调色板。
#define B_NEW_SURF_PARTICLE_PALETTE     FALSE    // 如果设置为TRUE，更新冲浪的波浪调色板。

// 精灵球动画和音效
#define B_ENEMY_THROW_BALLS          GEN_LATEST  // 在第六世代及以上，敌方训练师将精灵球投入战斗，而不是它们直接出现在地面上并打开。
#define B_ENEMY_THROW_BALLS_SOUND    GEN_LATEST  // 在第五世代及以上，敌方训练师的精灵球在投掷以派出宝可梦时会发出声音。这只能在B_ENEMY_THROW_BALLS设置为第六世代或更高时使用。
#define B_PLAYER_THROW_BALLS_SOUND   GEN_LATEST  // 在第五世代及以上，玩家的精灵球在投掷以派出宝可梦时会发出声音。

#define SHOW_TYPES_NEVER    0
#define SHOW_TYPES_ALWAYS   1
#define SHOW_TYPES_CAUGHT   2
#define B_SHOW_TYPES        SHOW_TYPES_NEVER // 当定义为SHOW_TYPES_ALWAYS时，在战斗中选择“战斗”后，所有宝可梦的类型都会显示。当定义为SHOW_TYPES_CAUGHT时，只有玩家拥有该宝可梦时才会显示类型。

// 宝可梦战斗精灵设置
#define B_ENEMY_MON_SHADOW_STYLE        GEN_3 // 在第四世代及以上，所有敌方宝可梦将在它们下方绘制阴影。
                                              // 目前第四世代及以上的阴影与训练师幻灯片不完全兼容

#endif // GUARD_CONFIG_BATTLE_H
