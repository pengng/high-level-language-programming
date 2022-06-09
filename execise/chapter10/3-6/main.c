#include<stdio.h>
#define N 4

struct STU
{
	char name[10];
	int age;
} student[N] = {"zhangsan", 21, "lisi", 20, "wangwu", 21, "niuer", 22};

int main(void)
{
	FILE *fp;
	int i;

	fp = fopen("text.dat", "wb+");
	fwrite(student, sizeof(struct STU), N, fp);
	rewind(fp);
	fread(student + 3, sizeof(struct STU), 1, fp);
	for (i = 0; i < N; i++)
		printf("%-10s%d\n", student[i].name, student[i].age);
	fclose(fp);

	return 0;
}