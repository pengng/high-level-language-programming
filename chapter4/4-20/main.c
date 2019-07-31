/* 从键盘输入年和月，输出该月的天数 */
#include <stdio.h>
int main(void)
{
    int year, month, days;
    printf("input year, month = ?\n");
    scanf("%d,%d", &year, &month);          /* 从键盘输入年和月 */
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: days = 31; break;          /* 1、3、5、7、8、10和12月的天数均为 31 */
        case 4:
        case 6:
        case 9:
        case 11: days = 30; break;          /* 4、6、9和11月的天数均为 30 */
        case 2:
            if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
                days = 29;                  /* 若是闰年，则该年2月的天数为29 */
            else
                days = 28;                  /* 若不是闰年，则该年2月的天数为28 */
            break;
        default: printf("month is error\n");/* 其他情况，则提示月份错误 */
    }
    printf("year=%d,month=%d,days=%d\n", year, month, days);
    return 0;
}