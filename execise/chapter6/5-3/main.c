#include<stdio.h>

int strcmp(char *s1, char *s2);

int main(void)
{
	puts(strcmp("Hello", "world") < 0 ? "Yes" : "No");
	puts(strcmp("Hello", "Hella") > 0 ? "Yes" : "No");
	puts(strcmp("Hello", "Hello") == 0 ? "Yes" : "No");
	puts(strcmp("Hello1", "Hello") > 0 ? "Yes" : "No");

	return 0;
}

int strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	return *s1 - *s2;
}