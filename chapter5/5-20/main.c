/* 输入两个不同的字符串，将较大的字符串连接到较小的字符串的尾端，输出连接后的字符串 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[80], str2[80];                /* 定义两个一维字符数组分别保存两个字符串 */
    int res = 0;
    printf("Enter the first string: ");
    gets(str1);                             /* 从键盘输入第一个字符串 */
    printf("Enter the second string: ");
    gets(str2);                             /* 从键盘输入第二个字符串 */
    res = strcmp(str1, str2);               /* 调用 strcmp() 函数比较两个字符串 */
    if (res > 0)                            /* 若第一个字符串大于第二个，则将第一个字符串连接到第二个字符串后面 */
    {
        strcat(str2, str1);
        printf("The string of changing is: %s\n", str2);
    }
    else                                    /* 否则，将第二个字符串连接到第一个字符串后面 */
    {
        strcat(str1, str2);
        printf("The string of changing is: %s\n", str1);
    }
    return 0;
}