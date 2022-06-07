#include <stdio.h>
int main(void)
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            putchar(' ');
        }

        for (j = 0; j < 9 - i * 2; j++)
        {
            putchar('&');
        }

        putchar('\n');
    }

    return 0;
}