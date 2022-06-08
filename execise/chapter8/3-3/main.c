#include <stdio.h>
struct node
{
    int n;
    char s[20];
};

void fun(struct node *p)
{
    int i, j, tem;
    for (i = 0; i < p->n - 1; i++)
        for (j = i + 1; j < p->n; ++j)
            if (p->s[i] < p->s[j])
            {
                tem = p->s[i];
                p->s[i] = p->s[j];
                p->s[j] = tem;
            }
}

int main(void)
{
    int i;
    struct node sn = {7, "welcome"};
    fun(&sn);
    for (int i = 0; i < sn.n; ++i)
        printf("%c", sn.s[i]);
    printf("\n");
    return 0;
}