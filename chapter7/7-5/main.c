/* 指针变量定义和相关运算的例子 */
#include <stdio.h>
int main(void)
{
    int num_int = 12, *p_int;           /* 定义一个指向 int 型数据的指针变量 p_int */
    float num_f = 3.14, *p_f;           /* 定义一个指向 float 型数据的指针变量 p_f */
    char num_ch = 'p', *p_ch;           /* 定义一个指向 char 型数据的指针变量 p_ch */
    p_int = &num_int;                   /* 取变量 num_int 的地址赋予指针变量 p_int */
    p_f = &num_f;                       /* 取变量 num_f 的地址赋予指针变量 p_f */
    p_ch = &num_ch;                     /* 取变量 num_ch 的地址赋予指针变量 p_ch */
    printf("num_int=%d,*p_int=%d\n", num_int, *p_int);      /* 输出变量 num_int 的值 */
    printf("num_f=%4.2f,*p_f=%4.2f\n", num_f, *p_f);        /* 输出变量 num_f 的值 */
    printf("num_ch=%c,*p_ch=%c\n", num_ch, *p_ch);          /* 输出变量 num_ch 的值 */
    return 0;
}