#include "global.h"

const u32 SpaceSHA1[5]; //预留给sha1sum的空间

static u32 CalcSha1_Sn(u32 x, u32 n)
{
    return (x << n) | (x >> (32 - n));
}

static u32 CalcSha1_ft(u32 b, u32 c, u32 d, u32 t)
{
    if(t <= 19)
    {
        return (b & c) | ((~b) & d);
    }
    else if((t >= 40) && (t <= 59))
    {
        return (b & c) | (b & d) | (c & d);
    }
    else
    {
        return b ^ c ^ d;
    }
}

void CalculateSha1(void)
{
    u32 i;
    u32 *p;
    u32 tmp[16];
    u32 a[5], h[5], w[80];
    u32 k[4];

    //初始化
    p = (u32*)0x8000000u;
    h[0] = 0x67452301u;
    h[1] = 0xEFCDAB89u;
    h[2] = 0x98BADCFEu;
    h[3] = 0x10325476u;
    h[4] = 0xC3D2E1F0u;
    k[0] = 0x5A827999u;
    k[1] = 0x6ED9EBA1u;
    k[2] = 0x8F1BBCDCu;
    k[3] = 0xCA62C1D6u;

    while(p < (u32*)0xA000000u)
    {
        u8 flag = 0;
        u32 length = 448;
        for(i=0;i<14;i++)
        {
            if((p == (u32*)&SpaceSHA1) && (flag == 0))
            {
                flag = 5;
            }
            else if(flag == 0)
                tmp[i] = p[0];
            else
            {
                tmp[i] = SpaceSHA1[5-flag];
                flag--;
            }
            p+=4;
            if((p == (u32*)0xA000000u) && (i != 13))
                break;
        }
        if(i != 14)
        {
            length = (i + 1) * 4 * 8;
            //补位
            tmp[i+1] = 0x80 << 24;
            i += 2;
            for(;i<14;i++)
            {
                tmp[i] = 0;
            }
        }
        //补长度
        tmp[14] = 0;
        tmp[15] = length;
        //计算
        for(i=0;i<16;i++)
            w[i] = tmp[i];
        for(i=16;i<80;i++)
        {
            w[i] = CalcSha1_Sn(w[i-3] ^ w[i-8] ^ w[i-14] ^ w[i-16], 1);
        }
        for(i=0;i<5;i++)
            a[i] = h[i];
        for(i=0;i<80;i++)
        {
            u32 temp = CalcSha1_Sn(a[0], 5) + CalcSha1_ft(a[1], a[2], a[3], i) + a[4] + w[i] + k[i / 20];
            a[4] = a[3];
            a[3] = a[2];
            a[2] = CalcSha1_Sn(a[1], 30);
            a[1] = a[0];
            a[0] = temp;
        }
        for(i=0;i<5;i++)
            h[i] += a[i];
    }
    for(i=0;i<5;i++)
    {
        if(SpaceSHA1[i] != h[i])
        {
            while(1);
        }
    }
}
