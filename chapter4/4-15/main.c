/* 从键盘输入一个整数，求其绝对值并输出 */
#include <stdio.h>
int main(void)
{
    int n;
    printf("Input a number:");
    scanf("%d", &n);                /* 从键盘输入一个整数保存至变量 n */
    if (n < 0) n = -n;              /* 如果 n 为负整数，则 n 取负后赋予变量 n */
    printf("The absolute value is %d\n", n);
    return 0;
}