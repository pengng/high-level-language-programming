#include<stdio.h>
#include<string.h>

void sort(char *name[], int n)
{
	char *temp;
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (strcmp(name[k], name[j]) > 0) k = j;

		if (k != i)
		{
			temp = name[i];
			name[i] = name[k];
			name[k] = temp;
		}
	}
}

void print(char *name[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%s\n", name[i]);
}

int main(void)
{
	void sort(char *name[], int n);
	void print(char *name[], int n);
	char *name[] = { "Follow Me", "Basic", "Great Wall", "Fortran", "Computer Design" };
	int n = 5;

	sort(name, n);
	print(name, n);

	return 0;
}