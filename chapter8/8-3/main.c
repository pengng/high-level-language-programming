#include <stdio.h>
#define NAMESPACE 20
struct date                     /* 定义结构体类型 date */
{
    int year, month, day;
};

struct person                   /* 定义结构体类型 person */
{
    char name[NAMESPACE];
    struct date birthday;
    long zipcode;
};

int main(void)
{
    struct person p;            /* 定义结构体类型的变量 p */
    printf("the p length: %lu\n", sizeof(p));    /* 输出结构体类型的变量p占用的内存字节数 */
    printf("the struct person length: %lu\n", sizeof(struct person)); /* 输出名为 person 的结构体类型占用的内存字节数 */

    return 0;
}