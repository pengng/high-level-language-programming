/*  一维数组元素的值已由小到大排序，编写函数删除数组中出现多次的元素值，
    使之只剩下一个，返回删除后数组元素的个数 */
#include <stdio.h>
int fun(int a[], int n)                         /* 定义函数 fun()，由于数组已排序，只要该数字是第一次出现，则存入数组的前部 */
{
    int k = 0, pos = 1;
    int cmp = a[0];
    for (k = 0; k < n; k++)                     /* 遍历数组中各元素 */
    {
        if (a[k] != cmp)
        {
            a[pos++] = a[k];
            cmp = a[k];
        }
    }
    return pos;
}

int main(void)
{
    int num[20] = {2, 2, 2, 3, 5, 5, 5, 5, 5, 6, 6, 8, 10, 13, 13, 14, 14, 15, 15, 15};
    int i = 0, j = 0, n;
    printf("The original data is: ");
    for (i = 0; i < 20; i++)
        printf("%d ", num[i]);
    
    printf("\nThe data after changing is: ");
    n = fun(num, 20);                           /* 调用函数 fun()，返回数组中数值不同的元素个数 */
    for (j = 0; j < n; j++)                     /* 输出结果 */
        printf("%d ", num[j]);
    printf("\n");
    return 0;
}