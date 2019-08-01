/* 将 5 个整数保存到一维数组后输出 */
#include <stdio.h>
int main(void)
{
    int i, a[] = {0, 1, 0, 0, 1};       /* 定义一维数组 a 并初始化 */
    for (i = 0; i < 5; i++)
        printf("%d", a[i]);
    return 0;
}