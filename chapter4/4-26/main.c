/* 计算 1+2+...+100之和 */
#include <stdio.h>
int main(void)
{
    int n = 1, sum = 0;
    loop: sum += n; n++;
    if (n <= 100) goto loop;    /* if 语句和 goto 语句构成循环结构 */
    printf("sum=%d\n", sum);
    return 0;
}