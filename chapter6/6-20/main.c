/* 编写函数判断一个 N X N（N 为奇数）矩阵是否为“幻方”，若是，则返回1；否则，返回 0 */
#include <stdio.h>
#define N 3
int fun(int a[][N], int n)                      /* 定义函数 fun()，计算每行、每列以及两条对角线上的数值之和，并比较它们是否都相等 */
{
    int mid = n / 2;
    int sum[4] = {0};
    int i = 0, j = 0, sum_h = 0, sum_v = 0;
    for (i = 0, j = 0; i < n && j < n; i++, j++)
        sum[0] += a[i][j];                      /* 计算主对角线上元素的数值之和 */
    for (i = 0, j = n - 1; i < n && j >= 0; i++, j--)
        sum[1] += a[i][j];                      /* 计算反对角线上元素的数值之和 */
    for (i = 0; i < n; i++)                     /* 计算每一行元素的数值之和，判断它们是否全部相等，不等则返回 0 */
    {
        sum_h = 0;
        for (j = 0; j < n; j++)
            sum_h += a[i][j];
        if (i == 0)
            sum[2] = sum_h;
        if (i > 0 && sum_h != sum[2])
            return 0;
    }

    for (j = 0; j < n; j++)                     /* 计算每一列元素的数值之和，判断它们是否全部相等，不等则返回 0 */
    {
        sum_v = 0;
        for (i = 0; i < n; i++)
            sum_v += a[i][j];
        if (j == 0)
            sum[3] = sum_v;
        if (j > 0 && sum_v != sum[3])
            return 0;
    }

    for (i = 1; i < 4; i++)                     /* 比较每行、每列、主对角线及反对角线上元素之和是否相等，若不相等，则返回 0 */
    {
        if (sum[0] != sum[i])
            return 0;
    }

    return 1;                                   /* 若它们都相等，则返回 1 */
}

int main(void)                                  /* 主函数 */
{
    int num[N][N];
    int i = 0, j = 0, res;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &num[i][j]);            /* 利用二重 for 循环从键盘输入 N X N 矩阵各元素的值 */
    res = fun(num, N);                          /* 调用函数 fun() */
    printf("The matrix is%s magic square.\n", res == 1 ? "" : " not");
    return 0;
}