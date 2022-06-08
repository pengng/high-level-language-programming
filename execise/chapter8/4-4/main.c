#include<stdio.h>
#include<string.h>

struct student
{
	char name[32];
	int rank;
	int score;
};

int main(void)
{
	struct student stu[4] = { "zhangsan", 3, 88, "lisi", 2, 92, "wangwu", 4, 85, "zhaoliu", 1, 98 };
	char s[32];
	int i;

	do
	{
		scanf("%s", s);
		for (i = 0; i < 4; i++)
			if (strcmp(stu[i].name, s) == 0)
			{
				printf("rank:%d\n", stu[i].rank);
				printf("score:%d\n", stu[i].score);
				break;
			}

		if (i >= 4)
			printf("No match!\n");

	} while (strcmp(s, "0") != 0);

	return 0;
}