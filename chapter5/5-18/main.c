/* 输入一个仅由数字和英文字母组成的字符串，依次取出字符串中所有英文字母形成新的字符串，并取代原字符串 */
#include <stdio.h>
int main(void)
{
    char str[80];
    int i = 0, j = 0;
    printf("Enter a string: ");
    scanf("%s", str);                                   /* 从键盘输入一字符串 */
    for (i = 0; str[i] != '\0'; i++)                    /* 逐一判断字符串中的字符是英文字母还是数字 */
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            str[j++] = str[i];                          /* 若字符串中的字符是英文字母，则将其移动到字符串的前部 */
    str[j] = '\0';                                      /* 在字符串末尾加上结束标志符'\0' */
    printf("The string of changing is: %s\n", str);     /* 输出新的字符串 */
    return 0;
}