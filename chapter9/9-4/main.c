#include<stdio.h>
#define LETTER 1

int main(void)
{
	char ch;

	while (1)
	{
		ch = getchar();
		if (ch == '#') break;						/* 输入#时结束循环 */

		#if LETTER
		if (ch >= 'a' && ch <= 'z') ch -= 32;		/* 小写字母改为大写字母 */
		#else
		if (ch >= 'A' && ch <= 'Z') ch += 32;		/* 大写字母改为小写字母 */
		#endif

		putchar(ch);
	}

	return 0;
}