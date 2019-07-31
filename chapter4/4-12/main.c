/* 从键盘输入一个学生的学号、性别和一门课程的成绩后输出该学生的信息 */
#include <stdio.h>
int main(void)
{
    int num;            /* 定义整型变量 num 存放学生的学号 */
    char sex;           /* 定义字符型变量 sex 存放学生的性别 */
    float score;        /* 定义实型变量 score 存放学生一门课程的成绩 */
    printf("Please input number:\n");
    scanf("%d", &num);  /* 从键盘输入学生的学号 */
    printf("Please input sex:\n");
    getchar();
    scanf("%c", &sex);  /* 从键盘输入学生的性别 */
    printf("Please input score:\n");
    scanf("%f", &score);/* 从键盘输入学生一门课程的成绩 */
    printf("num:%d,sex:%c,score:%6.2f\n", num, sex, score); /* 输出该学生的学号、性别和一门课程的成绩 */
    return 0;
}