#include<stdio.h>

void fun(char* a1, char* a2, int n)
{
	int k;
	for (k = 0; k < n; k++)
		a2[k] = (a1[k] - 'A' - 3 + 26) % 26 + 'A';
	a2[n] = '\0';
}

int main(void)
{
	char s1[5] = "ABCD", s2[5];
	fun(s1, s2, 4);
	puts(s2);
	return 0;
}