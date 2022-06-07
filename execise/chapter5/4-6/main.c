#include<stdio.h>
#include<string.h>
int main(void)
{
	int i, j;
	char s[10][20], ch[10];

	for (i = 0; i < 10; i++)
	{
		gets(s[i]);
		ch[i] = s[i][0];

		for (j = 1; s[i][j] != '\0'; j++)
			if (ch[i] < s[i][j])
				ch[i] = s[i][j];
	}

	for (i = 0; i < 10; i++)
		printf("%d %c\n", i, ch[i]);

	return 0;
}