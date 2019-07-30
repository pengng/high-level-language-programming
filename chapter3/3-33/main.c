/* 从键盘输入一个正整数保存至 int 型变量 num，输出由 8〜11位构成的数 */
#include <stdio.h>
int main(void)
{
    int num, mask;
    printf("Input a integer number:");
    scanf("%d", &num); /* 从键盘输入一个正整数保存到变量 num */
    num = num >> 8; /* 将 num 右移 8 位，使 8~11 位移到低 4 位 */
    mask = ~(~0 << 4); /* 间接构造一个低 4 位为 1、其余各位为 0 的整数 */
    printf("result = 0x%x\n", num & mask); /* mask 与 num 进行按位与动算 */
    return 0;
}