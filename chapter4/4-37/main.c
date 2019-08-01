/* 输出 10〜100 的全部素数 */
#include <stdio.h>
int main(void)
{
    int i = 11, j, counter = 0;
    for (; i <= 100; i += 2)                    /* 外层循环，为内层循环提供一个奇数 */
    {
        for (j = 2; j <= i - 1; j++)            /* 内层循环，判断奇数 i 是否是素数 */
            if (i % j == 0)
                break;                          /* 若 i 不是素数，则强行结束内层循环 */
        if (j >= i)
        {
            printf("%6d", i);
            counter++;
            if (counter % 10 == 0) printf("\n");    /* 每输出 10 个素数则换一行 */
        }
    }
    return 0;
}