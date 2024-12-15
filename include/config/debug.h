#ifndef GUARD_CONFIG_DEBUG_H
#define GUARD_CONFIG_DEBUG_H

// 野外调试
#define DEBUG_OVERWORLD_MENU            TRUE                // 启用一个野外调试菜单，可以通过更改旗帜、变量、给予宝可梦等操作，默认情况下在野外按住R键并按START键即可访问。
#define DEBUG_OVERWORLD_HELD_KEYS       (R_BUTTON)          // 需要按住的键以打开调试菜单。
#define DEBUG_OVERWORLD_TRIGGER_EVENT   pressedStartButton  // 当按住DEBUG_OVERWORLD_HELD_KEYS中定义的键时，触发打开菜单的事件。
#define DEBUG_OVERWORLD_IN_MENU         FALSE               // 将野外调试菜单的按钮组合替换为开始菜单中的一个条目（位于宝可梦图鉴上方）。

// 对战调试菜单
#define DEBUG_BATTLE_MENU               TRUE    // 如果设置为TRUE，启用一个在对战中按Select按钮即可使用的调试菜单。
#define DEBUG_AI_DELAY_TIMER            FALSE   // 如果设置为TRUE，显示AI选择招式所需的帧数。替换“What will PKMN do”文本。对于开发人员或任何修改AI代码并希望查看其运行时间是否过长的人非常有用。

// 宝可梦调试
#define DEBUG_POKEMON_SPRITE_VISUALIZER TRUE    // 启用一个用于宝可梦精灵和图标的调试菜单，通过在总结屏幕上按Select键访问。

#endif // GUARD_CONFIG_DEBUG_H
