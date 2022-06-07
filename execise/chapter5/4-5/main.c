#include<stdio.h>
int main(void)
{
	int x[3][2] = { 1, 3, 2, 4, 5, 7 }, y[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int s[3][4], i, j, k;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			s[i][j] = 0;

			for (k = 0; k < 2; k++)
				s[i][j] += x[i][k] * y[k][j];

			printf("%4d", s[i][j]);
		}

		printf("\n");
	}

	return 0;
}