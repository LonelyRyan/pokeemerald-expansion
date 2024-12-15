#ifndef GUARD_CONFIG_GENERAL_H
#define GUARD_CONFIG_GENERAL_H

// 在第三代游戏中，各种调试版本中使用了断言。
// 红宝石/蓝宝石和绿宝石没有这些断言，而火红仍然在ROM中有它们。
// 这是因为开发者在发布前忘记定义NDEBUG，然而这已经改变，
// 因为红宝石的实际调试版本并不使用AGBPrint功能。
#define NDEBUG

// 要启用printf调试，注释掉"#define NDEBUG"。这允许
// 使用各种AGBPrint函数。（见include/gba/isagbprint.h）。
// 见下文以启用不同版本的漂亮打印。

#ifndef NDEBUG

#define PRETTY_PRINT_MINI_PRINTF (0)
#define PRETTY_PRINT_LIBC (1)

#define LOG_HANDLER_AGB_PRINT (0)
#define LOG_HANDLER_NOCASH_PRINT (1)
#define LOG_HANDLER_MGBA_PRINT (2)

// 使用这个开关来选择漂亮打印的处理程序。
// 注意：mini_printf支持自定义的漂亮打印格式化程序以显示预处理编码的字符串。（%S）
//      一些libc发行版（特别是dkp arm-libc）将无法链接漂亮打印。
#define PRETTY_PRINT_HANDLER (PRETTY_PRINT_MINI_PRINTF)

// 使用这个开关来选择printf输出的处理程序。
// 注意：这些只在相应的模拟器上工作，并且不应该在生产环境中使用。
//      一些模拟器或真实硬件可能会（并且允许）崩溃如果它们被使用。
//      AGB_PRINT在相应的调试单元上受支持。

#define LOG_HANDLER (LOG_HANDLER_MGBA_PRINT)
#endif

// 解释以修复一些已知的小错误
#define BUGFIX

// 各种未定义行为的错误可能会或不会阻止使用
// 更新的编译器进行编译。所以使用现代编译器时总是修复它们。
#if MODERN || defined(BUGFIX)
#ifndef UBFIX
#define UBFIX
#endif
#endif

// 兼容性定义，用于其他项目检测pokeemerald扩展
#define RHH_EXPANSION

// 为向后兼容包含的基于分支的旧定义
#define BATTLE_ENGINE
#define POKEMON_EXPANSION
#define ITEM_EXPANSION

// 用于配置中定义行为的世代常量。
#define GEN_1 0
#define GEN_2 1
#define GEN_3 2
#define GEN_4 3
#define GEN_5 4
#define GEN_6 5
#define GEN_7 6
#define GEN_8 7
#define GEN_9 8
// 将GEN_LATEST的值更改为不同的世代将一次性更改所有使用它的默认设置。
#define GEN_LATEST GEN_9

// 一般设置
#define EXPANSION_INTRO              TRUE    // 如果为TRUE，在原版版权屏幕后将播放自定义的RHH开场动画。
#define POKEDEX_PLUS_HGSS            TRUE   // 如果为TRUE，启用自定义的HGSS风格的宝可梦图鉴。
#define SUMMARY_SCREEN_NATURE_COLORS TRUE    // 如果为TRUE，在总结屏幕上，基于性格的统计增益和减少将以红色和蓝色显示。
#define HQ_RANDOM                    TRUE    // 如果为TRUE，用SFC32 RNG的实现替换默认的随机数生成器。可能会破坏依赖于RNG的代码。
#define COMPETITIVE_PARTY_SYNTAX     TRUE    // 如果为TRUE，队伍在“竞技语法”中定义。
#define AUTO_SCROLL_TEXT             FALSE   // 如果为TRUE，在NUM_FRAMES_AUTO_SCROLL_DELAY帧后文本将自动滚动到下一行。玩家仍然可以自己按A_BUTTON或B_BUTTON滚动。
#define NUM_FRAMES_AUTO_SCROLL_DELAY 49

// 用于UNITS的度量系统常量
#define UNITS_IMPERIAL               0       // 英寸，英尺，磅
#define UNITS_METRIC                 1       // 米，千克

#define UNITS                        UNITS_IMPERIAL
#define CHAR_DEC_SEPARATOR           CHAR_PERIOD // CHAR_PERIOD仅在英国和美国用作小数分隔符。世界其他地方使用CHAR_COMMA。

// 命名屏幕
#define AUTO_LOWERCASE_KEYBOARD      GEN_LATEST  // 从第六世代开始，输入第一个大写字符后，键盘切换为小写字母。

#define SAVE_TYPE_ERROR_SCREEN              FALSE   // 当启用时，如果游戏在没有闪存芯片的卡上加载，或在模拟器上的错误保存类型设置中加载，将显示错误消息而不是崩溃。
#endif // GUARD_CONFIG_GENERAL_H
