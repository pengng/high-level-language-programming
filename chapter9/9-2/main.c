#include<stdio.h>
#define PI 3.1415926			/* 无参宏定义，PI是宏名，3.1415926是用来替换宏名的常数 */

int main(void)
{
	float radius, length, area, volume;

	printf("Input a radius: ");
	scanf("%f", &radius);
	length = 2 * PI * radius;							/* 引用无参宏计算圆的周长 */
	area = PI * radius * radius;						/* 引用无参宏计算圆的面积 */
	volume = PI * radius * radius * radius * 3 / 4;		/* 引用无参宏计算球的体积 */
	printf("length=%.2f,area=%.2f,volume=%.2f\n", length, area, volume);

	return 0;
}