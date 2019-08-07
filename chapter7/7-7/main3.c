/* 利用多种方法实现从键盘输入N个学生的成绩，计算其平均成绩并输出 */
/* 方法三：利用指针变量间接访问数组元素 */
#include <stdio.h>
#define N 10
int main(void)
{
    int s[N], *p, sum = 0;
    float av;
    printf("input scores:\n");
    p = s;                                      /* 指针变量 p 指向数组 s 的首地址 */
    for (; p < s + N; p++)  scanf("%d", p);     /* 指针变量 p 的值即是数组元素 s[i] 的地址 */
    p = &s[0];                                  /* 指针变量 p 指向数组 s 的第一个元素 s[0] */
    for (; p < s + N; p++) sum += *p;           /* *p 等价于 s[i] */
    av = sum / N;
    printf("average score is %5.2f\n", av);
    return 0;
}