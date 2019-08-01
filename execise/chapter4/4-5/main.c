#include <stdio.h>
int main(void)
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char ch;
    while ((ch = getchar()) != '\n')
    switch (ch)
    {
        case 'a':
        case 'A': a++; break;
        case 'e':
        case 'E': e++; break;
        case 'i':
        case 'I': i++; break;
        case 'o':
        case 'O': o++; break;
        case 'u':
        case 'U': u++; break;
    }
    printf("(a,A)=%d,(e,E)=%d,(i,I)=%d,(o,O)=%d,(u,U)=%d\n", a, e, i, o, u);
    return 0;
}