#ifndef GUARD_CONFIG_OVERWORLD_H
#define GUARD_CONFIG_OVERWORLD_H

// 移动配置
#define OW_RUNNING_INDOORS          GEN_LATEST  // 在第四世代及以上，玩家被允许在室内奔跑。
#define OW_AUTO_SIGNPOST            FALSE       // 当启用时，如果玩家面对的瓦片有MB_SIGNPOST、MB_POKEMART_SIGN或MB_POKEMON_CENTER_SIGN，玩家将自动阅读标识牌，就像在FRLG中看到的那样。
#define SLOW_MOVEMENT_ON_STAIRS     FALSE       // 如果启用，玩家上下楼梯时的移动速度会变慢，就像在FRLG中一样。

// 其他设置
#define OW_POISON_DAMAGE                GEN_LATEST // 在第四世代，宝可梦在户外不再因中毒而晕倒。在第五世代及以上，它们完全不再受到伤害。
#define OW_DOUBLE_APPROACH_WITH_ONE_MON FALSE      // 如果启用，即使你的宝可梦队伍中只有一个符合条件的宝可梦，你也可能同时被两个训练师发现。
#define OW_HIDE_REPEAT_MAP_POPUP        FALSE      // 如果启用，如果进入的地图与上一个地图的地图区域ID相同，则不会显示地图弹出窗口。
#define OW_FRLG_WHITEOUT                FALSE      // 如果启用，会显示额外的白屏消息和白屏后事件脚本与治疗NPC。

// 物品获得描述框
#define OW_ITEM_DESCRIPTIONS_OFF        0   // 从不显示描述
#define OW_ITEM_DESCRIPTIONS_FIRST_TIME 1   // 第一次显示 (** 会改变存档结构 - 见结构体SaveBlock3 **)
#define OW_ITEM_DESCRIPTIONS_ALWAYS     2   // 总是显示描述
#define OW_SHOW_ITEM_DESCRIPTIONS       OW_ITEM_DESCRIPTIONS_OFF    // 如果启用，当找到物品时会显示物品的描述/图片。

// 这些世代定义只对树果和OW_PC_MOVE_ORDER有区别
#define GEN_6_XY GEN_6
#define GEN_6_ORAS GEN_LATEST + 1

// PC设置
#define OW_PC_PRESS_B               GEN_LATEST // 在第四世代，当持有宝可梦时按下B键相当于存放它。在第三世代，会显示“你正拿着一只宝可梦！”的错误信息。
#define OW_PC_JAPAN_WALDA_ICONS     TRUE       // 在翡翠（Emerald）的美版发布中，Walda的壁纸上的十字、闪电和正电拍拍图标从日本版开始就是空白的。将此设置为TRUE将恢复它们。
#define OW_PC_HEAL                  GEN_LATEST // 在第八世代及以上，存放到电脑中的宝可梦不再被治愈。
#define OW_PC_MOVE_ORDER            GEN_LATEST // 从第四世代开始，电脑菜单中的选项顺序发生了变化。
#define OW_PC_RELEASE_ITEM          GEN_LATEST // 在第八世代及以上，释放持有物品的宝可梦时，物品会归还到背包中。

#define OW_BERRY_MUTATIONS             FALSE      // 如果启用，树果植物可能会根据种植在旁边的树果发生变异。
#define OW_BERRY_MUTATION_CHANCE       25         // 确定变异的百分比机会。
#define OW_BERRY_MOISTURE              FALSE      // 如果启用，树果的浇水不再是每阶段浇一次水，而是保持土壤湿润。
#define OW_BERRY_ALWAYS_WATERABLE      FALSE      // 如果OW_BERRY_MOISTURE启用，此设置允许玩家持续浇水；干燥的土壤会导致树果产量减少（像第四世代一样）。当关闭时，只有在土壤干燥时才能浇水，浇水会增加产量（像第六世代一样）。
#define OW_BERRY_MULCH_USAGE           FALSE      // 如果启用，肥料可以用于土壤以施肥。否则，它被认为是不可用的。注意，湿润效果只有在OW_BERRY_MOISTURE启用时才有效！
#define OW_BERRY_WEEDS                 FALSE      // 如果启用，树果植物上可能会长出杂草，玩家需要处理。没有OW_BERRY_MOISTURE时，除草奖励会向下取整。
#define OW_BERRY_PESTS                 FALSE      // 如果启用，树果植物上可能会有病虫害，玩家需要处理。没有OW_BERRY_MOISTURE时，病虫害奖励会向下取整。
#define OW_BERRY_SIX_STAGES            FALSE      // 在XY中，树果经历六个阶段而不是四个。这个切换不影响树木准备好收获的时间。没有OW_BERRY_MOISTURE时，两个额外的阶段计为BERRY_STAGE_TALLER用于浇水目的。

