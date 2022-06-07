#include<stdio.h>
int main(void)
{
	int a[6] = {-4921, -331, 12, 839, 81111}, x, i, j;

	scanf("%d", &x);

	j = 4;
	while (j >= 0 && a[j] > x)
	{
		a[j + 1] = a[j];
		j--;
	}
	a[j + 1] = x;

	for (i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}