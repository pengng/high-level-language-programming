#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp1, *fp2;

	fp1 = fopen("ch1.txt", "r");			/* ��ֻ����ʽ��һ���ı��ļ� */
	fp2 = fopen("ch2.txt", "w");			/* ��ֻд��ʽ����һ���ı��ļ� */

	while (!feof(fp1))						/* ��� fp1 ��ָ����ļ����� */
		putchar(fgetc(fp1));				/* �� fp1 ��ָ����ļ��ж�ȡһ���ַ������ */
	rewind(fp1);							/* �� fp1 ��ָ���ļ���λ��ָ��ָ���ļ�ͷ */

	while (!feof(fp1))						/* �� fp1 ��ָ����ļ�û�е����ļ�βʱ���򲻶ϴ� fp1 ��ָ����ļ��ж�ȡһ���ַ�д�뵽 fp2 ��ָ����ļ���ֱ�������ļ�β */
		fputc(fgetc(fp1), fp2);

	fclose(fp1);							/* �ر� fp1 ��ָ����ļ� */
	fclose(fp2);							/* �ر� fp2 ��ָ����ļ� */

	return 0;
}