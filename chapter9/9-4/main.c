#include<stdio.h>
#define LETTER 1

int main(void)
{
	char ch;

	while (1)
	{
		ch = getchar();
		if (ch == '#') break;						/* ����#ʱ����ѭ�� */

		#if LETTER
		if (ch >= 'a' && ch <= 'z') ch -= 32;		/* Сд��ĸ��Ϊ��д��ĸ */
		#else
		if (ch >= 'A' && ch <= 'Z') ch += 32;		/* ��д��ĸ��ΪСд��ĸ */
		#endif

		putchar(ch);
	}

	return 0;
}