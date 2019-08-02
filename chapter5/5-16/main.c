/* 使用 gets() 函数和 scanf() 函数输入字符串的例子 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[3][80];
    gets(str[0]);
    scanf("%s%s", str[1], str[2]);
    printf("%s\n%s\n%s\n", str[0], str[1], str[2]);
    return 0;
}