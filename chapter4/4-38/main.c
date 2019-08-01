/* 从键盘输入一个大于 0 的长整型数保存至变量 a，将其偶数位（个位为第 1 位）上的数值取出并按照原来的顺序构成一个新的数保存至变量 b */
#include <stdio.h>
int main(void)
{
    long a = 0, b = 0;
    int pos = 1, tem = 0, pow = 1;
    printf("Enter a number: ");
    scanf("%ld", &a);                       /* 从键盘输入一个长整型数保存至变量 a */
    for (pos = 1; a > 0; pos++)             /* 从第一位开始循环，每循环一次 a 少一位，直到变为 0 */
    {
        if (pos % 2 == 0)                   /* 判断是否为偶数位 */
        {
            tem = a % 10;
            b = tem * pow + b;              /* 若是偶数位，则取出该位的数值，由偶数位组成新的数 b */
            pow = pow * 10;
        }
        a = a / 10;
    }
    printf("The value of changing is %ld\n", b);
    return 0;
}