#include <stdio.h>
int main(void)
{
    int a, i, m;
    for (a = 1; a <= 1000; a++)
    {
        m = 0;
        for (i = 1; i <= a / 2; i++)
            if (!(a % i)) m += i;
        if (m == a) printf("%4d", a);
    }
    return 0;
}