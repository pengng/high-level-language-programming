#include<stdio.h>

int main(void)
{
	FILE *inFile, *outFile;
	char buffer[100];

	inFile = fopen("text1.dat", "r");
	outFile = fopen("text2.dat", "w");
	while (fgets(buffer, 100, inFile) != NULL)
		fputs(buffer, outFile);
	fclose(inFile);
	fclose(outFile);

	return 0;
}