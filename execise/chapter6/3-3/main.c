#include <stdio.h>
int f1(int x);

int main(void)
{
    int a = 1, k;
    for (k = 0; k < 3; k++) printf("%4d", f1(a));
    return 0;
}

int f1(int x)
{
    static int z = 3, y = 0;
    y++;
    z++;
    return x + y + z;
}