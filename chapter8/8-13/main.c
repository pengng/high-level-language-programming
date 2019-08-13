/* 使用指向结构体类型变量的指针变量访问结构体类型变量各成员的例子 */
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
} student = {"000102", "ZhangYi", 'f', {2000, 9, 20}};      /* 定义结构体类型变量 student 并初始化 */

int main(int argc, char const *argv[])
{
    struct std_info *p = &student;      /* 定义指向结构体类型变量 student 的指针变量 p */
    printf("No:%s\n", p->no);           /* 用方式二输出结构体类型变量 student 的成员 no 的值 */
    printf("Name:%s\n", p->name);       /* 用方式二输出结构体类型变量 student 的成员 name 的值 */
    printf("Sex:%c\n", (*p).sex);       /* 用方式三输出结构体类型变量 student 的成员 sex 的值 */
    printf("Birthday:%d-%d-%d\n", p->birthday.year, p->birthday.month, p->birthday.day);
    return 0;
}