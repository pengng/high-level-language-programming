#include<stdio.h>

int main(void)
{
	FILE *fp;
	int i;
	char a[4] = { 'a', 'b', 'c', 'd' }, b;

	fp = fopen("text.dat", "wb");
	for (i = 0; i < 4; i++)
		fwrite(&a[i], sizeof(char), 1, fp);
	fclose(fp);

	fp = fopen("text.dat", "rb");
	fseek(fp, -3L * sizeof(char), SEEK_END);
	fread(&b, sizeof(char), 1, fp);
	fclose(fp);

	printf("%c\n", b);

	return 0;
}