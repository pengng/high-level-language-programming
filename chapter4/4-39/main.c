/* 计算1! + 2! + 3! + ... + n! 并输出结果 */
#include <stdio.h>
int main(void)
{
    int n = 0, i = 0, j = 0;
    long result = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)            /* 外层循环 */
    {
        int tem = 1;
        for (j = i; j > 0; j--)         /* 内层循环 */
            tem = tem * j;
        result = result + tem;          /* 计算累加和 */
    }
    printf("The result is %ld\n", result);
    return 0;
}