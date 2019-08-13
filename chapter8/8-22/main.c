/* 定义商品的结构体类型 product 存储商品的名称和价格，输入多种商品的信息并存储到结构体类型数组 prod，按照商品价格从高到低对全部商品进行排序并输出结果 */
#include <stdio.h>
#include <string.h>
struct product          /* 定义结构体类型 product */
{
    char name[20];
    double price;   
};

int main(void)
{
    struct product prod[100], *p;   /* 定义结构体类型数组 prod 和结构体指针变量 p */
    int num = 0, i = 0, j = 0;
    char name_tem[20];
    double price_tem;
    printf("How many products do you want to input: ");
    scanf("%d", &num);              /* 从键盘输入商品的个数 */
    p = prod;                       /* 指针变量 p 指向结构体类型数组 prod 的首地址 */
    for (i = 0; i < num; ++i)       /* 依次从键盘输入各商品的信息保存至结构体类型数组 prod */
    {
        getchar();
        printf("Please input the name of product %d: ", i + 1);
        gets((p + i)->name);
        printf("Please input the price of product %d: ", i + 1);
        scanf("%lf", &(p + i)->price);
    }

    for (i = 0; i < num; ++i)       /* 按照商品价格，利用冒泡排序法对结构体类型数组元素进行排序 */
    {
        for (j = 0; j < num - i - 1; ++j)
        {
            if ((p + j)->price < (p + j + 1)->price)
            {
                strcpy(name_tem, (p + j)->name);
                price_tem = (p + j)->price;
                strcpy((p + j)->name, (p + j + 1)->name);
                (p + j)->price = (p + j + 1)->price;
                strcpy((p + j + 1)->name, name_tem);
                (p + j + 1)->price = price_tem;
            }
        }
    }

    for (int i = 0; i < num; ++i)   /* 输出排序后的结果 */
        printf("Name: %s,   Price: %f\n", (p + i)->name, (p + i)->price);

    return 0;
}