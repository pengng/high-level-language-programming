#include<stdio.h>
int main(void)
{
	char ch;

	while ((ch = getchar()) != '#')
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 'a' + 'A');
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch - 'A' + 'a');
		}
		else
		{
			putchar(ch);
		}
	}

	return 0;
}