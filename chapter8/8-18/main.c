/* 编写函数 display()，通过主函数调用实现将若干个学生信息打印在屏幕上 */
#include <stdio.h>
struct date                 /* 定义由年、月和日三个成员组成的日期结构体类型 */
{
    int year, month, day;
};

struct std_info             /* 定义由学号、姓名、性别和生日共四个成员组成的学生信息结构体类型 */
{
    char no[10];
    char name[10];
    char sex;
    struct date birthday;
} student[3] = {
    {"000102", "WangHong", 'f', {2000, 5, 20}},
    {"000105", "ZhangYing", 'f', {2000, 8, 15}},
    {"000112", "HaoLin", 'm', {2000, 3, 10}}
};                          /* 定义结构体类型数组 student 并初始化 */

void display(struct std_info *p)        /* 定义函数 display()，形参是结构体类型的指针变量 */
{
    printf("%-7s%-10s%-5c", p->no, p->name, p->sex);
    printf("%4d-%2d-%2d\n", p->birthday.year, p->birthday.month, p->birthday.day);
}

int main(void)
{
    int i = 0;
    printf("%-7s%-10s%-5s%s\n", "NO.", "Name", "Sex", "Birthday");  /* 打印表头 */
    for (; i < 3; ++i)
    {
        display(student + i);           /* 调用函数 display()，实参是同一结构体类型的数组元素地址 */
        printf("\n");
    }
    return 0;
}