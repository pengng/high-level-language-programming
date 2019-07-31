/* 从键盘输入小写字母转换成大写字母并输出 */
#include <stdio.h>
int main(void)
{
    char c1, c2;
    printf("Input a lowercase letter: ");
    c1 = getchar();                             /* 从键盘输入一个字符 */
    putchar(c1);
    printf(",%d\n", c1);
    c2 = c1 - 32;                               /* 将小写字母转换成对应的大写字母 */
    printf("%c,%d\n", c2, c2);
    return 0;
}