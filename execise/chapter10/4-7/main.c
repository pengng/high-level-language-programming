#include<stdio.h>

int main(void)
{
	FILE *fp;
	int i, a[100];

	fp = fopen("data.dat", "wb+");
	for (i = 0; i < 100; i++)
		fwrite(&i, sizeof(int), 1, fp);
	fclose(fp);

	fp = fopen("data.dat", "rb");
	fread(a, sizeof(int), 100, fp);
	fclose(fp);

	for (i = 0; i < 100; i++)
		printf("%d\n", a[i]);

	return 0;
}