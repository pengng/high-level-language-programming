/* 已知圆柱体的底半径是 1.5, 高是 2.0，计算其体积并输出 */
#include <stdio.h>
#define PI 3.14159
int main(void)
{
    float radius = 1.5, high = 2.0, vol;
    vol = PI * radius * radius * high;      /* 计算圆柱体的体积 */
    printf("vod=%7.2f\n", vol);             /* 输出圆柱体的体积 */
    return 0;
}