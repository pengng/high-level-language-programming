#include <stdio.h>
int f(int a);
int main(void)
{
    int a = 3, i;
    for (i = 0; i < 3; i++)
        printf("%4d", f(a));
    return 0;
}

int f(int a)
{
    int b = 3;
    static int c = 3;
    b++;
    c++;
    return a + b + c;
}