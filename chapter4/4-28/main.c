/* 求两个正整数的最大公约数 */
#include <stdio.h>
int main(void)
{
    int m, n, r;
    printf("Please input two positive integers\n");
    scanf("%d%d", &m, &n);                              /* 从键盘输入两个正整数保存至变量 m 和 n */
    while (n)
    {
        r = m % n;
        m = n;
        n = r;
    }
    printf("Their greatest common divisor is %d\n", m); /* 输出两个正整数的最大公约数 */
    return 0;
}