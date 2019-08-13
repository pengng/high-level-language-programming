#include <stdio.h>
int main(void)
{
    int *q, i;
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    q = &a[1];
    for (i = 0; i < 5; i++, q++)
        printf("%6d", *(q++));
    return 0;
}