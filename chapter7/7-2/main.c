/* 计算字符串的实际长度 */
#include <stdio.h>
int main(void)
{
    char s[256];                                        /* 定义字符型数组 */
    char *p;                                            /* 定义字符型指针变量 */
    scanf("%s", s);                                     /* 从键盘输入字符串保存至字符型数组 s */
    p = s;                                              /* 字符型指针变量 p 指向字符型数组 s 的第一个元素 */
    while (*p != '\0') p++;                             /* 字符型指针变量 p 逐一指向字符型数组 s 的各个元素，直至最后一个元素 */

    printf("The string length is %ld\n", p - s);        /* 计算并输出字符串的实际长度 */
    return 0;
}