/* 指针变量指向字符数组的例子 */
#include <stdio.h>
int main(void)
{
    int i = 0;
    char str[80], *p = str;         /* 定义指针变量 p 并初始化，使其指向字符数组 str 的首地址 */
    scanf("%s", str);
    printf("%s%s%s\n", str, p, "zifuchuan");
    printf("Part of the string:");
    printf("%s%s%s\n", str + 1, p + 1, "zifuchuan" + 1);
    while (*(p + i) != '\0')        /* *(p + i) 即是数组元素 str[i] */
    {
        printf("%c", *(p + i));
        i++;
    }
    return 0;
}