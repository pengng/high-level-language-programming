#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s1, *s2, s[50] = "That is an apple";
    s1 = "first";
    s2 = "second";
    strcpy(s + 4, s2 + 2);
    strcpy(s + 6, s1 + 1);
    puts(s);
    return 0;
}