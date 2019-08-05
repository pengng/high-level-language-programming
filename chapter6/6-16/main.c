/* 常用的数学处理库函数的例子 */
#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("abs(-5) = %d    abs(-32768) = %d\n", abs(-5), abs(-32768));
    printf("labs(-6L) = %ld\n", labs(-6L));
    printf("fabs(-6.3) = %f\n", fabs(-6.3));
    printf("floor(-2.3) = %f    floor(5.9) = %f\n", floor(-2.3), floor(5.9));
    printf("ceil(-2.3) = %f    ceil(5.9) = %f\n", ceil(-2.3), ceil(5.9));
    printf("sqrt(25) = %f\n", sqrt(25));
    printf("log10(100) = %f\n", log10(100));
    printf("log(100) = %f\n", log(100));
    printf("exp(3) = %f\n", exp(3));
    printf("pow(2, -3) = %f     pow(0.2, 3) = %f\n", pow(2, -3), pow(0.2, 3));
    printf("sin(90*3.1415926/180) = %f\n", sin(90 * 3.1415926 / 180));
    printf("cos(90*3.1415926/180) = %f\n", cos(90 * 3.1415926 / 180));
    printf("tan(45*3.1415926/180) = %f\n", tan(45 * 3.1415926 / 180));
    return 0;
}