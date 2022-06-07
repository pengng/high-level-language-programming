#include<stdio.h>
int main(void)
{
	int x, bit[32], i = 0;

	scanf("%d", &x);

	while (x)
	{
		bit[i] = x % 2;
		x /= 2;
		i++;
	}

	printf("0b");
	while (--i >= 0)
	{
		printf("%d", bit[i]);
	}
	printf("\n");

	return 0;
}