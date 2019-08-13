/* 输入三个国家的名称，按字母顺序排序后输出 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s[] = {"China", "America", "Russia"}, *p;     /* 定义指针数组 s 和指针变量 p */
    int i, j, k = 3;
    for (i = 0; i < k - 1; i++)
        for (j = 0; j < k - 1 - i; j++)
            if (strcmp(s[j], s[j + 1]) > 0)
            {
                p = s[j];
                s[j] = s[j + 1];
                s[j + 1] = p;
            }
    for (i = 0; i < k; i++)
        printf("%s\n", s[i]);
    return 0;
}