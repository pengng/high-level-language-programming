#include<stdio.h>

void fun(int x[], int *n, int k, int z)
{
	int i;
	for (i = *n - 1; i >= k; i--)
		x[i + 1] = x[i];
	x[k] = z;
	*n = *n + 1;
}

int main(void)
{
	int a[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, i, m = 0, k = 6, n = 10;

	fun(a, &n, k, m);
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");

	return 0;
}