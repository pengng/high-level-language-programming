#include<stdio.h>

int fun(int *x, int n)
{
	int *end = x + n, s = 1;
	for (; x < end; x++)
		if (*x % 2) s *= *x;
	return s;
}

int main(void)
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n", fun(a, 10));
	return 0;
}