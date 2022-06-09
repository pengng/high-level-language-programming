#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE *fp;
	char s[80];
	int i;
	
	gets(s);
	fp = fopen("text.dat", "w");
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 'a';
		fputc(s[i], fp);
	}
	fclose(fp);

	fp = fopen("text.dat", "r");
	fgets(s, 80, fp);
	printf("%s\n", s);
	fclose(fp);

	return 0;
}