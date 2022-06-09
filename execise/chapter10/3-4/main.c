#include<stdio.h>

int main(void)
{
	FILE *fp;
	int x[10] = { 2, 3, 4 }, i, num;

	fp = fopen("text.dat", "w");
	for (i = 0; i < 3; i++)
		fprintf(fp, "%d", x[i]);
	fprintf(fp, "\n");
	fclose(fp);

	fp = fopen("text.dat", "r");
	fscanf(fp, "%d", &num);
	fclose(fp);
	printf("%d\n", num);

	return 0;
}