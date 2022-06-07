#include<stdio.h>

void revstr(char *s)
{
	char *p = s, c;

	while (*p) p++;
	if (s < p)
	{
		revstr(s + 1);
		printf("%c", *(s));
	}
}

int main(void)
{
	char *q, str[10];
	q = str;
	scanf("%s", q);
	revstr(q);
	return 0;
}