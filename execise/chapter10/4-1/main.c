#include<stdio.h>

int main(void)
{
	FILE *fp;
	char c, fileName[32];
	int count = 0;

	scanf("%s", fileName);
	getchar();
	fp = fopen(fileName, "w");
	while ((c = getchar()) != '#')
	{
		fputc(c, fp);
		count++;
	}
	fclose(fp);
	printf("%d\n", count);

	return 0;
}