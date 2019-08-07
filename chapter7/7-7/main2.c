/* 利用多种方法实现从键盘输入N个学生的成绩，计算其平均成绩并输出 */
/* 方法二：利用地址间接访问数组元素 */
#include <stdio.h>
#define N 10
int main(void)
{
    int s[N], i, sum = 0;
    float av;
    printf("input scores:\n");
    for (i = 0; i < N; i++) scanf("%d", s + i);
    for (i = 0; i < N; i++) sum += *(s + i);
    av = sum / N;
    printf("average score is %5.2f\n", av);
    return 0;
}