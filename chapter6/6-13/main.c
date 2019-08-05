#include <stdio.h>
#define K 4
#define N 5
long f1(int n, int k)                               /* 定义函数 f1()，计算 n 的 k 次幂 */
{
    long power = n;
    int i;
    for (i = 1; i < k; i++) power *= n;
    return power;
}

long f2(int n, int k)                               /* 定义函数 f2()，计算 1 到 n 的 k 次幂的累加和 */
{
    long sum = 0;
    int i;
    for (i = 1; i <= n; i++) sum += f1(i, k);       /* 调用函数 f1() */
    return sum;
}

int main(void)                                      /* 主函数 */
{
    printf("Sum of %d powers of integers from 1 to %d = ", K, N);
    printf("%ld\n", f2(N, K));                       /* 调用函数 f2() */
    return 0;
}