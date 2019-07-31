/* 计算 n 的阶乘 n! */
#include <stdio.h>
int main(void)
{
    int i, n;
    long fact = 1;                          /* 将累乘器 fact 赋初值为 1 */
    printf("Input n: ");
    scanf("%d", &n);                        /* 从键盘输入一个正整数 n */
    for (i = 1; i <= n; i++) fact *= i;     /* 利用 for 语句实现累乘 */
    printf("%d! = %ld\n", n, fact);
    return 0;
}