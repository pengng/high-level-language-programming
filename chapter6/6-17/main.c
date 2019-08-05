/* 常用的类型转换库函数的例子 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char float_num[10] = "123.456";
    char int_num[10] = "123";
    printf("The result of function atof is %f\n", atof(float_num));
    printf("The result of function atoi is %d\n", atoi(int_num));

    return 0;
}