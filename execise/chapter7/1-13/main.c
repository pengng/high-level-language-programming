#include <stdio.h>
void fun(int *a, int *b)
{
    int *k;
    k = a; a = b; b = k;
}

int main(void)
{
    int a = 3, b = 6, *x = &a, *y = &b;
    fun(x, y);
    printf("%d %d", a, b);
    return 0;
}