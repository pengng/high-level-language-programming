#include <stdio.h>
int main(void)
{
    int count = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            count++;
    }
    printf("%d\n", count);
    return 0;
}