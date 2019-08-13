/* 编写函数 display() 输出三名学生的信息，通过主函数调用该函数实现将学生信息显示在屏幕上 */
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
};                          /* 定义结构体类型数组 student */

void display(void)          /* 定义无参无返回值的函数 display() */
{
    int i = 0;
    for (int i = 0; i < 3; ++i)
    {
        printf("%-7s%-10s%-5c", student[i].no, student[i].name, student[i].sex);
        printf("%4d-%02d-%2d\n", student[i].birthday.year, student[i].birthday.month, student[i].birthday.day);
    }
}

int main(void)
{
    printf("%-7s%-10s%-5s%s\n", "No.", "Name", "Sex", "Birthday");  /* 打印表头 */
    display();              /* 调用函数 display() 输出学生的信息 */
    return 0;
}