/* 从键盘输入两个整数，计算其乘积（利用用户自定义函数实现） */
#include <stdio.h>
int mul(int a, int b) /* 定义一个函数 mul */
{
    int c; /* 定义一个整型变量c */
    c = a * b; /* 计算两个整数的乘积并保存到变量 c */
    return c; /* 返回变量 c 中的两个整数的乘积 */
}

int main(void)
{
    int n1, n2, result; /* 定义保存两个整数及其乘积的变量 */
    printf("please input the two numbers:\n");
    scanf("%d%d", &n1, &n2); /* 从键盘输入两个整数并分别保存到变量 n1 和 n2 */
    result = mul(n1, n2); /* 调用函数 mul 计算整数 n1 和 n2 的乘积并赋值给变量 result */
    printf("the result is: %d\n", result); /* 输出变量 result 中的两个整数的乘积 */
    return 0;
}