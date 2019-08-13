/* 定义结构体类型 student 存储学生的学号、姓名和三门课程的成绩。对结构体类型变量 stu 中的数据进行更改并输出结果 */
#include <stdio.h>
#include <string.h>
struct student              /* 定义结构体类型 student */
{
    long no;
    char name[20];
    int score[3];   
};

int main(void)
{
    struct student stu = {22055, "zhangsan", 97, 98, 99};   /* 定义结构体类型变量 stu，同时进行初始化 */

    int i = 0;
    printf("Before change:\n");
    printf("No: %ld, Name: %s", stu.no, stu.name);        /* 输出更改前的学生信息 */

    for (i = 0; i < 3; ++i)
        printf(", Score %d: %d", i + 1, stu.score[i]);
    stu.no = 55022;                     /* 更改学生的学号为 55022 */
    strcpy(stu.name, "lisi");           /* 更改学生姓名为 “lisi" */
    stu.score[1] = 89;                  /* 更改第二门课程的成绩为 89 */
    printf("\nAfter change:\n");
    printf("No: %ld, Name: %s", stu.no, stu.name);        /* 输出更改后的学生的学号和姓名 */
    for (i = 0; i < 3; ++i)
        printf(", Score %d: %d", i + 1, stu.score[i]);    /* 依次输出更改后的学生三门课程的成绩 */

    return 0;
}