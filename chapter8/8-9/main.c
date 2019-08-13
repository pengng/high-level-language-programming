/* 结构体类型变量成员地址的引用例子 */
#include <stdio.h>
#include <string.h>
struct std_info                 /* 定义由学号、姓名、性别共三个成员组成的学生信息结构体类型 */
{
    int no;
    char name[10];
    char sex;
};

int main(int argc, char const *argv[])
{
    struct std_info student;        /* 定义结构体类型变量 student */
    int *p_no;                      /* 定义指针变量 p_no */
    char *p_name;                   /* 定义指针变量 p_name */
    p_no = &student.no;             /* 使指针变量 p_no 指向结构体类型变量 student 的成员 no */
    p_name = student.name;          /* 使指针变量 p_name 指向结构体变型变量 student 的成员 name */
    *p_no = 1000;                   /* 利用指针变量给结构体类型变量 student 的成员 no 赋值 */
    strcpy(p_name, "LiWei");        /* 调用库函数 strcpy() 对结构体类型变量 student 的成员 name 进行字符串复制 */

    printf("No: %d\n", *p_no);      /* 利用指针变量输出结构体类型变量 student 的成员 no 的值 */
    printf("Name: %s\n", p_name);   /* 利用指针变量输出结构体类型变量 student 的成员 name 的值 */
    return 0;
}