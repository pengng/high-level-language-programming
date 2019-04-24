#include <stdio.h>
#define M 5 /* 定义符号常量，学生人数为5 */
#define N 4 /* 定义符号常量，课程为4门 */

int main(void)
{
    int i, j;
    float score[M][N] = {{78, 85, 83, 65}, {88, 91, 89, 93}, {72, 65, 54, 75}, {86, 88, 75, 60}, {69, 60, 50, 72}};
    float stu_ave[M] = {0};
    float cla_ave[N] = {0};

    for (i = 0; i < M; i++) /* 外层循环，逐一计算每位学生的平均成绩 */
    {
        for (j = 0; j < N; j++) /* 内层循环，逐一计算每位学生每门课程的总成绩 */
        {
            stu_ave[i] += score[i][j]; /* 计算第i个学生N门课程的总成绩 */
            cla_ave[j] += score[i][j]; /* 计算第j门课的总成绩 */
        }
        stu_ave[i] /= N; /* 计算第i个学生的平均成绩 */
    }

    for (j = 0; j < N; j++)
        cla_ave[j] /= M; /* 计算第j门课的平均成绩 */
    
    printf("学生编号\t课程1\t课程2\t课程3\t课程4\t个人平均\n");

    for (i = 0; i < M; i++) /* 输出每个学生的各科成绩和平均成绩 */
    {
        printf("Student%d\t", i + 1);
        for (j = 0; j < N; j++)
            printf("%.1f\t", score[i][j]);
        
        printf("%.1f\n", stu_ave[i]);
    }

    printf("\n课程平均\t");

    for (j = 0; j < N; j++)
        printf("%.1f\t", cla_ave[j]); /* 输出每门课程的平均成绩 */

    printf("\n");
    
    return 0;
}