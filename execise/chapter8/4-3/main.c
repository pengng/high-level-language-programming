#include<stdio.h>

struct student
{
	char name[32];
	int score;
} stu[3] = {"zhangsan", 83, "lisi", 75, "wangwu", 90};

int main(void)
{
	int i, max, min;

	max = min = stu[0].score;
	for (i = 0; i < 3; i++)
		if (stu[i].score > max)
			max = stu[i].score;
		else if (stu[i].score < min)
			min = stu[i].score;

	for (i = 0; i < 3; i++)
		if (stu[i].score != max && stu[i].score != min)
		{
			printf("%s,%d\n", stu[i].name, stu[i].score);
			break;
		}

	return 0;
}