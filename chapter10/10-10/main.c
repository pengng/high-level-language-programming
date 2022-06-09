#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp1, *fp2;

	fp1 = fopen("ch1.txt", "r");			/* 以只读方式打开一个文本文件 */
	fp2 = fopen("ch2.txt", "w");			/* 以只写方式打开另一个文本文件 */

	while (!feof(fp1))						/* 输出 fp1 所指向的文件内容 */
		putchar(fgetc(fp1));				/* 从 fp1 所指向的文件中读取一个字符并输出 */
	rewind(fp1);							/* 将 fp1 所指向文件的位置指针指向文件头 */

	while (!feof(fp1))						/* 当 fp1 所指向的文件没有到达文件尾时，则不断从 fp1 所指向的文件中读取一个字符写入到 fp2 所指向的文件，直至到达文件尾 */
		fputc(fgetc(fp1), fp2);

	fclose(fp1);							/* 关闭 fp1 所指向的文件 */
	fclose(fp2);							/* 关闭 fp2 所指向的文件 */

	return 0;
}