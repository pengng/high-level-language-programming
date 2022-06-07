#include<stdio.h>
int main(void)
{
	double e = 0, reciprocal;
	int i, factorial, n = 0;

	while (1)
	{
		factorial = 1;
		for (i = 1; i <= n; i++)
		{
			factorial *= i;
		}

		reciprocal = 1.0 / factorial;
		e += reciprocal;
		n += 1;

		if (reciprocal < 1e-6) break;
	}

	printf("e = %lf\n", e);

	return 0;
}