/* 统计从键盘输入的字符串中小写字母的个数，n[0] 中存放小写字母 a 的个数，n[1] 中存放小写字母 b 的个数，依以类推。以“$“结束输入，并输出结果 */
#include <stdio.h>
int main(void)
{
    int n[26] = {0}, k;
    char c;
    while ((c = getchar()) != '$')
        if (c >= 'a' && c <= 'z')
            n[c - 'a'] += 1;
    
    for (k = 0; k < 26; k++)
        printf("%c:%d\n", k + 'a', n[k]);

    return 0;
}