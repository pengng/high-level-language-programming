/* 已知某学生五门课程的成绩，计算其平均成绩并输出 */
#include <stdio.h>
float aver(int a[])                                     /* 定义函数 aver() 计算学生的平均成绩，形参是数组名 */
{
    int i;
    float av, s = a[0];
    for (i = 1; i < 5; i++) s += a[i];                  /* 计算五门课程的总成绩 */
    av = s / 5;                                         /* 计算五门课程的平均成绩 */
    return av;
}

int main(void)                                          /* 主函数 */
{
    int sco[5];
    float av;
    int i;
    printf("input 5 scores:\n");
    for (i = 0; i < 5; i++) scanf("%d", &sco[i]);       /* 从键盘依次输入五门课程的成绩 */
    av = aver(sco);                                     /* 调用函数 aver()，实参为数组名 sco */
    printf("average score is %5.2f\n", av);
    return 0;
}