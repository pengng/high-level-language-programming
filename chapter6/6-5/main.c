/* 函数实参和形参之间值传递方式的例子 */
#include <stdio.h>
int main(void)                                  /* 主函数 */
{
    void s(int n);                              /* 函数声明 */
    int n = 100;                                /* 定义实参 n, 并初始化 */
    s(n);                                       /* 调用函数 s() */
    printf("n_s=%d\n", n);                      /* 输出调用函数 s() 后实参的值，便于进行比较 */
    return 0;
}

void s(int n)                                   /* 定义函数 s() */
{
    int i;                              
    printf("n_x=%d\n", n);                      /* 输出改变前形参的值 */
    for (i = n - 1; i >= 1; i--) n = n + i;     /* 改变形参的值 */
    printf("n_x=%d\n", n);
}