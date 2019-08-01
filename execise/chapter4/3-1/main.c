#include <stdio.h>
int main(void)
{
    int x = 8;
    do
    {
        printf("*");
        x--;
        x--;
    } while (x == 0);
    return 0;
}