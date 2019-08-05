#include <stdio.h>
int fun(int n)
{
    int result = 1, i;
    for (i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main(void)
{
    int fact;
    int x = 5;
    fact = fun(x);
    printf("%d\n", fact);
    return 0;
}