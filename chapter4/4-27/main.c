/* 计算1+2+...+100之和 */
#include <stdio.h>
int main(void)
{
    int n = 1, sum = 0;
    while (n <= 100)
    {                       /* 复合语句作为当型循环结构的循环体 */
        sum = sum + n;
        n++;
    }
    printf("sum=%d\n", sum);
    return 0;
}