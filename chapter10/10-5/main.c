#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char ch;
	char rfile[20], wfile[20];
	FILE *fpr, *fpw;								/* 定义文件型指针 */

	printf("Please input the source filename\n");
	gets(rfile);									/* 从键盘输入源文件名 */
	printf("Please input the destination filename\n");
	gets(wfile);									/* 从键盘输入目标文件名 */

	if ((fpr = fopen(rfile, "r")) == NULL)			/* 以只读方式打开源文件 */
	{
		printf("Cannot open the file\n");
		exit(1);
	}
	if ((fpw = fopen(wfile, "w")) == NULL)			/* 以只写方式打开目标文件 */
	{
		printf("Cannot open the file\n");
		exit(1);
	}

	while ((ch = fgetc(fpr)) != EOF)
		fputc(ch, fpw);								/* 从 fpr 所指向的文本文件中读取一个字符，并写入到 fpw 所指向的另一个文本文件，直至 fpr 所指向的文件到达文件尾 */

	fclose(fpr);									/* 关闭 fpr 所指向的文件 */
	fclose(fpw);									/* 关闭 fpw 所指向的文件 */

	return 0;
}