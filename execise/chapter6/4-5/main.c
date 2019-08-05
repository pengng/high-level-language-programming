/* 利用递归计算学生的年龄，已知第一位学生年龄最小，为 10 岁，其余学生一个比一个大 2 岁，计算第五位学生的年龄 */
#include <stdio.h>
int age(int n)
{
    int c;
    if (n == 1) c = 10;
    else c = age(n - 1) + 2;
    return c;
}

int main(void)
{
    printf("%d\n", age(5));
}