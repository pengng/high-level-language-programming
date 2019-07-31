/* getchar() 函数的调用格式和使用的例子 */
#include <stdio.h>
int main(void)
{
    char ch1, ch2;
    int a;
    ch1 = getchar();                    /* 从键盘输入一个字符并赋予字符型变量 ch1 */
    ch2 = getchar();                    /* 从键盘输入一个字符并赋予字符型变量 ch2 */
    printf("%c,%d\n", ch1 + 32, ch2);
    putchar(getchar());                 /* 从键盘输入一个字符作为 putchar() 函数的参数 */
    putchar(',');
    a = getchar();                      /* 从键盘输入一个字符赋予整型变量 a */
    printf("%d\n", a);                  /* 输出整型变量 a 的值 */
    return 0;
}