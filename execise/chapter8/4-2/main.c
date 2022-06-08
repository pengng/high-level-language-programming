#include<stdio.h>

int main(void)
{
	struct student
	{
		long int num;
		int age;
		char sex;
		char name[20];
		char addr[30];
	} stu[10];

	int i, sum = 0, aver;

	for (i = 0; i < 10; i++)
	{
		scanf("%d%s %c%d%s", &stu[i].num, stu[i].name, &stu[i].sex, &stu[i].age, stu[i].addr);
		getchar();
		sum = sum + stu[i].age;
	}
	aver = sum / 10;
	printf("%d\n", aver);

	return 0;
}