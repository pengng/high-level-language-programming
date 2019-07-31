/* 从键盘输入一个年份 year (4位十进制整数)，判断其是否是闰年 */
#include <stdio.h>
int main(void)
{
    int year, leap = 0;                                 /* leap 初始值为 0,即预置为非闰年 */
    printf("Please input the year:");
    scanf("%d", &year);                                 /* 从键盘输入年份保存至变量 year */
    if (year % 4 == 0)
    {
        if (year % 100 != 0) leap = 1;                  /* 若 year 能被 4 整除但不能被 100 整除，则是闰年，leap 赋值为 1 */
    }
    else
    {
        if (year % 400 == 0) leap = 1;                  /* 否则，若 year 能被 400 整除，则是闰年，leap 赋值为 1 */
    }

    if (leap) printf("%d is a leap year.\n", year);     /* 若 leap 的值为 1，即是闰年，则输出“是闰年” */
    else printf("%d is not a leap year.\n", year);      /* 否则，输出“不是闰年” */

    return 0;
}