#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE *file1, *file2, *file3;
	char text1[100], text2[100];

	file1 = fopen("file1.dat", "r");
	file2 = fopen("file2.dat", "r");
	file3 = fopen("file3.dat", "w");

	fgets(text1, 100, file1);
	fgets(text2, 100, file2);
	fclose(file1);
	fclose(file2);

	if (strcmp(text1, text2) < 0)
	{
		fputs(text1, file3);
		fputs(text2, file3);
	}
	else
	{
		fputs(text2, file3);
		fputs(text1, file3);
	}
	fclose(file3);

	return 0;
}