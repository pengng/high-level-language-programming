/* 在一个字符数组中查找一个给定的字符，如果找到则输出从该字符开始的字符串，否则输出“NO FOUND THIS CHARACTER” */
#include <stdio.h>
#include <string.h>
extern char *match(char c, char *s);

int main(void)
{
    char s[80], *p, ch;
    gets(s);                /* 输入一字符串保存至字符数组 */
    ch = getchar();         /* 输入一字符保存至字符变量 ch */
    p = match(ch, s);       /* 调用函数 match()，若查找到给定字符，则返回其所在的地址；否则，返回NULL */
    if (p) printf("there is the string: %s\n", p);  /* 若在字符数组中查找到给定字符，则输出从给定字符开始的字符串 */
    else printf("NO FOUND THIS CHARACTER\n");       /* 否则，输出“NO FOUND THIS CHARACTER */
    return 0;
}