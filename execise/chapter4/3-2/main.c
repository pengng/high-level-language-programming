#include <stdio.h>
int main(void)
{
    int s = 0, i;
    for (i = 1; ; i++)
    {
        if (s > 50) break;
        if (i % 2 == 0) s += i;
    }
    printf("i=%d,s=%d\n", i, s);
    return 0;
}