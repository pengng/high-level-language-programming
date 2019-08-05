/* 利用非递归的方法，编写函数计算阶乘 n! (n > 1)，n 由键盘输入 */
#include <stdio.h>
long f(long n)                          /* 定义函数 f() */
{
    static long i = 1L;                 /* 定义局部静态变量 i */
    i = n * i;                          /* 计算 n * i 的值保存到静态变量 i 中 */
    return i;                           /* 返回静态变量 i 的值 */
}

int main(void)                          /* 主函数 */
{
    long x, y, z;
    scanf("%ld", &x);                   /* 从键盘输入变量 x 的值 */
    for (y = 1L; y <= x; y++)           /* 循环调用函数 f()，依次计算 y! */
        z = f(y);
    printf("%ld!=%ld\n", x, z);
    return 0;
}