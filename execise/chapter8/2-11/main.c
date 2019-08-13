#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    long sno;
    float score;
};

int main(void)
{
    struct student s1 = {"zhangsan", 2010, 85}, s2 = {"lisi", 2014, 90};
    struct student s3 = {"wangwu", 2016, 95}, s4, *p = &s4;
    s4 = s1;
    if (strcmp(s1.name, s2.name) > 0) s4 = s2;
    if (strcmp(s3.name, s4.name) > 0) s4 = s3;
    printf("%ld%s\n", s4.sno, p->name);
    return 0;
}