#ifndef GUARD_CONSTANTS_APPRENTICE_H
#define GUARD_CONSTANTS_APPRENTICE_H

#define NUM_APPRENTICES 16
#define APPRENTICE_SPECIES_COUNT 10

// 定义询问宝可梦的问题数量
#define NUM_WHICH_MON_QUESTIONS  MULTI_PARTY_SIZE  // 询问“哪只宝可梦”的问题数量，取决于队伍大小
#define NUM_WHICH_MOVE_QUESTIONS 5                 // 询问“哪个招式”的问题数量
// 下面的 +2 分别为询问首发宝可梦和胜利台词的问题各占一个
#define MAX_APPRENTICE_QUESTIONS NUM_WHICH_MON_QUESTIONS + NUM_WHICH_MOVE_QUESTIONS + 2  // 最大问题数量

// 定义学徒模式的等级模式
#define APPRENTICE_LVL_MODE_50    (FRONTIER_LVL_50 + 1)  // 学徒模式等级50
#define APPRENTICE_LVL_MODE_OPEN  (FRONTIER_LVL_OPEN + 1)  // 学徒模式开放等级

// 定义学徒功能的标识
#define APPRENTICE_FUNC_GAVE_LVLMODE         0  // 已给予等级模式
#define APPRENTICE_FUNC_SET_LVLMODE          1  // 设置等级模式
#define APPRENTICE_FUNC_SET_ID               2  // 设置ID
#define APPRENTICE_FUNC_SHUFFLE_SPECIES      3  // 打乱宝可梦种类
#define APPRENTICE_FUNC_RANDOMIZE_QUESTIONS  4  // 随机化问题
#define APPRENTICE_FUNC_ANSWERED_QUESTION    5  // 已回答问题
#define APPRENTICE_FUNC_IS_FINAL_QUESTION    6  // 是否是最后一个问题
#define APPRENTICE_FUNC_MENU                 7  // 菜单功能
#define APPRENTICE_FUNC_PRINT_MSG            8  // 打印消息
#define APPRENTICE_FUNC_RESET                9  // 重置
#define APPRENTICE_FUNC_CHECK_GONE           10  // 检查是否离开
#define APPRENTICE_FUNC_GET_QUESTION         11  // 获取问题
#define APPRENTICE_FUNC_GET_NUM_PARTY_MONS   12  // 获取队伍中宝可梦的数量
#define APPRENTICE_FUNC_SET_PARTY_MON        13  // 设置队伍中的宝可梦
#define APPRENTICE_FUNC_INIT_QUESTION_DATA   14  // 初始化问题数据
#define APPRENTICE_FUNC_FREE_QUESTION_DATA   15  // 释放问题数据
#define APPRENTICE_FUNC_BUFFER_STRING        16  // 缓存字符串
#define APPRENTICE_FUNC_SET_MOVE             17  // 设置招式
#define APPRENTICE_FUNC_SET_LEAD_MON         18  // 设置首发宝可梦
#define APPRENTICE_FUNC_OPEN_BAG             19  // 打开背包
#define APPRENTICE_FUNC_TRY_SET_HELD_ITEM    20  // 尝试设置携带道具
#define APPRENTICE_FUNC_SAVE                 21  // 保存
#define APPRENTICE_FUNC_SET_GFX_SAVED        22  // 设置保存的图形
#define APPRENTICE_FUNC_SET_GFX              23  // 设置图形
#define APPRENTICE_FUNC_SHOULD_LEAVE         24  // 是否应该离开
#define APPRENTICE_FUNC_SHIFT_SAVED          25  // 移动保存的内容

// 定义学徒消息的类型
#define APPRENTICE_MSG_PLEASE_TEACH             0  // 请教授
#define APPRENTICE_MSG_REJECT                   1  // 拒绝
#define APPRENTICE_MSG_WHICH_LVL_MODE           2  // 选择哪个等级模式
#define APPRENTICE_MSG_THANKS_LVL_MODE          3  // 感谢选择等级模式
#define APPRENTICE_MSG_WHICH_MON_FIRST          4  // 选择哪只首发宝可梦
#define APPRENTICE_MSG_THANKS_MON_FIRST         5  // 感谢选择首发宝可梦
#define APPRENTICE_MSG_WHICH_MON                6  // 选择哪只宝可梦
#define APPRENTICE_MSG_THANKS_MON               7  // 感谢选择宝可梦
#define APPRENTICE_MSG_WHICH_MOVE               8  // 选择哪个招式
#define APPRENTICE_MSG_THANKS_MOVE              9  // 感谢选择招式
#define APPRENTICE_MSG_WHAT_HELD_ITEM           10  // 选择哪个携带道具
#define APPRENTICE_MSG_PICK_WIN_SPEECH          11  // 选择胜利台词
#define APPRENTICE_MSG_THANKS_HELD_ITEM         12  // 感谢选择携带道具
#define APPRENTICE_MSG_HOLD_NOTHING             13  // 不携带任何道具
#define APPRENTICE_MSG_THANKS_NO_HELD_ITEM      14  // 感谢不携带道具
#define APPRENTICE_MSG_THANKS_WIN_SPEECH        15  // 感谢选择胜利台词
#define APPRENTICE_MSG_ITEM_ALREADY_SUGGESTED   16  // 道具已被建议

// 定义问题的类型
#define APPRENTICE_QUESTION_WHICH_FIRST    1  // 选择首发宝可梦
#define APPRENTICE_QUESTION_WHICH_MON      2  // 选择哪只宝可梦
#define APPRENTICE_QUESTION_WHICH_MOVE     3  // 选择哪个招式
#define APPRENTICE_QUESTION_WHAT_ITEM      4  // 选择哪个携带道具
#define APPRENTICE_QUESTION_WIN_SPEECH     5  // 选择胜利台词

// 定义问题ID
// 如果使用与上面相同的值，这将是多余的
#define QUESTION_ID_WIN_SPEECH    0  // 胜利台词问题ID
#define QUESTION_ID_WHAT_ITEM     1  // 携带道具问题ID
#define QUESTION_ID_WHICH_MOVE    2  // 招式问题ID
#define QUESTION_ID_WHICH_FIRST   3  // 首发宝可梦问题ID

// 定义学徒询问的内容
#define APPRENTICE_ASK_WHICH_LEVEL  0  // 询问等级
#define APPRENTICE_ASK_3SPECIES     1  // 询问三种宝可梦
#define APPRENTICE_ASK_2SPECIES     2  // 询问两种宝可梦
#define APPRENTICE_ASK_MOVES        3  // 询问招式
#define APPRENTICE_ASK_GIVE         4  // 询问给予
#define APPRENTICE_ASK_YES_NO       6  // 询问是或否

// 定义缓存的宝可梦信息
#define APPRENTICE_BUFF_SPECIES1         0  // 第一种宝可梦
#define APPRENTICE_BUFF_SPECIES2         1  // 第二种宝可梦
#define APPRENTICE_BUFF_SPECIES3         2  // 第三种宝可梦
#define APPRENTICE_BUFF_MOVE1            3  // 第一个招式
#define APPRENTICE_BUFF_MOVE2            4  // 第二个招式
#define APPRENTICE_BUFF_ITEM             5  // 携带道具
#define APPRENTICE_BUFF_NAME             6  // 名字
#define APPRENTICE_BUFF_WIN_SPEECH       7  // 胜利台词
#define APPRENTICE_BUFF_LEVEL            8  // 等级
#define APPRENTICE_BUFF_LEAD_MON_SPECIES 9  // 首发宝可梦种类

#endif // GUARD_CONSTANTS_APPRENTICE_H
