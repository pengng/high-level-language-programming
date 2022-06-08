#include<stdio.h>
#define MAX(a, b) ((a) >= (b) ? (a) : (b))			/* 有参宏定义 */

int main(void)
{
	int j, k;

	printf("Please input two integers: \n");
	scanf("%d%d", &j, &k);
	printf("The max is %d\n", MAX(j, k));

	return 0;
}