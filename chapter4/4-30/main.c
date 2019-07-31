/* 将一个正整数的各位数字逆序输出 */
#include <stdio.h>
int main(void)
{
    int i, r;
    printf("Input an integer\n");
    scanf("%d", &i);                    /* 从键盘输入一个正整数 i */
    do
    {                                   /* 复合语句作为 do-while 语句的循环体 */
        r = i % 10;                     /* 采用取模 10 计算余数 r，即为当前变量 i 的最末一位数字 */
        printf("%d", r);
    } while ((i /= 10) != 0);            /* 重复执行循环体，直至 (i /= 10) == 0 为止 */
    printf("\n");
    return 0;
}