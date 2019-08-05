/* 从键盘输入两个整数并求出较大者 */
#include <stdio.h>
int max(int x, int y)       /* 定义函数 max，比较两个整数，其中较大者作为该函数的返回值 */
{
    int z;
    z = x > y ? x : y;
    return z;
}

int main(void)              /* 主函数 */
{
    int a, b, c;
    printf("Input integers a, b:");
    scanf("%d,%d", &a, &b); /* 从键盘输入两个整数 */
    c = max(a, b);          /* 调用函数 max */
    printf("Max is %d\n", c);
    return 0;
}