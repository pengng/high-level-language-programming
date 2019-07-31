/* 格式字符 s 的使用例子 */
#include <stdio.h>
int main(void)
{
    printf("%s,%5s,%-10s", "Internet", "Internet", "Internet");             /* 以三种不同格式，输出字符串 */
    printf("%10.5s,%-10.5s,%4.5s\n", "Internet", "Internet", "Internet");   /* 以三种不同格式，输出字符串 */

    return 0;
}