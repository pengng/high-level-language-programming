#include<stdio.h>
int main(void)
{
	int balls = 2044;
	int count = 0;

	while (balls > 0)
	{
		balls = balls / 2 - 2;
		count++;
	}

	printf("%d��ȡ��ȫ��С��\n", count);

	return 0;
}