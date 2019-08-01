/* 从键盘输入一个 3 行 4 列的矩阵，将其转置后形成 4 行 3 列矩阵输出 */
#include <stdio.h>
int main(void)
{
    int i, j, x[3][4], y[4][3];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &x[i][j]);              /* 利用二重 for 循环依次从键盘输入二维数组 x 各元素值 */
    
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            y[j][i] = x[i][j];                  /* 利用二重 for 循环将二维数组 x 中矩阵转置后存入二维数组 y */
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", y[i][j]);
        printf("\n");
    }                                           /* 利用二重 for 循环按行列格式输出二维数组 y 各元素值 */
    return 0;
}