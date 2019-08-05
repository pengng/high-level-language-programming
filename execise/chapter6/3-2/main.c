#include <stdio.h>
int fuc(int j)
{
    static int k;
    return ++k + j;
}

int main(void)
{
    int j;
    for (j = 1; j <= 3; j++) printf("%5d", fuc(10));
    printf("\n");
    return 0;
}