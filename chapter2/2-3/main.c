/* 从键盘输入一个正整数（位数小于或等于10），判断其是否是回文数 */
#include <stdio.h>
#include <math.h>

int getLength(long int num) /* 定义函数 getLength，计算正整数 num 的位数 */
{
    int found, length;
    found = 0;
    length = 10; /* 设定正整数 num 的位数小于或等于 10 */
    if (num == 0) return 1;
    while (found == 0)
    {
        if (num / (int)pow(10, length - 1) > 0)
            found = 1; /* 库函数 pow(10, length - 1) 的功能是计算 10 的 (length - 1) 次幂 */
        else
            length -= 1;
    }
    return length; /* 返回正整数 num 的位数 */
}

int isHuiWenShu(long int num) /* 定义函数 isHuiWenShu，判断正整数 num 是否是回文数 */
{
    long int n; /* 定义变量 n, 保存从键盘输入的正整数 */
    int left; /* 定义变量 left，保存正整数最左边的数字 */
    int right; /* 定义变量 right，保存正整数最右边的数字 */
    int i; /* 定义变量 i, 保存正整数的位数 */
    int flag; /* 定义变量 flag，保存是否回文数的标志。若不是回文数，则flag = 1；否则 flag = 0 */
    i = getLength(num); /* 调用函数 getLength，将正整数 num 的位数赋予变量 i */
    n = num;
    flag = 0;
    while (i > 1 && flag == 0)
    {
        left = n / (int)pow(10, i - 1); /* 将正整数 n 当前最左边的数字赋予变量 left */
        right = n % 10; /* 将正整数 n 当前最右边的数字赋予变量 right */
        n = n % (int)pow(10, i - 1) / 10;
        i -= 2;
        if (left != right) flag = 1; /* 若正整数 n 当前最左边和最右边的数字不相等，则不是回文数，即标志变量 flag 赋值 1 */
    }
    if (flag == 0) return 1; /* 若是回文数，则返回 1 */
    else return 0; /* 若不是回文数，则返回 0 */
}

int main(void)
{
    long int num;
    scanf("%ld", &num); /* 从键盘输入一个正整数保存到变量 num */
    if (isHuiWenShu(num))
        printf("%ld is a 回文数\n", num); /* 若是回文数，则屏幕上显示“是回文数” */
    else
        printf("%ld is not a 回文数\n", num); /* 否则，屏幕上显示“不是回文数” */
    return 0;
}