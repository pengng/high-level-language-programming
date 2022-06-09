#include<stdio.h>

int main(void)
{
	FILE *fp;
	char s[10];

	fp = fopen("text.dat", "w");
	fputs("welcome", fp);
	fclose(fp);

	fp = fopen("text.dat", "a+");
	fprintf(fp, "%d", 55);
	rewind(fp);
	fscanf(fp, "%s", s);
	
	puts(s);
	fclose(fp);

	return 0;
}