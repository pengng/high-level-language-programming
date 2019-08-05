/* 在 3 行 4 列的二维数组中，找出每一行的最大值并输出 */
#include <stdio.h>
void LineMax(int x[3][4])
{
    int i, j, p;
    for (i = 0; i < 3; i++)
    {
        p = 0;
        for (j = 1; j < 4; j++)
            if (x[i][p] < x[i][j]) p = j;
        printf("The max value in line %d is %d\n", i, x[i][p]);
    }
}

int main(void)
{
    int x[3][4] = {1, 5, 7, 4, 2, 6, 4, 3, 8, 2, 3, 1};
    LineMax(x);
    return 0;
}