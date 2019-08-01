#include <stdio.h>
int main(void)
{
    int x, y = 4;
    for (x = 1; x <= 100; x++)
    {
        if (y >= 30) break;
        if (y % 3 == 1)
        {
            y = y + 3;
            continue;
        }
        y = y - 2;
    }
    printf("%d\n", x);
    return 0;
}