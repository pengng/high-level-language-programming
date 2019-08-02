/* 使用 puts() 函数和 printf() 函数输出字符串的例子 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[] = "China\nBeijing";
    char str2[20] = "China";
    puts(str1);
    puts(str2);
    printf("%s%s\n", str1, str2);
    return 0;
}