/*  输入一个只由数字和字母组成的字符串，将其中的小写字母转换为对应的大写字母，
    将大写字母转换为对应的小写字母，然后输出转换后的字符串 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char str[80];
    int i = 0;
    printf("Enter a string: ");
    scanf("%s", str);                           /* 从键盘输入一字符串 */
    printf("The string of changing is: ");
    for (i = 0; i < strlen(str); i++)           /* 逐一判断字符串各个字符是否是字母 */
    {
        if (isalpha(str[i]))
        {
            if (isupper(str[i]))                /* 若是大写字母，则转换为对应的小写字母 */
                str[i] += 32;
            else
                str[i] -= 32;                   /* 若是小写字母，则转换为对应的大写字母 */
        }
        printf("%c", str[i]);
    }
    return 0;
}