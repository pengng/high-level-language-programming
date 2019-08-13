/* 结构体类型数组元素成员的引用例子 */
#include <stdio.h>
struct s
{
    int num;
    char color;
    char type;
} car[] = {
    {101, 'G', 'c'},
    {210, 'Y', 'm'},
    {105, 'R', 'l'},
    {222, 'B', 's'},
    {308, 'P', 'b'}
};                              /* 定义结构体类型数组 car，同时进行初始化 */

int main(int argc, char const *argv[])
{
    int i;
    printf("number color type\n");
    for (int i = 0; i < 5; ++i)
        printf("%-9d%-6c%c\n", car[i].num, car[i].color, car[i].type);     /* 依次输出结构体类型数组的每个元素 car[i] 的各个成员值 */

    return 0;
}