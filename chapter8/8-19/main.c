/* 利用值传递方式传递结构体类型数据的例子 */
#include <stdio.h>
struct data             /* 定义包含三个成员的结构体类型 */
{
    int a, b, c;
};

void func(struct data parm)     /* 定义无返回值的函数 func()，形参是结构体类型变量 */
{
    printf("parm.a=%d parm.b=%d parm.c=%d\n", parm.a, parm.b, parm.c);
    printf("PROCESS...\n");
    parm.a = 18;
    parm.b = 5;
    parm.c = parm.a + parm.b;
    printf("parm.a=%d parm.b=%d parm.c=%d\n", parm.a, parm.b, parm.c);
    printf("RETURN... \n");
}

int main(void)                  /* 主函数 */
{
    struct data arg;            /* 定义结构体类型变量 arg */
    arg.a = 27;                 /* 对结构体类型变量 arg 的成员进行赋值和运算 */
    arg.b = 3;
    arg.c = arg.a + arg.b;
    printf("arg.a=%d arg.b=%d arg.c=%d\n", arg.a, arg.b, arg.c);
    printf("CALL FUNC()... \n");
    func(arg);                  /* 调用函数 func()，实参是同一结构体类型的变量 */
    printf("arg.a=%d arg.b=%d arg.c=%d\n", arg.a, arg.b, arg.c);
    return 0;
}