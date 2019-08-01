/* 从键盘输入一串字符，以'\n'结束，将该字符串原样输出并统计其字符个数 */
#include <stdio.h>
int main(void)
{
    int i, j = 0;
    char str[80];
    for (i = 0; i < 80; i++)
    {
        str[i] = getchar();                 /* 依次给字符数组元素 str[i] 赋值 */
        if (str[i] == '\n') break;          /* 若输入'\n'则终止循环 */
        j++;                                /* 统计字符的个数 */
    }
    i = 0;
    while (str[i] != '\n')
        printf("%c", str[i++]);             /* 依次输出一维字符数组的各元素，直至遇到'\n'结束 */
    printf("%d\n", j);
    return 0;
}