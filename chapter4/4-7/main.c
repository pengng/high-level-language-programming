/* 格式字符 f 的使用例子 */
#include <stdio.h>
int main(void)
{
    float f = 123.456;
    double d1, d2;
    d1 = 11111111111111.11111111;
    d2 = 22222222222222.22222222;
    printf("%f,%12f,%12.2f,%-12.2f,%.2f\n", f, f, f, f, f);
    printf("d1+d2=%f\n", d1 + d2);
    return 0;
}