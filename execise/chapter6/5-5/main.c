#include<stdio.h>
#include<math.h>
#define PI 3.141592654

double sin(double x);
double fact(int x);

int main(void)
{
	printf("sin(%lf) = %lf\n", PI / 2, sin(PI / 2));
	printf("sin(%lf) = %lf\n", PI, sin(PI));
	printf("sin(%lf) = %lf\n", 2 * PI, sin(2 * PI));
	printf("sin(%lf) = %lf\n", -PI / 2, sin(-PI / 2));

	return 0;
}

double sin(double x)
{
	int i;
	double k, sum = 0.0;

	i = 1;
	while (1)
	{
		k = pow(x, i) / fact(i);
		sum += k * pow(-1, i / 2);
		i += 2;
		if (fabs(k) < 1e-5) break;
	}

	return sum;
}

double fact(int n)
{
	if (n == 1) return 1;
	return n * fact(n - 1);
}