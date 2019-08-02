#include <stdio.h>
int main(void)
{
    int i, j, sum1 = 0, sum2 = 0;
    int a[][3] = {1, 2, 3, 4, 5, 6};
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
        {
            if (i == j) sum1 = sum1 + a[i][j];
            if (i + j == 2) sum2 = sum2 + a[i][j];
        }
    
    printf("%d\n%d\n", sum1, sum2);
    return 0;
}