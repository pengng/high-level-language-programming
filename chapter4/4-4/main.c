/* putchar() 函数的调用格式和使用的例子 */
#include <stdio.h>                              /* 编译预处理命令，即文件包含命令 */
int main(void)
{
    char ch1 = 'N', ch2 = 'E', ch3 = 'W';
    putchar(ch1); putchar(ch2); putchar(ch3);   /* 输出变量 ch1、ch2 和 ch3 中的字符 */
    putchar('\n');
    putchar(ch1); putchar('\n');                /* 输出变量 ch1 中的字符，并换行 */
    putchar('E'); putchar('\n');                /* 输出字符 'E', 并换行 */
    putchar(ch3); putchar('\n');                /* 输出变量 ch3 中的字符，并换行 */
    return 0;
}