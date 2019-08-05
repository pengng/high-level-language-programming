/* 函数间值传递方式的例子 */
#include <stdio.h>
void change(int x, int y)                   /* 定义无返回值的有参函数 change() */
{
    int z;
    z = x; x = y; y = z;                    /* 交换形参 x 和 y 的值 */
    return;
}

int main(void)                              /* 主函数 */
{
    int a = 1, b = 2;
    change(a, b);                           /* 调用函数 change() */
    printf("%d%d\n", a, b);                 /* 输出调用函数 change() 后实参 a、b 的值 */
    return 0;
}