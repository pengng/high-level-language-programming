/* 求调和级数中第多少项的值大于 10。调和级数的第 n 项为 1+1/2+1/3+...+1/n */
#include <stdio.h>
#define LIMIT 10
int main(void)
{
    int n = 1;
    float sum = 0.0;
    for (;;)
    {
        sum = sum + 1.0 / n;
        if (sum > LIMIT) break;     /* 若 sum 大于 10，则跳出循环体，强制结束循环 */
        n++;
    }
    printf("n=%d\n", n);
    return 0;
}