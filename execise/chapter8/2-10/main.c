#include <stdio.h>
struct keyword
{
    char key[20];
    int id;
} k[] = {"void", 1, "char", 2, "int", 3, "float", 4, "double", 5};

int main(void)
{
    printf("%c,%d\n", k[3].key[0], k[3].id);
    return 0;
}