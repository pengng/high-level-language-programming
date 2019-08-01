#include <stdio.h>
int main(void)
{
    int year, yes = 0;
    scanf("%d", &year);
    if (year % 400 == 0) yes = 1;
    else if (!(year % 4) && year % 100) yes = 1;
    else yes = 0;

    if (yes) printf("%d is ", year);
    else printf("%d is not ", year);
    printf("a leap year.\n");
    return 0;
}