#include<stdio.h>

int match(char *s, char c)
{
	int count = 0;

	while (*s != '\0')
	{
		if (*s == c)
			break;
		else
		{
			s++;
			count++;
		}
	}

	if (*s == '\0') count = -1;
	return count;
}

int main(void)
{
	char ch, str[30], *p = NULL;
	int pos, i;

	scanf("%s", str);
	getchar();
	scanf("%c", &ch);

	if ((pos = match(str, ch)) != -1)
	{
		for (i = pos; str[i] != '\0'; i++)
			printf("%c", str[i]);
		printf("\n");
	}
	else
		printf("Not Found\n");

	return 0;
}