#include <stdio.h>
int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, j, temp;
    i = 0;
    j = 9;
    for (i = 0; i < 5; i++)
    { temp = a[i]; a[i] = a[j]; a[j--] = temp; }
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}