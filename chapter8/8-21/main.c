/* 定义结构体类型 employee 存储员工的工号、姓名和销售额。输入五名员工的信息并存储到结构体类型数组 emp，找出销售额最多的员工并输出该员工的姓名、工号，最后输出所有员工的总销售额 */
#include <stdio.h>
struct employee         /* 定义结构体类型 employee */
{
    char no[5];
    char name[20];
    int sales;
};

int main(void)
{
    struct employee emp[5];     /* 定义结构体类型数组 emp */
    int i = 0, sum = 0, max = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Please input the ID of employee %d: ", i + 1);
        scanf("%s", emp[i].no);     /* 输入员工的工号 */
        getchar();
        printf("Please input the name of employee %d: ", i + 1);
        gets(emp[i].name);          /* 输入员工的姓名 */
        printf("Please input the sales of employee %d: ", i + 1);
        scanf("%d", &emp[i].sales); /* 输入员工的销售额 */
        getchar();
        if (emp[i].sales > emp[max].sales) max = i;     /* 若员工 emp[i] 的销售额大于当前的最大销售额，则将其对应的数组元素下标值保存至 max */
        sum = sum + emp[i].sales;   /* 计算所有员工的销售额总和 */
    }
    printf("The employee with largest sales is %s, %s\n", emp[max].no, emp[max].name);
    printf("The total sales of 5 employee is %d\n", sum);
    return 0;
}