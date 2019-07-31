/* 从键盘输入平面上一个点的坐标值，判断其所在的象限 */
#include <stdio.h>
int main(void)
{
    float x, y;
    printf("Input the coordinate of a point\n");
    printf("x=");
    scanf("%f", &x);                                /* 从键盘输入平面上一个点的横坐标值保存至变量 x */
    printf("y=");
    scanf("%f", &y);                                /* 从键盘输入平面上一个点的纵坐标值保存至变量 y */
    if (x > 0)
        if (y > 0) printf("The point is in 1st quadrant.\n");   /* 若 x > 0 且 y > 0，则该点在第1象限 */
        else printf("The point is in 4th quadrant.\n");         /* 若 x > 0 且 y < 0，则该点在第4象限 */
    else
        if (y > 0) printf("The point is in 2nd quadrant.\n");   /* 若 x < 0 且 y > 0, 则该点在第2象限 */
        else printf("The point is in 3rd quadrant.\n");         /* 若 x < 0 且 y < 0, 则该点在第3象限 */
    return 0;
}