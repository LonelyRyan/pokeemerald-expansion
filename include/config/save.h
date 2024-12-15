#ifndef GUARD_CONFIG_SAVE_H
#define GUARD_CONFIG_SAVE_H

// 存档块1配置
#define FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK1    FALSE   // 释放未使用的宝可梦图鉴已遇到标志（52字节）。
#define FREE_TRAINER_HILL                   FALSE   // 释放训练师之丘数据（28字节）。
#define FREE_MYSTERY_EVENT_BUFFERS          FALSE   // 释放神秘事件缓冲区（1104字节）。
#define FREE_MATCH_CALL                     FALSE   // 释放对战呼叫和再次对战/对战搜索器数据（104字节）。
#define FREE_UNION_ROOM_CHAT                FALSE   // 释放联合室聊天数据（212字节）。
#define FREE_ENIGMA_BERRY                   FALSE   // 释放E-Reader谜题树果数据（52字节）。
#define FREE_LINK_BATTLE_RECORDS            FALSE   // 释放链接对战记录数据（88字节）。
#define FREE_MYSTERY_GIFT                   FALSE   // 释放神秘礼物数据（876字节）。
                                                    // 存档块1总计：2516字节

// 存档块2配置
#define FREE_BATTLE_TOWER_E_READER          FALSE   // 释放对战塔E-Reader数据（188字节）。
#define FREE_POKEMON_JUMP                   FALSE   // 释放宝可梦跳跳数据（16字节）。
#define FREE_RECORD_MIXING_HALL_RECORDS     FALSE   // 释放记录混合大厅记录（1032字节）。
#define FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK2    FALSE   // 释放未使用的宝可梦图鉴已遇到标志（108字节）。
                                                    // 存档块2总计：1274字节

                                                    // 总计：3790字节

#endif // GUARD_CONFIG_SAVE_H
