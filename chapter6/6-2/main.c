#include <stdio.h>

void printstar(void);

int main(void)
{
    printstar();
    return 0;
}

/* 编写一个函数，在屏幕上输出一行 8 个星号“*” */
void printstar(void)        /* 定义函数 printstar，无参数、无返回值 */
{
    int i;
    for (i = 0; i < 8; i++)
        printf("%c", '*');
    return;                 /* 因为函数无返回值，该语句也可以省略 */
}