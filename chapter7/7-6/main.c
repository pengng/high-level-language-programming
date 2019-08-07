/* 使用指向数组的指针变量引用一维数组元素的例子 */
#include <stdio.h>
int main(void)
{
    int i, array[10], *pointer = array;         /* 定义指针变量 pointer 指向一维数组 array 的首地址 */
    printf("Input 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);                 /* 使用下标法依次输入一维数组各元素的值 */
        pointer[i] += 1;                        /* 使用下标法依次访问一维数组各元素 */
    }

    printf("array[10]: ");
    for (i = 0; i < 10; i++)
        printf("%d  ", *(pointer + i));         /* 使用指向一维数组的指针变量，依次输出一维数组各元素的值 */
    
    printf("\n");
    return 0;
}