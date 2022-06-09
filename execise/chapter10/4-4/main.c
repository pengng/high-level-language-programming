#include<stdio.h>

int main(void)
{
	FILE *fp;
	char c, fileName[32];

	gets(fileName);
	fp = fopen(fileName, "r");
	while (!feof(fp))
	{
		c = fgetc(fp);
		if (c >= '0' && c <= '9')
			printf("%c ", c);
	}
	fclose(fp);

	return 0;
}