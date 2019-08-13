/* 结构体类型变量的输入、赋值和输出的例子 */
#include <stdio.h>
#include <string.h>

struct std_info
{
    int no;
    char name[10];
    char sex;
    int score[3];
};

int main(int argc, char const *argv[])
{
    struct std_info s1, s2;                 /* 定义结构体类型的变量 s1､ s2 */
    s1.no = 1;                              /* 对结构体类型变量 s1 的成员 no 赋值 */
    strcpy(s1.name, "LiWei");               /* 调用库函数 strcpy() 对结构体类型变量 s1 的成员 name 进行字符串复制 */

    s1.sex = 'F';                           /* 对结构体类型变量 s1 的成员 sex 赋值 */
    s1.score[0] = 82;                       /* 对结构体类型变量 s1 的成员数组元素 score[0] 赋值 */
    s1.score[1] = 70;                       /* 对结构体类型变量 s1 的成员数组元素 score[1] 赋值 */
    s1.score[2] = 92;                       /* 对结构体类型变量 s1 的成员数组元素 score[2] 赋值 */
    printf("no=%d,name=%s,sex=%c,score[0]=%d,score[1]=%d,score[2]=%d\n", s1.no, s1.name, s1.sex, s1.score[0], s1.score[1], s1.score[2]);
    scanf("%d %s %c %d %d %d", &s2.no, s2.name, &s2.sex, &s2.score[0], &s2.score[1], &s2.score[2]);
    s1 = s2;                                /* 相同类型的结构体类型变量之间直接赋值 */
    printf("no=%d,name=%s,sex=%c,score[0]=%d,score[1]=%d,score[2]=%d\n", s1.no, s1.name, s1.sex, s1.score[0], s1.score[1], s1.score[2]);
    return 0;
}