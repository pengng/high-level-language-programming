/* 将键盘输入的只包含十进制数字的字符串转换为等价的十进制数 */
#include <stdio.h>
#include <string.h>
long stod(char s[])
{
    int i;
    long dec;
    dec = 0;
    for (i = 0; i < strlen(s); i++)
        dec = dec * 10 + (s[i] - '0');
    return dec;
}

int main(void)
{
    char str[10];
    int num;
    gets(str);
    num = stod(str);
    printf("%d\n", num);
    return 0;
}