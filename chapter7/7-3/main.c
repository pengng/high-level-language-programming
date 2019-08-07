/* 从键盘输入 x、y 两个整数，按先大后小的顺序输出 */
#include <stdio.h>
int main(void)
{
    int x, y, *px, *py, *p;                 /* 定义两个整型变量 x 和 y，三个整型指针变量 px、py 和 p */
    scanf("%d%d", &x, &y);                  /* 从键盘输入整型变量 x 和 y 的值 */
    px = &x;                                /* 整型指针变量 px 指向整型变量 x */
    py = &y;                                /* 整型指针变量 py 指向整型变量 y */
    if (x < y)                              /* 若整型变量 x 的值小于整型变量 y 的值，则使整型指针变量 px 指向整型变量 y，同时整型指针变量 py 指向整型变量 x */
    {
        p = px;
        px = py;
        py = p;
    }
    printf("x=%d,y=%d\n", x, y);
    printf("MAX=%d,MIN=%d\n", *px, *py);    /* 按照先大后小的顺序输出排序结果 */
    return 0;
}