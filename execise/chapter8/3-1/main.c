#include <stdio.h>
struct student
{
    char name[20];
    int score;
} stu[4] = {"zhangsan", 90, "lisi", 88, "wangwu", 94, "zhaoliu", 91};

int main(void)
{
    int i, sum = 0;
    for (i = 0; i < 4; ++i)
        sum += stu[i].score;
    printf("average: %.2f\n", sum / 4.0);
    return 0;
}