#include <stdio.h>
int main(void)
{
    char s[] = "ucjamkc";
    int i;
    char c;
    for (i = 0; s[i] != '\0'; i++)
    {
        c = s[i] + 2;
        printf("%c", c);
    }
    printf("\n");
    return 0;
}