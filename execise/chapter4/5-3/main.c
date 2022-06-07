#include<stdio.h>
#include<math.h>
int main(void)
{
	double a, b, c, t, s;

	scanf("%lf %lf %lf", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		t = (a + b + c) / 2;
		s = sqrt(t * (t - a) * (t - b) * (t - c));
		printf("该三角形面积是：%lf", s);
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}