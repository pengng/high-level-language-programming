#include<stdio.h>
#include<stdlib.h>
#define N 10
#define M 3

struct student
{
	int number;
	char name[50];
	int score[M];
	double average;
};

int compare(const struct student *a, const struct student *b);

int main(void)
{
	struct student students[N];
	int i, j, sum;
	FILE *fp = fopen("stud_sort.dat", "w");

	for (i = 0; i < N; i++)
	{
		scanf("%d %s", &students[i].number, students[i].name);
		sum = 0;
		for (j = 0; j < M; j++)
		{
			scanf("%d", &students[i].score[j]);
			sum += students[i].score[j];
		}
		students[i].average = (double)sum / M;
	}

	qsort(students, N, sizeof(struct student), compare);

	printf("%-4s %-14s%s %s %s %s\n", "#", "name", "score1", "score2", "score3", "average");
	for (i = 0; i < N; i++)
	{
		printf("%-4d %-14s", students[i].number, students[i].name);
		fprintf(fp, "%d %s", students[i].number, students[i].name);
		for (j = 0; j < M; j++)
		{
			printf("%-6d ", students[i].score[j]);
			fprintf(fp, " %d", students[i].score[j]);
		}
		printf("%.1lf\n", students[i].average);
		fprintf(fp, " %lf\n", students[i].average);
	}
	fclose(fp);

	return 0;
}

int compare(const struct student *a, const struct student *b)
{
	return b->average - a->average;
}