/* 定义结构体类型 student 存储学生的学号、姓名和年龄。输入各学生的信息并存储到结构体类型数组 stud，编写函数 age() 统计学生年龄在 high
和 low 之间（包括 high 和 low)的人数，其中 high 和 low 由键盘输入，最后输出符合条件的学生信息。*/
#include <stdio.h>
#include <string.h>
typedef struct student      /* 自定义结构体类型 student 的别名 STU */
{
    char no[10];
    char name[20];
    int age;
} STU;

STU *p, *q;                 /* 利用 STU 定义结构体类型指针变量 p 和 q */

int age(int n, int down, int up)    /* 定义函数 age()，返回满足条件的学生数，并利用指针变量将其信息存入结构体类型数组 */
{
    int i = 0, count = 0;
    for (i = 0; i < n; ++i)
    {
        if ((p + i)->age >= down && (p + i)->age <= up)     /* 若满足条件，则将学生信息存入结构体类型数组 */
        {
            strcpy((q + count)->no, (p + i)->no);
            strcpy((q + count)->name, (p + i)->name);
            (q + count)->age = (p + i)->age;
            count++;
        }
    }
    return count;
}

int main(void)
{
    STU stud[100], fit[100];    /* 利用 STU 定义结构体类型数组 stud 和 fit，分别存储全部和满足条件的学生的信息 */
    int num = 0, fit_count = 0, high = 0, low = 0, i = 0;
    printf("How many students' info do you want to input: ");
    scanf("%d", &num);
    p = stud;                   /* 将结构体类型指针变量 p 指向存储全部学生信息的结构体类型数组 stud */
    q = fit;                    /* 将结构体类型指针变量 q 指向存储满足条件学生信息的结构体类型数组 fit */
    for (int i = 0; i < num; ++i)
    {
        getchar();
        printf("Please input the ID of student %d: ", i + 1);
        scanf("%s", (p + i)->no);
        getchar();
        printf("Please input the name of student %d: ", i + 1);
        gets((p + i)->name);
        printf("Please input the age of student %d: ", i + 1);
        scanf("%d", &(p + i)->age);
    }

    printf("Please input the upper limit of age: ");
    scanf("%d", &high);         /* 从键盘输入年龄上限 */
    printf("Please input the lower limit of age: ");
    scanf("%d", &low);          /* 从键盘输入年龄下限 */
    fit_count = age(num, low, high);    /* 调用函数 age() */
    for (i = 0; i < fit_count; ++i)     /* 依次输出所有符合条件学生的信息 */
        printf("No: %s,     Name: %s,   Age: %d\n", (q + i)->no, (q + i)->name, (q + i)->age);
    return 0;
}