#include <stdio.h>
int *fun(int *a, int *b)
{ return (*a > *b) ? a : b;}

int main(void)
{
    int p = 2, q = 4, *r;
    r = fun(&p, &q);
    printf("%d \n", *r);
    return 0;
}