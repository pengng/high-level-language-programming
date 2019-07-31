/* 使用格式输出函数 printf() 的例子 */
#include <stdio.h>
int main(void)
{
    char c = 'a';
    char str[] = "see you";
    int i = 1234;
    float x = 123.456789;
    float y = 1.2;
    printf("1:%c,%s,%d,%f,%e,%f\n", c, str, i, x, x, y);
    printf("2:%4c,%10s,%6d,%12f,%15e,%10f\n", c, str, i, x, x, y);
    printf("3:%-4c,%-10s,%-6d,%-12f,%-15e,%-10f\n", c, str, i, x, x, y);
    printf("4:%0c,%6s,%3d,%9f,%10e,%2f\n", c, str, i, x, x, y);
    printf("5:%12.2f\n", x);
    printf("6:%.2f\n", x);
    printf("7:%10.4f\n", y);
    printf("8:%8.3s,%8.0s\n", str, str);
    printf("9:%%d\n", i);
    return 0;
}