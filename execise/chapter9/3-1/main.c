#include<stdio.h>
#define A 4
#define B(x) A * x / 2

int main(void)
{
	float c, a = 5;
	c = B(a);
	printf("%.1f\n", c);
	return 0;
}