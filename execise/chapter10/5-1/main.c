#include<stdio.h>
#include<math.h>

int isprime(int x);

int main(void)
{
	int i;
	FILE *fp = fopen("prime.txt", "w");

	for (i = 1; i <= 1000; i++)
	{
		if (isprime(i))
		{
			fprintf(fp, "%d\n", i);
		}
	}
	fclose(fp);

	return 0;
}

int isprime(int x) {
	int i, n;

	if (x <= 1) return 0;

	n = sqrt(x);
	for (i = 2; i <= n; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}