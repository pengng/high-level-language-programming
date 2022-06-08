#include<stdio.h>
#define LETTER 1
#define TRANS 1

int main(void)
{
	char ch;

	while (1)
	{
		ch = getchar();
		if (ch == '#') break;

		#ifdef TRANS
		{
		#if LETTER
			if (ch >= 'a' && ch <= 'z') ch -= 32;
		#else
			if (ch >= 'A' && ch <= 'Z') ch += 32;
		#endif
		}
		#endif

		putchar(ch);
	}

	return 0;
}