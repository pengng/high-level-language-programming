#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch, filename[20];
    FILE *fp;                                   /* 定义文件型指针 */

    if ((fp = fopen("a.txt", "w")) == NULL)     /* 以只写方式打开文本文件，其中的\\是转义字符 */
    {
        printf("cannot open this file\n");
        exit(1);
    }

    while ((ch = getchar()) != '#')             /* 从键盘逐个输入字符，当输入 '#' 则结束 */
    {
        fputc(ch, fp);                          /* 将ch中的字符写入fp所指向的文本文件 */
        putchar(ch);                            /* 将ch中的字符输出到显示器 */
    }

    fclose(fp);                                 /* 关闭fp所指向的文件 */
    return 0;
}