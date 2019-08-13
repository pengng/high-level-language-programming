/* 输入两个分别含有七个整数的数组，利用指针交换两个数组的最大值，并输出交换最大值之后的两个数组 */
#include <stdio.h>
int max(int *a, int n)          /* 定义函数 max()，找出数组中最大值所在的下标 */
{
    int i = 0, pos = 0, max = 0;
    for (i = 0; i < n; i++)
    {
        if (*a > max)
        {
            pos = i;
            max = *a;
        }
        a++;
    }
    return pos;
}

void swap(int *a, int pos, int num)     /* 定义函数 swap()，用指定值替换数组中指定下标存放的数值 */
{
    *(a + pos) = num;
}

int main(void)                          /* 主函数 */
{
    int a[7], b[7], *p, *q;
    int a_max_pos = 0, b_max_pos = 0, a_max = 0, b_max = 0;     /* 定义变量，分别表示数组 a 和 b 中的最大值及其下标值 */
    int i = 0;
    p = a;                              /* 指针 p 指向数组 a */
    q = b;                              /* 指针 q 指向数组 b */
    printf("Enter array a: ");
    for (i = 0; i < 7; i++)             /* 从键盘输入七个整数保存到数组 a */
        scanf("%d", p + i);
    printf("Enter array b: ");
    for (i = 0; i < 7; i++)             /* 从键盘输入七个整数保存到数组 b */
        scanf("%d", q + i);
    a_max_pos = max(p, 7);              /* 调用函数 max()，找出数组 a 中最大值所在的下标 */
    b_max_pos = max(q, 7);              /* 调用函数 max()，找出数组 b 中最大值所在的下标 */
    a_max = *(p + a_max_pos);           /* 数组 a 中的最大值赋予变量 a_max */
    b_max = *(q + b_max_pos);           /* 数组 b 中的最大值赋予变量 b_max */
    swap(p, a_max_pos, b_max);          /* 调用函数 swap()，将数组 a 中的最大值替换为数组 b 中的最大值 */
    swap(q, b_max_pos, a_max);          /* 调用函数 swap()，将数组 b 中的最大值替换为数组 a 中的最大值 */
    printf("Array a:");
    for (i = 0; i < 7; i++)             /* 依次输出替换后的数组 a 中各元素值 */
        printf("%4d", *(p + i));
    printf("\nArray b:");
    for (i = 0; i < 7; i++)             /* 依次输出替换后的数组 b 中各元素值 */
        printf("%4d", *(q + i));
    return 0;
}