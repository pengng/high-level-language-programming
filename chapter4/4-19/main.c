/* 求一元二次方程 ax+bx+c=0 的解 */
#include <stdio.h>
#include <math.h>                   /* 库函数 fabs() 包含在头文件 math.h 中 */
int main(void)
{
    float a, b, c, d, x1, x2, p, q;
    printf("a,b,c=?");
    scanf("%f,%f,%f", &a, &b, &c);  /* 从键盘输入方程的三个系数，分别保存至变量 a、b、c */
    printf("The equation ");

    if (fabs(a) <= 1e-6) printf("is not quadratic");     /* 若系数 a 的绝对值小于10的6次方，则该方程是非一元二次方程 */
    else
    {
        d = b * b - 4 * a * c;
        if (fabs(d) < 1e-6)
            printf("has two equal roots:%8.4f\n", -b / (2 * a));
        else if (d > 1e-6)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("has distinct real roots:%8.4f and %8.4f\n", x1, x2);
        }
        else
        {
            p = -b / (2 * a);
            q = sqrt(-d) / (2 * a);
            printf("has complex roots:\n");
            printf("%8.4f+%8.4fi\n", p, q);
            printf("%8.4f-%8.4fi\n", p, q);
        }
    }

    return 0;
}