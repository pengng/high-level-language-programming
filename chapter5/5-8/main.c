/* 利用“选择排序法”对一维数组的 n 个整数从小到大排序 */
#include <stdio.h>
int main(void)
{
    int i, j, temp, k, n, a[200];
    scanf("%d", &n);                                    /* 从键盘输入待排序的数据个数 */
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);                             /* 利用 for 循环依次从键盘输入待排序的数据 */
    for (i = 0; i < n - 1; i++)                         /* 外层循环，变量 i 控制排序总共进行 n - 1 轮 */
    {
        k = i;
        for (j = i + 1; j < n; j++)                     /* 内层循环，变量 j 控制每轮进行比较的次数 */
            if (a[j] < a[k])
                k = j;                                  /* k 记录每轮比较中的最小者的下标 */
        if (k != i)
            { temp = a[i]; a[i] = a[k]; a[k] = temp; }  /* 将第 i 轮的最小者与 a[i] 交换 */
    }

    printf("the sorted numbers:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);        /* 利用 for 循环依次输出排序结果 */
    return 0;
}