/* 使用指针数组输出二维数组元素的例子 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    int array[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, i, j;        /* 定义一个整型二维数组 array */
    int *pointer[3] = {array[0], array[1], array[2]};           /* 定义一个指向整型数据的指针数组 pointer 并初始化，即将二维数组 array 的每行元素的首地址赋予指针数组的各元素 */
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            printf("%4d", pointer[i][j]);                       /* 利用指向二维数组元素的指针数组输出二维数组各元素的值 */
    return 0;
}