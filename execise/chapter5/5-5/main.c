#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[100], s2[100];
	int i, j, n;

	gets(s1);
	gets(s2);
	scanf("%d", &n);

	n = n < strlen(s2) ? n : strlen(s2);

	for (i = strlen(s1), j = 0; j < n; i++, j++)
	{
		s1[i] = s2[j];
	}
	s1[i] = '\0';

	printf("%s\n", s1);

	return 0;
}