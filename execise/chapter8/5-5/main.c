#include<stdio.h>

struct student
{
	int number;
	int midterm;
	int endterm;
};

void print(struct student* students, int n);

int main(void)
{
	struct student students[100];

	int i, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &students[i].number, &students[i].midterm, &students[i].endterm);
	}

	print(students, n);
	return 0;
}

void print(struct student* students, int n)
{
	int i;
	double average;
	
	printf("number\tmidterm\tendterm\taverage\n");
	for (i = 0; i < n; i++)
	{
		average = (students[i].midterm + students[i].endterm) / 2.0;
		printf("#%d\t%d\t%d\t%lg\n", students[i].number, students[i].midterm, students[i].endterm, average);
	}
}