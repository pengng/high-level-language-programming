#include<stdio.h>
int main(void)
{
	int m, n, a[5][5];
	
	for (m = 0; m < 5; m++)
	{
		a[m][0] = a[m][m] = 1;
		
		for (n = 1; n < m; n++)
			a[m][n] = a[m - 1][n - 1] + a[m - 1][n];
	}

	for (m = 0; m < 5; m++)
	{
		for (n = 0; n <= m; n++)
			printf("%4d", a[m][n]);
		printf("\n");
	}

	return 0;
}