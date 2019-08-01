#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    if (!(num % 11 || num % 13))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}