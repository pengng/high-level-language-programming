/* 判断某些字符型变量中存放的是否为大写字母或数字字符 */
#include <stdio.h>
int main(void)
{
    int x1, x2, x3, x4; /* 数据定义语句 */
    char c1 = 'a', c2 = 'B', c3 = '1', c4 = '!'; /* 数据定义语句 */
    x1 = c1 >= 'A' && c1 <= 'Z'; /* 表达式运算结果是 0 保存到变量 x1 */
    x2 = c2 >= 'A' && c2 <= 'Z'; /* 表达式运算结果是 1 保存到变量 x2 */
    x3 = c3 >= '0' && c3 <= '9'; /* 表达式运算结果是 1 保存到变量 x3 */
    x4 = c4 >= '0' && c4 <= '9'; /* 表达式运算结果是 0 保存到变量 x4 */

    printf("x1 = %d, x2 = %d, x3 = %d, x4 = %d\n", x1, x2, x3, x4);
    return 0;
}