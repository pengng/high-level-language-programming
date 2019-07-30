/* 计算半径为 1.5 的圆的周长和面积并输出 */
#include <stdio.h>
#define PI 3.1415926
int main(void)
{
    float radius, length, area;
    radius = 1.5;
    length = 2 * PI * radius; /* 计算圆的周长 */
    area = PI * radius * radius; /* 计算圆的面积 */
    printf("radius = %f\n", radius); /* 输出圆的半径 */
    printf("length = %7.2f, area = %7.2f\n", length, area);
    return 0;
}