/* 从键盘输入一个整数，判断其奇偶 */
#include <stdio.h>
int main(void)
{
    int n;
    printf("Input a number\n");
    scanf("%d", &n);                                    /* 从键盘输入一个整数保存至变量 n */
    if (n % 2 == 0) printf("The number is even\n");     /* 若 n 可以被 2 整除，则显示 “The number is even */
    else printf("The number is odd\n");                 /* 否则，显示“The number is odd */
    return 0;
}