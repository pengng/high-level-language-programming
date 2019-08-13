/* 输入两个长度均小于 40 的字符串 s1 和 s2，将两个字符串连接形成新的字符串 s3 并输出 */
#include <stdio.h>
#include <string.h>
void connect(char *a, char *b, char *c)     /* 定义函数 connect() */
{
    for (; *a != '\0'; )                    /* 将第一个字符串的内容放入第三个字符串中 */
    {
        *c = *a;
        c++;
        a++;
    }
    for (; *b != '\0'; )                    /* 将第二个字符串的内容放入第三个字符串中 */
    {
        *c = *b;
        c++;
        b++;
    }
    *c = '\0';                              /* 在第三个字符串末尾添加字符串结束符 */
}

int main(void)
{
    char s1[40], s2[40], s3[80];
    printf("Enter string s1: ");
    gets(s1);
    printf("Enter string s2: ");
    gets(s2);
    connect(s1, s2, s3);                    /* 调用函数 connect()，连接两个字符串形成新的字符串 */
    printf("The result of concatenating is %s", s3);
    return 0;
}