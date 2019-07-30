/* 从键盘输入两个整数，计算其乘积 */
#include <stdio.h>
int main(void)
{
    int n1, n2, result; /* 定义保存两个整数及其乘积的变量 */
    printf("please input the two numbers:\n");
    scanf("%d%d", &n1, &n2); /* 从键盘输入两个整数并分别保存到变量 n1 和 n2 */
    result = n1 * n2; /* 计算整数 n1 和 n2 的乘积并保存到变量 result */
    printf("the result is: %d\n", result); /* 输出变量 result 中的两个整数的乘积 */
    return 0;
}