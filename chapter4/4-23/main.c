/* 企业根据利润发放提成奖金 */
#include <stdio.h>
int main(void)
{
    long profit;
    int bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
    printf("Enter the profit: ");
    scanf("%ld", &profit);                                                      /* 从键盘输入利润值 */
    bonus1 = 100000 * 0.1;                                                      /* 利润高于 10 万时，低于 10 万部分的提成奖金 */
    bonus2 = bonus1 + 100000 * 0.075;                                           /* 利润高于 20 万时，低于 20 万部分的提成奖金 */
    bonus4 = bonus2 + 200000 * 0.05;                                            /* 利润高于 40 万时，低于 40 万部分的提成奖金 */
    bonus6 = bonus4 + 200000 * 0.03;                                            /* 利润高于 60 万时，低于 60 万部分的提成奖金 */
    bonus10 = bonus6 + 400000 * 0.015;                                          /* 利润高于 100 万时，低于 100 万部分的提成奖金 */
    if (profit <= 100000) bonus = profit * 0.1;                                 /* 利润低于 10 万时的提成奖金 */
    else if (profit <= 200000) bonus = bonus1 + (profit - 100000) * 0.075;      /* 利润高于 10 万且低于 20 万时的提成奖金 */
    else if (profit <= 400000) bonus = bonus2 + (profit - 200000) * 0.05;       /* 利润高于 20 万且低于 40 万时的提成奖金 */
    else if (profit <= 600000) bonus = bonus4 + (profit - 400000) * 0.03;       /* 利润高于 40 万且低于 60 万时的提成奖金 */
    else if (profit <= 1000000) bonus = bonus6 + (profit - 600000) * 0.015;     /* 利润高于 60 万且低于 100 万时的提成奖金 */
    else bonus = bonus10 + (profit - 1000000) * 0.01;                           /* 利润高于 100 万时的提成奖金 */

    printf("bonus=%d\n", bonus);
    return 0;
}