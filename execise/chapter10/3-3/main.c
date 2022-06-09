#include<stdio.h>

int main(void)
{
	FILE *fp;
	int i, x[5] = { 1, 2, 3, 4, 5 };

	fp = fopen("text.dat", "w+");
	for (i = 0; i < 5; i++)
		fprintf(fp, "%d\n", x[i]);
	rewind(fp);
	
	for (i = 0; i < 5; i++)
		fscanf(fp, "%d", &x[4 - i]);
	fclose(fp);

	for (i = 0; i < 5; i++)
		printf("%d,", x[i]);

	return 0;
}