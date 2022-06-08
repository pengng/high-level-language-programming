#include<stdio.h>
#define cube(a, b) (((a) + (b)) * ((a) + (b)) * ((a) + (b)))

int main(void)
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%lg\n", cube(a, b));

	return 0;
}