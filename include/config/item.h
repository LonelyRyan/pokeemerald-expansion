#ifndef GUARD_CONFIG_ITEM_H
#define GUARD_CONFIG_ITEM_H

// 物品配置
#define I_SHINY_CHARM_ADDITIONAL_ROLLS  2           // 如果玩家拥有闪耀魅力，额外增加的闪亮判定次数。设置为0以禁用闪耀魅力的效果。
#define I_KEY_FOSSILS                   GEN_LATEST  // 在第四世代及以上，所有第三代化石变成了普通物品。
#define I_KEY_ESCAPE_ROPE               GEN_LATEST  // 在第八世代，逃脱绳变成了关键物品。请注意，这会使其在商店中免费购买。
#define I_HEALTH_RECOVERY               GEN_LATEST  // 在第七世代及以上，某些治疗物品恢复的HP量与以往不同。
#define I_SITRUS_BERRY_HEAL             GEN_LATEST  // 在第四世代及以上，沙果从恢复30HP变更为恢复最大HP的25%。
#define I_VITAMIN_EV_CAP                GEN_LATEST  // 在第八世代及以上，维他命不再有每项能力100EV的上限。
#define I_BERRY_EV_JUMP                 GEN_LATEST  // 仅在第四世代，降低EV的树果如果将某项能力EV降低至100以下，则会降至100。
#define I_GRISEOUS_ORB_FORM_CHANGE      GEN_LATEST  // 在第九世代及以上，持有怨魂宝珠不再改变骑拉帝纳的形态。
#define I_GEM_BOOST_POWER               GEN_LATEST  // 从第六世代起，宝石提升威力从50%降低到30%。
#define I_USE_EVO_HELD_ITEMS_FROM_BAG   FALSE       // 如果为TRUE，在包里使用如猫爪或电电化合体器等物品可以进化宝可梦，就像在LA中一样。
#define I_TYPE_BOOST_POWER              GEN_LATEST  // 从第四世代起，所有普通类型提升持有物品的威力从10%增加到20%，例如木炭。
#define I_SELL_VALUE_FRACTION           GEN_LATEST  // 从第九世代起，物品的售价为其价值的1/4，而不是1/2。
#define I_PRICE                         GEN_LATEST  // 一些物品在不同世代的价值有所变化。
#define I_BERRY_PRICE                   GEN_7       // 由于树果在第八世代及以上变得无法种植，它们的价格上升了。
#define I_POWER_ITEM_BOOST              GEN_LATEST  // 从第七世代起，力量物品提供8EV而不是4EV。
#define I_PREMIER_BALL_BONUS            GEN_LATEST  // 从LGPE起（这里为第八世代），每购买10个任意类型的精灵球，就会获得一个高级球。以前，这只适用于普通精灵球，且每笔购买只能获得1个。
#define I_ROTOM_CATALOG_THUNDER_SHOCK   GEN_LATEST  // 从第九世代起，将洛托姆变回基础形态将教会它电光一闪，即使它知道其他招式。
#define I_REPEL_INCLUDE_FAINTED         GEN_LATEST  // 在第一世代和第六世代及以上，驱虫剂总是使用队伍中第一个成员的等级来检查防止遭遇的野生宝可梦，即使该成员已经昏倒。在第二至第五世代，它只使用第一个未昏倒的宝可梦的等级。

// 技能机配置
#define I_REUSABLE_TMS          FALSE       // 在第五至第八世代，技能机可重复使用。将此设置为TRUE将使所有原版技能机可重复使用，也可以通过将它们的重要性设置为1来挑选。

// 经验分享配置
// 要使用此功能，将0替换为您分配给它的标志ID。
// 例如：替换为FLAG_UNUSED_0x264，以便您可以使用该标志来切换功能。
#define I_EXP_SHARE_FLAG        0           // 如果设置了此标志，队伍中的每个宝可梦都会获得经验，无论它们是否参与了战斗。
#define I_EXP_SHARE_ITEM        GEN_5       // 从第六世代起，经验分享从持有物品变更为关键物品，可以切换上述效果。

// 驱虫剂/吸引剂配置
// 这两个设置既是独立的也是互补的。
#define VAR_LAST_REPEL_LURE_USED    0       // 如果已分配此变量，将保存最后使用的驱虫剂/吸引剂，并且玩家将获得原版驱虫剂YES/NO选项的提示，除非I_REPEL_LURE_MENU设置为TRUE。
#define I_REPEL_LURE_MENU           TRUE    // 如果为TRUE，玩家可以在前一个驱虫剂/吸引剂用完时选择使用哪个驱虫剂/吸引剂。如果VAR_LAST_REPEL_LURE_USED不为0，则通过它保存光标位置。

// 对战搜索器
#define I_VS_SEEKER_CHARGING        0     // 如果分配了此标志，将启用对战搜索器功能。当玩家拥有对战搜索器时，再次对战呼叫功能将停止工作。

// 钓鱼
#define I_FISHING_BITE_ODDS        GEN_LATEST // 在第一和第二世代，旧钓竿有100%的咬钩几率，好钓竿有66%的咬钩几率，超级钓竿有50%的咬钩几率。在第三世代，所有钓竿都有50%的基本咬钩几率。从第四世代起，旧钓竿有25%的基本咬钩几率，好钓竿有50%的咬钩几率，超级钓竿有75%的咬钩几率。
#define I_FISHING_MINIGAME         GEN_3      // 每个世代使用一种变化的收线小游戏，一旦宝可梦被钩住。注意：目前只实现了第一/二世代和第三世代的小游戏！
#define I_FISHING_ENVIRONMENT      GEN_LATEST // In Gen 3, the battle environment when fighting a hooked Pokémon is based on the tile the player is standing on. In Gen 4 onwards, the environment is based on tile that is being fished in, resulting in it usually being a water environment.
#define I_FISHING_STICKY_BOOST     GEN_LATEST // 在第三世代，如果队伍中的第一个位置有宝可梦持有吸盘或粘滞特性，咬钩几率会增加约35%。从第四世代起，它会使基本咬钩几率翻倍。
#define I_FISHING_FOLLOWER_BOOST   FALSE      // 在HGSS中，钓鱼咬钩几率会根据当前跟随宝可梦的亲密度增加。
#define I_FISHING_CHAIN            FALSE      // 从XY引入，连续钩住同一只宝可梦会增加该宝可梦闪亮的几率。注意：这个实现是对实际功能的近似，因为XY的功能没有被彻底记录或数据挖掘。
#define I_FISHING_PROXIMITY        FALSE      // 从XY引入，在封闭区域远离其他人钓鱼会增加宝可梦被钩住的几率。注意：这个实现是对实际功能的近似，因为XY的功能没有被彻底记录或数据挖掘。

#endif // GUARD_CONFIG_ITEM_H