#define OW_BERRY_GROWTH_RATE           GEN_3      // 每个树果植物生长所需的时间预设。
#define OW_BERRY_YIELD_RATE            GEN_3      // 每株植物可以产出的树果数量预设。
#define OW_BERRY_DRAIN_RATE            GEN_6_ORAS // 如果OW_BERRY_MOISTURE启用，此设置改变了土壤干燥的速度。GEN_4使用依赖树果的排水率，GEN_6_XY在24小时内干燥（使用相关肥料4小时内干燥）GEN_6_ORAS在4小时内干燥。其他值是非法的。
#define OW_BERRY_IMMORTAL              FALSE      // 如果启用，一旦树果树长出了树果，除非被玩家采摘，否则树木不会消失。

// Overworld Pokémon
#define OW_POKEMON_OBJECT_EVENTS       TRUE       // Adds Object Event fields for every species. Can be used for NPCs using the OBJ_EVENT_GFX_SPECIES macro (eg. OBJ_EVENT_GFX_SPECIES(BULBASAUR))
#define OW_SUBSTITUTE_PLACEHOLDER      TRUE       // Use a substitute OW for Pokémon that are missing overworld sprites
#define OW_LARGE_OW_SUPPORT            TRUE       // If true, adds a small amount of overhead to OW code so that large (48x48, 64x64) OWs will display correctly under bridges, etc.
#define OW_PKMN_OBJECTS_SHARE_PALETTES FALSE      // [WIP!! NOT ALL PALETTES HAVE BEEN ADJUSTED FOR THIS!!] If TRUE, follower palettes are taken from battle sprites.
#define OW_GFX_COMPRESS                TRUE       // Adds support for compressed OW graphics, (Also compresses pokemon follower graphics).
                                                  // IMPORTANT: Gfx are loaded into VRAM to avoid continous decompression. If you require more VRAM or want to use a lot of overworld Pokémon at once, you should disable this config.
                                                  // Compressed gfx are incompatible with non-power-of-two sprite sizes:
                                                  // (You should not use 48x48 sprites/tables for compressed gfx)
                                                  // 16x32, 32x32, 64x64 etc are fine
#define OW_MON_WANDER_WALK             TRUE       // If true, OW pokemon with MOVEMENT_TYPE_WANDER will walk-in-place in between steps.
// Follower Pokémon
#define OW_FOLLOWERS_ENABLED           FALSE      // Enables follower Pokémon, HGSS style. Requires OW_POKEMON_OBJECT_EVENTS. Note that additional scripting may be required for them to be fully supported!
#define OW_FOLLOWERS_BOBBING           TRUE       // If TRUE, follower Pokémon will bob up and down during their idle & walking animations
#define OW_FOLLOWERS_POKEBALLS         TRUE       // If TRUE, follower Pokémon will emerge from the Poké Ball they are stored in, instead of a normal Poké Ball
#define OW_FOLLOWERS_WEATHER_FORMS     FALSE      // If TRUE, Castform and Cherrim gain FORM_CHANGE_OVERWORLD_WEATHER, which will make them transform in the overworld based on the weather.
#define OW_FOLLOWERS_COPY_WILD_PKMN    FALSE      // If TRUE, follower Pokémon that know Transform or have Illusion/Imposter will copy wild Pokémon at random.
#define OW_BATTLE_ONLY_FORMS           TRUE       // If TRUE, loads overworld sprites for battle-only forms like Mega Evos. Requires OW_POKEMON_OBJECT_EVENTS.
#define B_FLAG_FOLLOWERS_DISABLED      0          // Enables / Disables followers by using a flag. Helpful to disable followers for a period of time.


