#include<stdio.h>
int main(void)
{
	int a[7] = { 4, 7, 2, 8, 5, 9, 1 }, i, j, tem;

	for (i = 0; i < 6; i++)
	{
		for (j = i + 1; j < 7; j++)
		{
			if (a[j] < a[i])
			{
				tem = a[i];
				a[i] = a[j];
				a[j] = tem;
			}
		}

		printf("%d ", a[i]);
	}
	
	printf("%d\n", a[i]);

	return 0;
}