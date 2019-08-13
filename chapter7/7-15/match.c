#include <stdio.h>
/* 编写函数，在一个字符数组中查找一个给定字符并返回其所在的地址 */
char *match(char c, char *s)        /* 函数名之前有“*”，表示该函数是指针型函数 */
{
    int count = 0;
    while (c != s[count] && s[count] != '\0') count++;
    if (c == s[count])
        return &s[count];           /* 若在字符数组元素中查找到给定字符，则返回其地址值 */
    return NULL;
}