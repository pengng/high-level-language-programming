/* 编写函数 input() 输入一个学生的信息，通过主函数调用该函数实现输入若干个学生信息，然后输出 */
#include <stdio.h>
#define N 5
struct date     /* 定义由年、月和日三个成员组成的日期结构体类型 */
{
    int year, month, day;
};

struct std_info /* 定义由学号、姓名、性别和生日共四个成员组成的学生信息结构体类型 */
{
    char no[10];
    char name[10];
    char sex;
    struct date birthday;
};

struct std_info input()         /* 定义返回值类型为 std_info 结构体类型的函数 input() */
{
    int i;
    struct std_info s;          /* 定义结构体类型变量 s */
    scanf("%s", s.no);          /* 从键盘输入学生的学号 */
    scanf("%s", s.name);        /* 从键盘输入学生的姓名 */
    getchar();
    scanf("%c", &s.sex);        /* 从键盘输入学生的性别 */
    scanf("%d", &s.birthday.year);  /* 从键盘输入学生的生日 */
    scanf("%d", &s.birthday.month);
    scanf("%d", &s.birthday.day);
    return s;                       /* 返回结构体类型数据 */
}

int main(void)
{
    int i = 0;
    struct std_info student[N];     /* 定义结构体类型数组 student */
    printf("No.     Name    Sex     Birthday\n");   /* 打印学生信息的表头 */
    for (int i = 0; i < N; ++i)
        student[i] = input();       /* 循环调用函数 input() 并依次将函数返回值保存到结构体类型数组各元素 */
    for (int i = 0; i < N; ++i)
    {
        printf("%-7s%-9s%c", student[i].no, student[i].name, student[i].sex);
        printf("%4d-%2d-%2d\n", student[i].birthday.year, student[i].birthday.month, student[i].birthday.day);
    }
    return 0;
}