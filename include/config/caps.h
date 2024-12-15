#ifndef GUARD_CONFIG_CAPS_H
#define GUARD_CONFIG_CAPS_H

// 等级限制常量
#define EXP_CAP_NONE                    0 // 常规行为，不应用等级限制
#define EXP_CAP_HARD                    1 // 等级等于或超过等级限制的宝可梦无法获得任何经验
#define EXP_CAP_SOFT                    2 // 等级等于或超过等级限制的宝可梦将获得减少的经验

#define LEVEL_CAP_NONE                  0 // 没有等级限制，仅在B_EXP_CAP_TYPE设置为EXP_CAP_NONE时适用
#define LEVEL_CAP_FLAG_LIST             1 // 根据sLevelCapFlagMap中第一个未设置的标志选择等级限制
#define LEVEL_CAP_VARIABLE              2 // 根据指定事件变量的内容选择等级限制

// 等级限制配置
#define B_EXP_CAP_TYPE                  EXP_CAP_NONE   // 选择要应用的等级限制类型
#define B_LEVEL_CAP_TYPE                LEVEL_CAP_NONE // 选择确定等级限制的方法
#define B_LEVEL_CAP_VARIABLE            0 // 如果B_LEVEL_CAP_TYPE设置为LEVEL_CAP_VARIABLE，使用此事件变量来确定等级限制

#define B_RARE_CANDY_CAP                FALSE // 如果设置为true，稀有糖果不能用于超过等级限制
#define B_LEVEL_CAP_EXP_UP              FALSE // 如果设置为true，低于等级限制的宝可梦将获得更多的经验

// 努力值限制常量
#define EV_CAP_NONE                     0 // 常规行为，不应用努力值限制
#define EV_CAP_FLAG_LIST                1 // 根据sEVCapFlagMap中第一个未设置的标志选择努力值限制
#define EV_CAP_VARIABLE                 2 // 根据指定事件变量的内容选择努力值限制
#define EV_CAP_NO_GAIN                  3 // 无法获得努力值

// 努力值限制配置
#define B_EV_CAP_TYPE                   EV_CAP_NONE   // 选择要应用的努力值限制类型
#define B_EV_CAP_VARIABLE               8 // 如果B_EV_CAP_TYPE设置为EV_CAP_VARIABLE，使用此事件变量来确定努力值限制

#define B_EV_ITEMS_CAP                  FALSE // 如果设置为true，提升努力值的物品不能用于超过努力值限制

#endif /* GUARD_CONFIG_CAPS_H */
