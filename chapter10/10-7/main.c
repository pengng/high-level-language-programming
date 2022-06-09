#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	FILE* fptr;
	char string1[80];
	char string2[80];

	if ((fptr = fopen("client.txt", "w")) == NULL)				/* 以只写方式打开文本文件 */
	{
		printf("File cannot open\n");
		exit(1);
	}
	else
	{
		printf("Input a string:\n");
		gets(string1);											/* 从键盘输入一字符串保存到字符数组 string1 */
		fputs(string1, fptr);									/* 将字符数组 string1 中的字符串写入到指定文件 */
		fclose(fptr);											/* 关闭 fptr 所指向的文件 */
	}

	if ((fptr = fopen("client.txt", "r")) == NULL)				/* 以只读方式打开文本文件 */
	{
		printf("File cannot open\n");
		exit(1);
	}
	else
	{
		fgets(string2, strlen(string1) + 1, fptr);				/* 从 fptr 所指向的文本文件中读取一字符串保存到字符数组 string2 */
		printf("the string is:\n");
		fputs(string2, stdout);									/* 将字符数组 string2 中字符串输出到显示器 */
		fclose(fptr);											/* 关闭 fptr 所指向的文件 */
	}

	return 0;
}