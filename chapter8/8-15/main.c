/* 利用指向结构体类型数组的指针访问结构体类型数组元素的成员的例子 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date                 /* 定义由年、月和日三个成员组成的日期结构体类型 */
{
    int year, month, day;
};

struct std_info             /* 定义由学号、姓名、性别和生日共四个成员组成的学生信息结构体类型 */
{
    int no;
    char name[10];
    char sex;
    struct date birthday;
};

int main(void)
{
    struct std_info stu[2], *p;     /* 定义结构体类型数组 stu 和结构体类型指针变量 p */
    p = stu;                        /* 使结构体类型指针变量 p 指向结构体类型数组 stu (即指向结构体类型数组元素 stu[0]) */
    p->no = 100;                    /* 利用指向结构体类型数组 stu 的指针变量 p 为元素 stu[0] 的成员 no 赋值 */
    strcpy((*p).name, "ZhangYi");
    (*(p + 1)).no = 101;            /* 利用指向结构体类型数组 stu 的指针变量 p 为元素 stu[1] 的成员 no 赋值 */
    strcpy((p + 1)->name, "HaoLin");
    printf("No:%d,Name:%s \n", (*p).no, p->name);   /* 利用指向结构体类型数组 stu 的指针变量 p 输出数组元素 stu[0] 的两个成员的值 */
    printf("No:%d,Name:%s \n", (p + 1)->no, (*(p + 1)).name);   /* 利用指向结构体类型数组 stu 的指针变量 p 输出数组元素 stu[1] 的两个成员的值 */
    return 0;
}