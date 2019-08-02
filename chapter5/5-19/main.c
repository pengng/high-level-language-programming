/* 统计子串在字符串中出现的次数 */
#include <stdio.h>
int main(void)
{
    char str[80], substr[10];
    int i = 0, j = 0, num = 0;
    printf("Enter a string: ");
    gets(str);                              /* 从键盘输入一字符串 */
    printf("Enter the substring: ");
    gets(substr);                              /* 从键盘输入一子串 */
    for (i = 0; str[i] != '\0'; i++)        /* 外层循环 */
    {
        int k = 0;
        for (j = i; str[j] == substr[k] && str[j] != '\0'; k++, j++)    /* 内层循环，逐个比较字符串中的字符与子串中的字符 */
            if (substr[k + 1] == '\0')                                  /* 若比较位置到达了子串的末尾，则说明子串在字符串中出现了一次 */
            {
                num++;
                break;
            }
    }
    printf("The substring appears %d time%s.\n", num, num > 1 ? "s" : "");
    return 0;
}