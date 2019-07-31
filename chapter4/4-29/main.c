/* 计算1+2+...+100之和 */
#include <stdio.h>
int main(void)
{
    int n = 1, sum = 0;
    do
    {
        sum = sum + n;
        n++;
    } while (n <= 100);
    printf("sum=%d\n", sum);
    return 0;
}