/* 结构体类型数组元素成员地址的引用例子 */
#include <stdio.h>
#define NAMESIZE 20
struct std_info
{
    char name[NAMESIZE];
    int age;
    char sex;
} s[10];                        /* 定义结构体类型数组 s */

int main(int argc, char const *argv[])
{
    int i;
    printf("Please input student data\n");
    i = 0;                                      /* 从键盘输入四个学生的信息分别存入结构体类型数组 s */
    while (i < 4)
    {
        printf("name:   age:    sex:");
        scanf("%s", s[i].name);
        scanf("%d", &s[i].age);
        getchar();
        scanf("%c", &s[i].sex);
        i = i + 1;
    }
    return 0;
}