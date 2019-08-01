#include <stdio.h>
int main(void)
{
    int a = 3, b = 2, c = 1, d;
    switch (a = b == c + 1)
    {
        case 1: d = 1; break;
        case 2: d = 2; break;
        case 3: d = 3; break;
        default: d = 4;
    }
    printf("d=%d\n", d);
    return 0;
}