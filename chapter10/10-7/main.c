#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	FILE* fptr;
	char string1[80];
	char string2[80];

	if ((fptr = fopen("client.txt", "w")) == NULL)				/* ��ֻд��ʽ���ı��ļ� */
	{
		printf("File cannot open\n");
		exit(1);
	}
	else
	{
		printf("Input a string:\n");
		gets(string1);											/* �Ӽ�������һ�ַ������浽�ַ����� string1 */
		fputs(string1, fptr);									/* ���ַ����� string1 �е��ַ���д�뵽ָ���ļ� */
		fclose(fptr);											/* �ر� fptr ��ָ����ļ� */
	}

	if ((fptr = fopen("client.txt", "r")) == NULL)				/* ��ֻ����ʽ���ı��ļ� */
	{
		printf("File cannot open\n");
		exit(1);
	}
	else
	{
		fgets(string2, strlen(string1) + 1, fptr);				/* �� fptr ��ָ����ı��ļ��ж�ȡһ�ַ������浽�ַ����� string2 */
		printf("the string is:\n");
		fputs(string2, stdout);									/* ���ַ����� string2 ���ַ����������ʾ�� */
		fclose(fptr);											/* �ر� fptr ��ָ����ļ� */
	}

	return 0;
}