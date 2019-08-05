/* 编写递归函数计算阶乘 n! (n > 1) */
#include <stdio.h>
float f(long n)                         /* 定义递归函数 */
{
    if (n == 1L)
        return (1.0);
    else
        return (n * f(n - 1));          /* 递归调用函数 f */
}

int main(void)                          /* 主函数 */
{
    long x;
    x = f(4);                           /* 调用递归函数 */
    printf("n!=%ld\n", x);
    return 0;
}