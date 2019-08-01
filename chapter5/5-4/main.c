/* 一维数组元素引用的例子 */
#include <stdio.h>
int main(void)
{
    int i, a[10];                                   /* 定义一维数组 */
    for (i = 0; i <= 9; i++) a[i] = i;              /* 依次为一维数组元素 a[i] 赋值 */
    for (i = 9; i >= 0; i--) printf("%d", a[i]);    /* 依次输出一维数组元素 a[i] 的值 */
    return 0;
}