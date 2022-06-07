#include<stdio.h>
#include<math.h>
int main(void)
{
	int i, x, sum;

	for (i = 100; i <= 999; i++)
	{
		sum = 0;
		x = i;

		while (x)
		{
			sum += pow(x % 10, 3);
			x /= 10;
		}

		if (sum == i) printf("%d\n", i);
	}
	return 0;
}