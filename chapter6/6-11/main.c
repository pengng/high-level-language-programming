/* 编写一个无返回值的函数，对存放在实型数组的前五个实数计算平均值 */
#include <stdio.h>
float x;                            /* 定义全局变量 x，用于传递数据 */
void fun(float b[]);                /* 被调函数 fun() 位于主调函数之后，因此需要进行函数声明 */
int main(void)                      /* 主函数 */
{
    int i;
    float a[20];
    x = 0;
    for (i = 0; i < 5; i++)
        scanf("%f", &a[i]);         /* 依次从键盘输入五个实型数组元素的值 */
    fun(a);                         /* 调用函数 fun() 计算平均值，实参是实型数组 a */
    printf("aver=%f", x);
    return 0;
}

void fun(float b[])                 /* 定义函数 fun()，形参是实型数组 b */
{
    int i;
    for (i = 0; i < 5; i++)
        x += b[i];
    x = x / 5;
}