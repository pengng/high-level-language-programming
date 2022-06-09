#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

struct student_type										/* ����ѧ����Ϣ�Ľṹ������ */
{
	char name[10];
	int num;
	int age;
	char addr[15];
} stud[SIZE];

void save()												/* ���屣��ѧ����Ϣ�ĺ��� */
{
	FILE *fp;
	int i;
	
	if ((fp = fopen("stu_list", "wb")) == NULL)			/* ��ֻд��ʽ�򿪶������ļ� */
	{
		printf("cannot open file\n");
		exit(1);
	}

	for (i = 0; i < SIZE; i++)
		if (fwrite(&stud[i], sizeof(struct student_type), 1, fp) != 1)
			printf("file write error\n");				/* ���ν�ÿ���ṹ����������Ԫ�� stud[i] ������д�뵽 fp ��ָ����ļ� */
	fclose(fp);											/* �ر� fp ��ָ����ļ� */
}

void display()											/* ������ʾѧ����Ϣ�ĺ��� */
{
	FILE *fp;
	int i;

	if ((fp = fopen("stu_list", "rb")) == NULL)			/* ��ֻ����ʽ�򿪶������ļ� */
	{
		printf("cannot open file\n");
		exit(1);
	}

	for (i = 0; i < SIZE; i++)							/* �� fp ��ָ����ļ�����һ��ȡѧ���Ľṹ���������ݱ��浽�ṹ����������Ԫ�ز���� */
	{
		fread(&stud[i], sizeof(struct student_type), 1, fp);
		printf("%-10s %4d %4d %-15s\n", stud[i].name, stud[i].num, stud[i].age, stud[i].addr);
	}
	fclose(fp);											/* �ر� fp ��ָ����ļ� */
}

int main(void)											/* ������ */
{
	int i;
	for (i = 0; i < SIZE; i++)
		scanf("%s%d%d%s", stud[i].name, &stud[i].num, &stud[i].age, stud[i].addr);		/* �Ӽ�����������ÿ��ѧ������Ϣ */

	save();												/* ���ú��� save() */
	display();											/* ���ú��� display() */

	return 0;
}