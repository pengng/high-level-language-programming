/* 全局外部变量和内部变量重名的例子 */
#include <stdio.h>
int x = 2, y = 3;                           /* 定义全局外部变量 */
void fun()                                  /* 定义函数 fun() */
{
    int x = 4;                              /* 定义与全局外部变量 x 重名的内部变量 */
    printf("x=%d,y=%d\n", x, y);            /* 此外 x 是内部变量，y 是全局外部变量 */
}

int main(void)                              /* 主函数 */
{
    int y = 5;                              /* 定义与全局外部变量 y 重名的内部变量 */
    fun();
    printf("x=%d,y=%d\n", x, y);            /* 此处 x 是全局外部变量，y 是内部变量 */
    return 0;
}