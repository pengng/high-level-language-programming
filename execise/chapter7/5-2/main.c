#include<stdio.h>
#include<string.h>

char *strlink(char *s1, char *s2);

int main(void)
{
	char s1[30] = "Hello ";
	char s2[30] = "How ";
	char s3[30] = "Just";

	printf("[Hello ] + [world] = [%s]\n", strlink(s1, "world"));
	printf("[How ] + [are you?] = [%s]\n", strlink(s2, "are you?"));
	printf("[Just] + [ do it!] = [%s]\n", strlink(s3, " do it!"));

	return 0;
}

char *strlink(char *s1, char *s2)
{
	int i, j;

	for (i = strlen(s1), j = 0; s2[j] != '\0'; i++, j++)
	{
		s1[i] = s2[j];
	}
	s1[i] = '\0';

	return s1;
}