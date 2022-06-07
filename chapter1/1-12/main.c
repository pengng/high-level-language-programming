/* 计算 10! */
#include <stdio.h>
int main(void)
{
    int i = 2, t = 1;
    while (i <= 10)
    {
        t = t * i;
        i = i + 1;
    }
    printf("%d\n", t);
    return 0;
}