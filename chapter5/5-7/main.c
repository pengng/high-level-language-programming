/* 利用“冒泡排序法”对一维数组的 n 个整数从小到大排序 */
#include <stdio.h>
int main(void)
{
    int i, j, k, n, temp, a[200];
    scanf("%d", &n);                    /* 从键盘输入待排序的数据个数 n < 200 */
    for (k = 0; k <= n - 1; k++)
        scanf("%d", &a[k]);             /* 利用 for 循环依次从键盘输入待排序的数据 */
    for (i = 1; i <= n - 1; i++)        /* 外层循环，变量 i 控制排序总共进行 n - 1 轮 */
        for (j = n - 1; j >= i; j--)    /* 内层循环，变量 j 控制每轮进行比较的次数是 n - i */
            if (a[j] < a[j - 1])
                { temp = a[j]; a[j] = a[j - 1]; a[j - 1] = temp; }  /*  相邻两个元素比较，若前大后小则交换 */
    
    for (k = 0; k <= n - 1; k++)
        printf("%d ", a[k]);            /* 利用 for 循环依次输出排序结果 */
    return 0;
}