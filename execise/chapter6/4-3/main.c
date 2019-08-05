/* 在给定的数组中查找值为 x 的元素，若查找成功，则输出值为 x 的数组元素的下标；否则输出 -1 */
#include <stdio.h>
int search(int a[], int x)
{
    int i;
    for (i = 0; i < 10; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int a[10], i, x, loc;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    loc = search(a, x);
    printf("%d\n", loc);
    return 0;
}