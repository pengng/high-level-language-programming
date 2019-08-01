#include <stdio.h>
int main(void)
{
    char m;
    float r, c, a, pi = 3.14159;
    printf("input mark a,c or b and r: ");
    scanf("%c %f", &m, &r);
    if (m == 'a') { a = pi * r * r; printf("area is %f", a);}
    if (m == 'c') { c = 2 * pi * r; printf("circle is %f", c);}
    if (m == 'b') { a = pi * r * r; c = 2 * pi * r; printf("area and circle are %f%f", a, c);}
    return 0;
}