#define OW_FOLLOWERS_SCRIPT_MOVEMENT   TRUE       // TRUE: Script collisions hide follower, FLAG_SAFE_FOLLOWER_MOVEMENT on by default
                                                  // FALSE: Script collisions unhandled, FLAG_SAFE_FOLLOWER_MOVEMENT off by default

// If set, the only pokemon allowed to follow you
// will be those matching species, met location,
// and/or met level;
// These accept vars, too: VAR_TEMP_1, etc
#define OW_MON_ALLOWED_SPECIES (0)
#define OW_MON_ALLOWED_MET_LVL (0)
#define OW_MON_ALLOWED_MET_LOC (0)
// Examples:
// Yellow Pikachu:
// #define OW_MON_ALLOWED_SPECIES (SPECIES_PIKACHU)
// #define OW_MON_ALLOWED_MET_LVL (0)
// #define OW_MON_ALLOWED_MET_LOC (MAPSEC_PALLET_TOWN)
// Hoenn Starter:
// #define OW_MON_ALLOWED_SPECIES (0)
// #define OW_MON_ALLOWED_MET_LVL (5)
// #define OW_MON_ALLOWED_MET_LOC (MAPSEC_ROUTE_101)
// Species set in VAR_XXXX:
// #define OW_MON_ALLOWED_SPECIES (VAR_XXXX)
// #define OW_MON_ALLOWED_MET_LVL (0)
// #define OW_MON_ALLOWED_MET_LOC (0)

// 战斗外能力效果
#define OW_SYNCHRONIZE_NATURE       GEN_LATEST // 在第八世代及以上，如果队伍中首位的宝可梦有同步特性，野生宝可梦将总是具有与它们相同的性格，而不是前代游戏中的50%机会。礼物宝可梦除外。
                                               // 在USUM（这里为GEN_7），如果队伍中首位的宝可梦有同步特性，礼物宝可梦将总是具有与它们相同的性格，无论它们的蛋群是什么。
                                               // 在ORAS（这里为GEN_6），如果队伍中首位的宝可梦有同步特性，来自未发现蛋群的礼物宝可梦将总是具有与它们相同的性格。
#define OW_SUPER_LUCK               GEN_LATEST // 在第八世代及以上，如果队伍中首位的宝可梦有超幸运特性，野生持有物品的几率增加到60%/20%。
#define OW_INFILTRATOR              GEN_LATEST // 在第八世代及以上，如果队伍中首位的宝可梦有穿透特性，野生遭遇率减半。
#define OW_HARVEST                  GEN_LATEST // 在第八世代及以上，如果队伍中首位的宝可梦有收获特性，有50%的机会遭遇草属性宝可梦。
#define OW_LIGHTNING_ROD            GEN_LATEST // 在第八世代及以上，如果队伍中首位的宝可梦有避雷针特性，有50%的机会遭遇电属性宝可梦。
#define OW_STORM_DRAIN              GEN_LATEST // 在第八世代及以上，如果队伍中首位的宝可梦有风暴降半特性，有50%的机会遭遇水属性宝可梦。
#define OW_FLASH_FIRE               GEN_LATEST // 在第八世代及以上，如果队伍中首位的宝可梦有火焰之躯特性，有50%的机会遭遇火属性宝可梦。

// 这些世代定义只对OW_ALTERED_TIME_RATIO有所区别
#define GEN_8_PLA                       GEN_LATEST + 2

