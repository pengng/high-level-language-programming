#include <stdio.h>
int main(void)
{
    int x = 3, y = 16;
    while (y-- > 0)
    {
        y -= x;
        x++;
    }
    printf("x=%d,y=%d\n", x, y);
    return 0;
}