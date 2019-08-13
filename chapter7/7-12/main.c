/* 从键盘输入两个整数，按从大到小的顺序输出 */
#include <stdio.h>
void swap1(int x, int y)            /* 定义函数 swap1()，普通变量作为函数形参 */
{
    int temp;
    temp = x; x = y; y = temp;
}

void swap2(int *px, int *py)        /* 定义函数 swap2()，指针变量作为函数形参 */
{
    int temp;
    temp = *px; *px = *py; *py = temp;  /* 交换的是指针变量所指向变量的值 */
}

void swap3(int *px, int *py)        /* 定义函数 swap3()，指针变量作为函数形参 */
{
    int *temp;
    temp = px; px = py; py = temp;  /* 交换的是指针变量的值 */
}

int main(void)
{
    int a = 9, b = 12;
    int *p1 = &a, *p2 = &b;
    if (a < b) swap1(a, b);          /* 调用函数 swap1()，普通变量作为函数实参 */
    printf("%d,%d\n", a, b);
    a = 9; b = 12;
    if (a < b) swap2(p1, p2);       /* 调用函数 swap2()，指针变量作为函数实参 */
    printf("%d,%d\n", a, b);
    a = 9; b = 12;
    if (a < b) swap3(&a, &b);       /* 调用函数 swap3()，变量的地址作为函数实参 */
    printf("%d,%d\n", a, b);
    return 0;
}