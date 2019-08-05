/* 计算函数 F(x, y, z) = (x + y) / (x - y) + (z + y) / (z - y) 的值并输出 */
#include <stdio.h>
#include <math.h>
float fun1(float, float);
int main(void)
{
    float x, y, z, sum;
    scanf("%f%f%f", &x, &y, &z);
    sum = fun1(x + y, x - y) + fun1(z + y, z - y);
    printf("sum=%f\n", sum);
    return 0;
}

float fun1(float a, float b)
{
    float num;
    num = a / b;
    return num;
}
