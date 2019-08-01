/* 求 Fibonacci 数列的前 40 个数 */
#include <stdio.h>
int main(void)
{
    long int f1 = 1, f2 = 1;                /* 定义并初始化 Fibonacci 数列的前 2 个数 */
    int i = 1;                              /* 定义并初始化循环控制变量 i */
    for (; i <= 20; i++)                    /* for 循环执行 20 次，每次计算并输出 2 个数，共计算并输出 Fibonacci 数列的前 40 个数 */
    {
        printf("%15ld%15ld", f1, f2);       /* 输出当前的 2 个数 */
        if (i % 2 == 0) printf("\n");       /* 若输出 2 次（共 4 个数），则换行 */
        f1 += f2; f2 += f1;                 /* 计算下 2 个数 */
    }
    return 0;
}