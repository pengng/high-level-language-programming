#include <stdio.h>
int main(void)
{
    int i = 1, s = 3;
    do
    {
        s += i++;
        if (s % 7 == 0) continue;
        else ++i;
    } while (s < 15);
    printf("%d", i);
    return 0;
}