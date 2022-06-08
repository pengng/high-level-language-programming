#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int a[100], n = 0, x = 0, flag = 0, i;
	char ch;

	while (1)
	{
		ch = getchar();

		if (isdigit(ch))
		{
			x *= 10;
			x += ch - '0';
			flag = 1;
		}
		else if (flag)
		{
			a[n] = x;
			x = 0;
			flag = 0;
			n++;
		}

		if (isspace(ch)) break;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}