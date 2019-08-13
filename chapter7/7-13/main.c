/* 编写一个函数实现字符串的复制 */
#include <stdio.h>
/* 定义函数 string_copy() 实现字符串的复制，函数无返回值，2个形参，字符指针变量 str_from 用于接收源串，
    字符指针变量 str_to 用于存储目标串 */
void string_copy(char *str_from, char *str_to)
{
    int i = 0;
    for (; (*(str_to + i) = *(str_from + i)) != '\0'; i++);     /* for 语句的循环体为空语句 */
}

int main(void)
{
    char array_str1[20] = "China", array_str2[20];
    string_copy(array_str1, array_str2);                        /* 调用函数 string_copy()，数组名作为函数实参 */
    printf("array_str2=%s\n", array_str2);
    return 0;
}