#include <stdio.h>
struct node
{
    int num;
    struct node *next;
} *p, x[3] = {1, x + 1, 2, x + 2, 3, NULL};

int main(void)
{
    p = x;
    printf("%d,%d", p->num, p->next->num);
    return 0;
}