/* 从键盘输入三个整数 x，y和z，将这三个整数从大到小排序并输出 */
#include <stdio.h>
int main(void)
{
    int x, y, z, tem;
    printf("Enter three integers:");
    scanf("%d%d%d", &x, &y, &z);                /* 从键盘输入3个整数 */
    if (x < y)                                  /* 首先比较 x 和 y 的值 */
    { tem = x; x = y; y = tem; }                /* 如果 x < y，则将 x 和 y 的值互换 */
    if (x < z)                                  /* 然后比较 x 和 z 的值 */
    { tem = x; x = z; z = tem; }                /* 如果 x < z，则将 x 和 z的值互换*/
    if (y < z)                                  /* 最后比较 y 和 z 的值 */
    { tem = y; y = z; z = tem; }                /* 如果 y < z，则将 y 和 z 的值互换 */
    printf("x=%d,y=%d,z=%d\n", x, y, z);         /* 输出排序后的结果 */
    return 0;
}