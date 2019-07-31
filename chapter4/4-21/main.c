/* 根据考试成绩的等级打印百分制分数段，转换规则如下： */
#include <stdio.h>
int main(void)
{
    char grade1, grade2;
    printf("input the grade:");
    scanf("%c%c", &grade1, &grade2);                        /* 从键盘输入两个字符 */
    switch (grade1)
    {
        case 'A':
            switch (grade2)                                 /* 若第一个字符是 A，继续对第二个字符进行判断 */
            {
                case '+': printf("score=100\n"); break;     /* 若第二个字符是+，表示 A+ */
                case '\n': printf("score=90\n"); break;     /* 若第二个字符是\n，表示 A */
                case '-': printf("score=85\n"); break;      /* 若第二个字符是-，表示 A- */
            }
            break;
        case 'B':
            switch (grade2)                                 /* 若第一个字符是 B，继续对第二个字符进行判断 */
            {
                case '+': printf("score=80\n"); break;      /* 若第二个字符是+，表示 B+ */
                case '\n': printf("score=75\n"); break;     /* 若第二个字符是\n，表示 B */
                case '-': printf("score=70\n"); break;      /* 若第二个字符是-，表示 B- */
            }
            break;
        case 'C': printf("score=60\n"); break;              /* 若第一个字符是 C，表示 C */
        case 'D': printf("score<60\n"); break;              /* 若第一个字符是 D，表示 D */
        default: printf("input error\n");                   /* 其他，则提示输入错误 */
    }

    return 0;
}