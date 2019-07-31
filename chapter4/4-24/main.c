/* 从键盘输入一个小于 1000 的自然数，判断其是否是自守数 */
#include <stdio.h>
int main(void)
{
    int num = 0, div = 0;
    printf("Enter a number: ");
    scanf("%d", &num);                      /* 从键盘输入一个小于 1000 的自然数保存至变量 num */
    if (num < 10) div = 10;                 /* 若输入的数小于 10, 则除数为 10 */
    else if (num < 100) div = 100;          /* 若输入的数大于 10 且小于 100，则除数为 100 */
    else div = 1000;                        /* 若输入的数大于 100 且小于 1000，则除数为 1000 */

    if (num * num % div == num)
        printf("%d is an automorphic number.\n", num);  /* 若输入数的平方的尾数等于该数，则为自守数 */
    else
        printf("%d is not an automorphic number.\n", num); /* 否则不是自守数 */
    return 0;
}