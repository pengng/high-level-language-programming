/* 格式字符 d 的使用例子 */
#include <stdio.h>
int main(void)
{
    int num1 = 123;
    long num2 = 123456;
    printf("num1=%d,num1=%5d,num1=%-5d,num1=%2d\n", num1, num1, num1, num1);        /* 以四种不同格式，输出 int 型数据 num1 的值 */
    printf("num2=%ld,num2=%8ld,num2=%5ld\n", num2, num2, num2);                     /* 以三种不同格式，输出 long 型数据 num2 的值 */
    printf("num1=%ld\n", num1);
    return 0;
}