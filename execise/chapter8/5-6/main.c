#include<stdio.h>

int josephus(int n, int k);

int main(void)
{
	int n = 13, k = 3;

	printf("%d\n", josephus(n, k));

	return 0;
}

int josephus(int n, int k)
{
	int i, s = 0;
	for (i = 2; i <= n; i++)
		s = (s + k) % i;
	return s;
}