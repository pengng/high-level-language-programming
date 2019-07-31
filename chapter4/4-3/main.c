#include <stdio.h>
int main(void)
{
    int a = 10;
    printf("a = %d\n", a);
    {                   /* 复合语句 */
        int b = 20;     /* 复合语句中的数据定义语句放在其他语句的前面 */
        printf("b = %d\n", b);
    }
    return 0;
}