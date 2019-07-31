/* 从键盘输入数据和运算符，以“a 运算符 b“的形式进行加、减、乘、除四则运算，并输出计算结果 */
#include <stdio.h>
int main(void)
{
    float a = 0, b = 0;             /* 定义实型变量 a 和 b，分别表示运算符两侧的运算数 */
    char op;                        /* 定义字符型变量 op，表示运算符 */
    printf("Enter the expression: ");
    scanf("%f%c%f", &a, &op, &b);   /* 从键盘输入两个运算数和一个运算符 */
    switch (op)
    {
        case '+':
            printf("%f%c%f=%f", a, op, b, a + b);       /* 若运算符为加号，则计算并输出和值 */
            break;
        case '-':
            printf("%f%c%f=%f", a, op, b, a - b);       /* 若运算符为减号，则计算并输出差值 */
            break;
        case '*':
            printf("%f%c%f=%f", a, op, b, a * b);       /* 若运算符为乘号，则计算并输出乘积 */
            break;
        case '/':
            if (b == 0) printf("Error\n");              /* 若运算符为除号且除数为 0，则输出“Error“ */
            else printf("%f%c%f=%f", a, op, b, a / b);  /* 若运算符为除号且除数不为 0，则输出商值 */
            break;
        default:
            printf("Error\n");                          /* 其他情况，输出“Error“ */
    }
    return 0;
}