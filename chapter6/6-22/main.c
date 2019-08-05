/* 利用递归计算实数 x 的平方根，要求误差小于 10 的 -5 次方 */
#include <stdio.h>
#include <math.h>
double fun(double a, double x0)                                     /* 定义递归函数 fun()，计算实数 x 的平方根 */
{
    double x1, y;
    x1 = (x0 + a / x0) / 2.0;
    if (fabs(x1 - x0) > 0.00001)                                    /* 如果误差大于 10 的 -5 次方，则递归调用函数 fun() */
        y = fun(a, x1);
    else y = x1;                                                    /* 否则，返回得到的值 */
    return y;
}

int main(void)
{
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);                                               /* 从键盘输入一个实数 */
    printf("The square root of %lf is %lf\n", x, fun(x, 1.0));      /* 调用递归函数 fun() */
    return 0;
}