#include<stdio.h>
int main(void)
{
	char str[80];
	int i, len = 0;

	scanf("%s", str);
	while (str[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		printf("%c", str[i]);

	printf("\n");

	return 0;
}