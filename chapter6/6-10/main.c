/* 外部变量的定义和声明的例子 */
#include <stdio.h>
int l = 3, w = 4, h = 5;                /* 定义外部变量 l、w、h */

int vs(int l, int w)
{
    extern int h;                       /* 外部变量的声明 */
    int v;                              /* 定义内部变量 */
    v = l * w * h;                      /* 直接使用外部变量的值 */
    return v;
}

int main(void)
{
    extern int w, h;                    /* 外部变量的声明 */
    int l = 5;                          /* 定义内部变量 */
    printf("l=%d,w=%d,h=%d\n v=%d", l, w, h, vs(l, w));
    return 0;
}