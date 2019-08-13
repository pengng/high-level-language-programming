/* 计算两个班学生的平均成绩 */
#include <stdio.h>
float average(float array[], int n)         /* 定义函数 average()，2个形参，其中 array 是数组名，n 是整形变量 */
{
    int i;
    float aver, sum = array[0];
    for (i = 1; i < n; i++)
        sum += array[i];                    /* 计算n个学生的总成绩 */
    aver = sum / n;                         /* 计算 n个学生的平均成绩 */
    return aver;
}

int main(void)                              /* 主函数 */
{
    float *p1, *p2;                         /* 定义指针变量 p1 和 p2 */
    static float score1[5] = {98.5, 97, 91.5, 60, 55};
    static float score2[10] = { 67.5, 89.5, 99, 69.5, 77, 89, 76.5, 54, 60, 99.5 };
    p1 = score1;                            /* 指针变量 p1 指向数组 score1 的首地址 */
    p2 = score2;                            /* 指针变量 p2 指向数组 score2 的首地址 */
    printf("the average of class A is %6.2f\n", average(p1, 5));
    printf("the average of class B is %6.2f\n", average(p2, 10));
    return 0;
}