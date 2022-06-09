#include<stdio.h>

int main(void)
{
	FILE *fp;
	int i, m, n;

	fp = fopen("text.dat", "w+");
	for (i = 1; i < 5; i++)
	{
		fprintf(fp, "%d", i);
		if (i % 3 == 0)
			fprintf(fp, "\n");
	}
	rewind(fp);
	fscanf(fp, "%d%d", &m, &n);
	printf("%d,%d\n", m, n);

	return 0;
}