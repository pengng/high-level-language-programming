#include<stdio.h>
#include<stdlib.h>
#define SIZE 256								/* 假设字符串长度不大于255 */

int main(void)
{
	char ch[SIZE];
	int c, line;
	FILE *fp;

	if ((fp = fopen("s.txt", "r")) == NULL)		/* 以只读方式打开文本文件 */
	{
		printf("File cannot open\n");
		exit(1);
	}
	
	line = 1;									/* 行号的初始值设置为1 */
	while (fgets(ch, SIZE, fp) != NULL)			/* 从 fp 所指向的文件中读取一个字符串存入字符数组 ch ，直到文件结束 */
		printf("%4d\t%s", line++, ch);			/* 加上行号的字符串显示在屏幕上 */
	fclose(fp);									/* 关闭 fp 所指向的文件 */

	return 0;
}