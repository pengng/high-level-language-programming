#include<stdio.h>
#define N 5

struct STU
{
	char name[20];
	int num;
	int age;
} student[N];

void save()
{
	FILE *fp;
	int i;

	fp = fopen("text.dat", "wb");
	for (i = 0; i < N; i++)
		fprintf(fp, "%s %d %d\n", student[i].name, student[i].num, student[i].age);
}

int main(void)
{
	int i;
	
	for (i = 0; i < N; i++)
		scanf("%s%d%d", student[i].name, &student[i].num, &student[i].age);
	save();

	return 0;
}