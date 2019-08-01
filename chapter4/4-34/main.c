/* 找出 11〜100 所有不能被 5 整除的整数，要求在第 n 行输出 10*n+1 ~ 10*(n+1) 之间符合要求的整数 */
#include <stdio.h>
int main(void)
{
    int i = 10;;
    for (i = 11; i <= 100; i++)             /* 遍历 11〜100 的所有整数 */
    {
        if (i % 10 == 0)                    /* 若 i 能被 10 整除，则换行，且不输出该整数 */
        {
            printf("\n");
            continue;                       /* 只跳出本次循环，继续判定是否执行下一次循环 */
        }
        if (i % 5 != 0)
            printf("%5d", i);               /* 若 i 不能被 5 整除，输出该数 */
    }
    return 0;
}