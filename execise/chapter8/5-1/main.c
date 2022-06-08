#include<stdio.h>

int main(void)
{
	struct
	{
		int number;
		char gender;
		int score;
	} students[100];
	int i, n, males, females, sum, average;

	n = 0;
	while (1)
	{
		scanf("%d %c %d", &students[n].number, &students[n].gender, &students[n].score);
		if (students[n].number == 0 && students[n].gender == 'N' && students[n].score == 0) break;
		n++;
	}

	males = females = 0;
	sum = average = 0;
	for (i = 0; i < n; i++)
	{
		if (students[i].gender == 'm')
		{
			males++;
		}
		else if (students[i].gender == 'f')
		{
			females++;
		}

		sum += students[i].score;
	}
	average = sum / n;
	printf("males = %d, females = %d, average score = %d\n", males, females, average);

	return 0;
}