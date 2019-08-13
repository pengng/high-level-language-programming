#include <stdio.h>
int fun(int *p)
{
    static int t = 0;
    t = *p + t;
    return t;
}

int main(void)
{
    int a[5] = {1, 3, 5, 7, 9}, i, m;
    for (i = 0; i < 5; i++)
    {
        m = fun(a + i);
        printf("%4d", m);
    }
    printf("\n");
    return 0;
}