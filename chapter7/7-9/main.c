/* 使用指向字符串的指针变量处理字符串中单个字符的例子 */
#include <stdio.h>
int main(void)
{
    char *string = "I love China. ";
    for (; *string != '\0'; string++) printf("%c", *string);    /* 利用 for 循环和指向字符串的指针变量 string 逐一输出字符串各字符 */

    printf("\n");
    return 0;
}