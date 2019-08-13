/* 利用指针实现冒泡排序 */
#include <stdio.h>
void sort(int *a, int n)                    /* 定义函数 sort() */
{
    int i = 0, j = 0, tem = 0;
    for (i = 0; i < n - 1; i++)             /* 需要进行 n - 1 轮比较 */
        for (j = 0; j < n - 1 - i; j++)     /* 每一轮比较前 n - 1 - i 个，已排好序的 i 个不需要比较 */
        {
            if (*(a + j) > *(a + j + 1))
            {
                tem = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = tem;
                *(a + j  + 1) = tem;

            }
        }
}

int main(void)                      /* 主函数 */
{
    int a[100], *p;
    int i = 0, num = 0;
    p = a;                          /* 使指针变量 p 指向整型数组 a */
    printf("Enter the number of elements in array: ");
    scanf("%d", &num);
    printf("Enter the elements of the array: ");
    for (i = 0; i < num; i++)
        scanf("%d", p + i);         /* 利用指针变量 p 将键盘输入的待排序的数据依次保存到数组 a */
    sort(p, num);                   /* 调用函数 sort() 对数组元素进行冒泡排序 */
    printf("The array after sorting is:");
    for (i = 0; i < num; i++)       /* 输出排序后结果 */
        printf("%4d", *(p + i));
    return 0;
}