// 时间
#define OW_TIMES_OF_DAY                 GEN_LATEST // 不同的世代在不同时间改变一天中的时间。
#define OW_USE_FAKE_RTC                 FALSE      // 当为TRUE时，游戏内时钟的秒数每60个playTimeVBlanks（每60帧）只前进一次。
#define OW_ALTERED_TIME_RATIO           GEN_LATEST // 在GEN_8_PLA中，游戏中的时间每秒钟前进60秒对应RTC的每秒钟。在GEN_9中，是20秒。如果OW_USE_FAKE_RTC为FALSE，则此设置无效果。

// 野外旗帜
// 在脚本中使用以下功能时，将0替换为您分配给它的标志ID。
// 例如：替换为FLAG_UNUSED_0x264，以便您可以使用该标志来切换功能。
#define OW_FLAG_PAUSE_TIME          0  // 如果设置了此标志并且OW_USE_FAKE_RTC启用，则游戏内时钟的秒数不会前进。
#define OW_FLAG_NO_ENCOUNTER        0  // 如果设置了此标志，则禁用野生遭遇。
#define OW_FLAG_NO_TRAINER_SEE      0  // 如果设置了此标志，则训练师不会主动挑战玩家，除非与他们对话。
#define OW_FLAG_NO_COLLISION        0  // 如果设置了此标志，则玩家可以走过有碰撞的瓦片。主要用于调试目的。
#define OW_FLAG_POKE_RIDER          0  // If this flag is set, the player will be able to use fly from the Pokenav Region Map and the Town Map key item by pressing 'R' on a city/location they are able to fly to.

#define BATTLE_PYRAMID_RANDOM_ENCOUNTERS    FALSE    // 如果设置为TRUE，战斗金字塔宝可梦将根据挑战的轮次随机生成，而不是在src/data/battle_frontier/battle_pyramid_level_50_wild_mons.h（或open_level_wild_mons.h）中硬编码。

// 地图弹出配置
#define OW_POPUP_GENERATION        GEN_3    // 不同世代在野外弹出中显示位置名称的方式不同。
                                            // 目前只有GEN_3和GEN_5两种选择，其他默认为Gen3弹出。

// Gen5地图弹出配置
// 常量
#define OW_POPUP_BW_TIME_NONE      0   // 不显示时间
#define OW_POPUP_BW_TIME_12_HR     1   // 使用12小时制（上午/下午）时间
#define OW_POPUP_BW_TIME_24_HR     2   // 使用24小时制时间

#define OW_POPUP_BW_COLOR_BLACK    0   // B2的黑色弹出
#define OW_POPUP_BW_COLOR_WHITE    1   // W2的白色弹出

// 配置
#define OW_POPUP_BW_COLOR          OW_POPUP_BW_COLOR_BLACK  // B2W2使用不同的颜色显示他们的地图弹出。
#define OW_POPUP_BW_TIME_MODE      OW_POPUP_BW_TIME_NONE    // 确定显示哪种时间。
#define OW_POPUP_BW_ALPHA_BLEND    FALSE                    // 启用弹出的alpha混合/透明度。主要用于与黑色选项一起使用。

// 宝可梦中心
#define OW_IGNORE_EGGS_ON_HEAL           GEN_LATEST         // 在第四世代及以上，宝可梦中心的护士在治疗机上不会治愈蛋。
#define OW_UNION_DISABLE_CHECK           FALSE              // 当为TRUE时，护士不会通知玩家是否有训练师在联合室等待。这加快了宝可梦中心的加载速度。
#define OW_FLAG_MOVE_UNION_ROOM_CHECK    0                  // 如果设置了此标志，游戏只会在治疗宝可梦时检查是否有玩家在联合室，而不是玩家进入宝可梦中心时。这加快了宝可梦中心的加载速度。如果OW_UNION_DISABLE_CHECK为TRUE，则此设置被忽略。

// Berry Blender
#define BERRY_BLENDER_THROW_ALL_BERRIES_AT_ONCE TRUE        // This is a small little addition, that basically speeds up the animation where all players' berries are thrown into the blender. Self-explanatory I hope!

#endif // GUARD_CONFIG_OVERWORLD_H
