#include<stdio.h>

int scmp(char *s1, char *s2);

int main(void)
{
	puts(scmp("Hello", "world") < 0 ? "Yes" : "No");
	puts(scmp("Hello", "Hella") > 0 ? "Yes" : "No");
	puts(scmp("Hello", "Hello") == 0 ? "Yes" : "No");
	puts(scmp("Hello1", "Hello") > 0 ? "Yes" : "No");

	return 0;
}

int scmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	return *s1 - *s2;
}