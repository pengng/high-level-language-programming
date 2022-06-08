#include<stdio.h>
#include<math.h>

int isprime(int x);

int main(void)
{
	int a, b, i, n = 0, sum = 0;

	scanf("%d %d", &a, &b);

	for (i = a; i <= b; i++)
	{
		if (isprime(i)) {
			n++;
			sum += i;
		}
	}

	printf("%d %d", n, sum);

	return 0;
}

int isprime(int x) {
	int i, n;

	if (x <= 1) return 0;

	n = sqrt(x);
	for (i = 2; i < n; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}