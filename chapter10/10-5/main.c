#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char ch;
	char rfile[20], wfile[20];
	FILE *fpr, *fpw;								/* �����ļ���ָ�� */

	printf("Please input the source filename\n");
	gets(rfile);									/* �Ӽ�������Դ�ļ��� */
	printf("Please input the destination filename\n");
	gets(wfile);									/* �Ӽ�������Ŀ���ļ��� */

	if ((fpr = fopen(rfile, "r")) == NULL)			/* ��ֻ����ʽ��Դ�ļ� */
	{
		printf("Cannot open the file\n");
		exit(1);
	}
	if ((fpw = fopen(wfile, "w")) == NULL)			/* ��ֻд��ʽ��Ŀ���ļ� */
	{
		printf("Cannot open the file\n");
		exit(1);
	}

	while ((ch = fgetc(fpr)) != EOF)
		fputc(ch, fpw);								/* �� fpr ��ָ����ı��ļ��ж�ȡһ���ַ�����д�뵽 fpw ��ָ�����һ���ı��ļ���ֱ�� fpr ��ָ����ļ������ļ�β */

	fclose(fpr);									/* �ر� fpr ��ָ����ļ� */
	fclose(fpw);									/* �ر� fpw ��ָ����ļ� */

	return 0;
}