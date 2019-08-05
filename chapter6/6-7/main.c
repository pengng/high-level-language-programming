/* 编写一个函数，统计一串字符中字母的个数 */
#include <stdio.h>
#include <string.h>
int isalp(char c)                           /* 定义函数 isalp()，形参是字符型变量 c */
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    else return 0;
}

int main(void)                              /* 主函数 */
{
    int i, num = 0;
    char str[255];
    printf("Input a string: ");
    gets(str);                              /* 输入一个字符串保存在字符数组 str */
    for (i = 0; str[i] != '\0'; i++)
        if (isalp(str[i])) num++;           /* 调用函数 isalp()，实参是字符数组元素 str[i] */
    puts(str);                              /* 输出字符串 */
    printf("num=%d\n", num);                /* 输出字符串中字母的个数 */
    return 0;
}