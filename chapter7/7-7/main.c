/* 利用多种方法实现从键盘输入N个学生的成绩，计算其平均成绩并输出 */
/* 方法一：利用下标法直接访问数组元素 */
#include <stdio.h>
#define N 10
int main(void)
{
    int s[N], i, sum = 0;
    float av;
    printf("input scores:\n");
    for (i = 0; i < N; i++) scanf("%d", &s[i]);     /* 使用下标法从键盘依次输入N个学生的成绩保存至一维数组 */

    for (i = 0; i < N; i++) sum += s[i];            /* 计算N个学生的总成绩 */
    av = sum / N;                                   /* 计算N个学生的平均成绩 */
    printf("average score is %5.2f\n", av);
    return 0;
}