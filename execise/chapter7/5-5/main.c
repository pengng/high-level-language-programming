#include<stdio.h>

void reverse(int a[], int n);
void swap(int *p1, int *p2);

int main(void)
{
	int n, m, A[100], i;

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	m %= n;
	reverse(A, m);
	reverse(&A[m], n - m);
	reverse(A, n);

	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}

void reverse(int a[], int n)
{
	int i, j;

	i = 0, j = n - 1;
	while (i < j)
	{
		swap(&a[i], &a[j]);
		i++;
		j--;
	}
}

void swap(int *p1, int *p2)
{
	int x = *p1;
	*p1 = *p2;
	*p2 = x;
}