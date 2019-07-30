/* 从键盘输入一个正整数，按二进制位输出该数 */
#include <stdio.h>
int main(void)
{
    int num, mask, i;
    printf("Input a integer number:");
    scanf("%d", &num); /* 从键盘输入一个正整数保存到变量 num */
    mask = 1 << 15; /* 构造一个最高位为 1、其余各位为 0 的整数(屏蔽字) mask */
    printf("%d=", num);
    for (i = 1; i <= 16; i++)
    {
        putchar(num & mask ? '1' : '0'); /* 输出最高位的值 */
        num = num << 1; /* 将次高位移到最高位 */
        if (i % 4 == 0) putchar(','); /* 4位一组，用逗号分开 */
    }
    printf("\bB\n");
    return 0;
}