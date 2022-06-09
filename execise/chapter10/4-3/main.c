#include<stdio.h>

int main(void)
{
	FILE *fp;
	char ch;

	fp = fopen("abc.dat", "w");
	ch = getchar();
	while (ch != '\n')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);

	return 0;
}