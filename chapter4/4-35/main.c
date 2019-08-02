/* 鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一。百钱买百鸡，问鸡翁，鸡母和鸡雏各几何？ */
#include <stdio.h>
int main(void)
{
    int x, y, z;
    for (x = 1; x <= 20; x++)               /* 最外层循环，枚举公鸡的可能数量 x，最多为 20 */
        for (y = 1; y <= 33; y++)           /* 第二层循环，枚举母鸡的可能数量 y，最多为 33 */
            for (z = 3; z <= 100; z += 3)   /* 第三层循环，枚举小鸡的可能数量 z，是 3 的倍数 */
            {
                if ((x + y + z == 100) && (5 * x + 3 * y + z / 3 == 100))
                    printf("cook=%d,hen=%d,chiken=%d\n", x, y, z);      /* 若满足不定方程组的两个判断条件，则输出一组解 */
            }
    return 0;
}