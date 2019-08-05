/* 利用数组模拟堆栈的 push 和 pop 操作 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void push(int);                         /* 函数声明 */
int pop();
int total, top, item;
int stack[SIZE];

int main(void)                          /* 主函数 */
{
    int num, i;
    printf("How many numbers do you want to push: ");
    scanf("%d", &total);
    top = 0;
    printf("\nPush data to stack-->\n");
    
    for (i = 0; i < total; i++)
    {
        printf("node.%d:", i);
        scanf("%d", &num);
        push(num);                      /* 调用函数 push() */
    }

    total = top;
    printf("Pop data from stack-->\n");

    for (i = 0; i < total; i++)
    {
        if (total > 0)
            printf("%d\n", pop());      /* 调用函数 pop() */
    }

    return 0;
}

void push(int item)                     /* 定义函数 push() */
{
    if (top >= SIZE)
    {
        printf("\nStack Overflow!");
        exit(1);
    }
    top = top + 1;
    stack[top] = item;
}

int pop()                               /* 定义函数 pop() */
{
    item = stack[top];
    top = top - 1;
    return item;
}