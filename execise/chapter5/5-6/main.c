#include<stdio.h>
int main(void)
{
	char str[100];
	int i, j, n, temp;

	i = 0;
	while ((str[i] = getchar()) != '#')
	{
		i++;
	}
	str[i] = '\0';

	for (n = 1, i = 1; str[i] != '\0'; i++)
	{
		j = i - 1;
		while (j >= 0 && str[i] != str[j])
		{
			j--;
		}

		if (j < 0)
		{
			str[n] = str[i];
			n++;
		}
	}
	str[n] = '\0';

	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (str[j] < str[j - 1])
			{
				temp = str[j - 1];
				str[j - 1] = str[j];
				str[j] = temp;
			}
		}
	}

	printf("%s\n", str);

	return 0;
}