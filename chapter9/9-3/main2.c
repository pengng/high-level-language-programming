#include<stdio.h>

int max(int x, int y)						/* ���庯�� max() */
{
	return (x > y ? x : y);
}

int main(void)
{
	int j, k;

	printf("Please input two integers: \n");
	scanf("%d%d", &j, &k);
	printf("The max is %d\n", max(j, k));	/* ���ú��� max() */

	return 0;
}