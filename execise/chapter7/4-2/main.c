#include<stdio.h>
#include<string.h>

int ishuiwen(char *s)
{
	char *p1, *p2;
	int i, t = 0;

	p1 = s;
	p2 = s + strlen(s) - 1;

	for (i = 0; i <= strlen(s) / 2; i++)
		if (*p1++ != *p2--)
		{
			t = 1;
			break;
		}

	if (!t)
		return 1;
	else
		return 0;
}

int main(void)
{
	char str[80];
	scanf("%s", str);
	printf("%d\n", ishuiwen(str));
	return 0;
}