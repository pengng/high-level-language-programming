/* 利用 for 语句实现循环次数未知的例子 */
#include <stdio.h>
int main(void)
{
    int i, max, min;
    scanf("%d", &i);                        /* 从键盘输入第一个整数 */
    max = min = i;                          /* 设第一个输入的整数是当前最大整数和最小整数 */
    for (; i != 0; )                        /* 若当前输入的整数不是 0，则执行循环体，直至输入“0”为止 */
    {
        if (i < min) min = i;               /* 若当前输入的整数小于当前最小整数，则使之为当前最小整数 */
        if (i > max) max = i;               /* 若当前输入的整数大于当前最大整数，则使之为当前最大整数 */
        scanf("%d", &i);                    /* 从键盘输入下一个整数 */
    }
    printf("max=%d  min=%d\n", max, min);   /* 输出最终的最大整数和最小整数 */
    return 0;
}