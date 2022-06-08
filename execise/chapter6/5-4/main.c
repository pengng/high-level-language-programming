#include<stdio.h>

void sort(int a[], int n);

int main(void)
{
	int a[100], i, n;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}

void sort(int a[], int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}