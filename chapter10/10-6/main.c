#include<stdio.h>
#include<stdlib.h>
#define SIZE 256								/* �����ַ������Ȳ�����255 */

int main(void)
{
	char ch[SIZE];
	int c, line;
	FILE *fp;

	if ((fp = fopen("s.txt", "r")) == NULL)		/* ��ֻ����ʽ���ı��ļ� */
	{
		printf("File cannot open\n");
		exit(1);
	}
	
	line = 1;									/* �кŵĳ�ʼֵ����Ϊ1 */
	while (fgets(ch, SIZE, fp) != NULL)			/* �� fp ��ָ����ļ��ж�ȡһ���ַ��������ַ����� ch ��ֱ���ļ����� */
		printf("%4d\t%s", line++, ch);			/* �����кŵ��ַ�����ʾ����Ļ�� */
	fclose(fp);									/* �ر� fp ��ָ����ļ� */

	return 0;
}