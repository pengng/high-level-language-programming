#include <stdio.h>
int main(void)
{
    int a[7] = {3, 3, 9, 7, 5, 7, 9};
    int n = 0, i, j, k;
    for (i = 0; i < 7 - n; i++)
    {
        for (j = i + 1; j < 7 - n; j++)
            if (a[j] == a[i])
            {
                n++;
                for (k = j; k < 7 - n; k++)
                    a[k] = a[k + 1];
            }
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}