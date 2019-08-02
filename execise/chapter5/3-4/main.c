#include <stdio.h>
int main(void)
{
    int x[3][3] = {1, 3, 5, 2, 4, 6, 7, 9, 8}, i, j, tem;
    for (i = 0; i < 2; i++)
        for (j = i + 1; j < 3; j++)
            if (x[i][i] < x[j][j])
            {
                tem = x[i][i];
                x[i][i] = x[j][j];
                x[j][j] = tem;
            }
    
    for (i = 0; i < 3; i++)
        printf("%d ", x[0][i]);
    return 0; 
}