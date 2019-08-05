/* 自动型变量与静态型变量的例子 */
#include <stdio.h>
void auto_static(void)                          /* 定义函数 auto_static */
{
    int var_auto = 0;                           /* 定义自动型变量，每次调用都重新初始化 */
    static int var_static = 0;                  /* 定义静态型变量，只初始化一次 */
    printf("var_auto=%d, var_static=%d\n", var_auto, var_static);
    ++var_auto;
    ++var_static;
}

int main(void)                                  /* 主函数 */
{
    int i;
    for (i = 0; i <= 2; i++) auto_static();     /* 调用函数 auto_static */
    return 0;
}