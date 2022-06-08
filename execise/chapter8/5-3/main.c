#include<stdio.h>
#include<string.h>
#define N 5

int main(void)
{
	struct
	{
		char name[50];
		int votes;
	} candidates[N] = { {"Zhang"}, {"Wang"}, {"Zhao"}, {"Li"}, {"Qian"} };

	int i, j, k;
	char name[50];

	for (i = 0; i < 25; i++)
	{
		scanf("%s", name);
		for (j = 0; j < N; j++)
		{
			if (strcmp(candidates[j].name, name) == 0)
			{
				candidates[j].votes++;
				break;
			}
		}
	}

	for (k = 0, i = 1; i < N; i++)
	{
		if (candidates[i].votes > candidates[k].votes)
		{
			k = i;
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%-20s %d %s\n", candidates[i].name, candidates[i].votes, i == k ? "Max" : "");
	}

	return 0;
}